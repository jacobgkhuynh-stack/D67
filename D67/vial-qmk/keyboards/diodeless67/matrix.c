#include "matrix.h"
#include "quantum.h"

static const pin_t row_pins[MATRIX_ROWS - 1] = {
    GP42, GP44, GP46, GP4,
    GP39, GP38, GP33, GP37,
    GP20, GP32, GP26, GP9,
    GP19, GP7,  GP18, GP10
};

static const pin_t col_pins[MATRIX_COLS] = {
    GP12, GP13, GP14, GP15,
    GP16, GP17, GP21, GP47,
    GP3,  GP43, GP8,  GP5,
    GP27, GP2,  GP6,  GP1
};

static const pin_t direct_pins[3] = { GP0, GP28, GP11 };

void matrix_init_custom(void) {
    /* Initialize sense columns with pull-ups */
    for (uint8_t c = 0; c < MATRIX_COLS; c++) {
        setPinInputHigh(col_pins[c]);
    }
    /* Initialize drive rows to Hi-Z floating */
    for (uint8_t r = 0; r < MATRIX_ROWS - 1; r++) {
        setPinInput(row_pins[r]);
    }
    /* Initialize direct-pin switches with pull-ups */
    for (uint8_t d = 0; d < 3; d++) {
        setPinInputHigh(direct_pins[d]);
    }
}

bool matrix_scan_custom(matrix_row_t current_matrix[]) {
    bool matrix_has_changed = false;

    /* Scan 16 bipartite graph rows */
    for (uint8_t r = 0; r < MATRIX_ROWS - 1; r++) {
        pin_t r_pin = row_pins[r];

        /* Drive active row LOW */
        setPinOutput(r_pin);
        writePinLow(r_pin);
        matrix_io_delay();

        /* Read all 16 columns */
        matrix_row_t row_val = 0;
        for (uint8_t c = 0; c < MATRIX_COLS; c++) {
            if (!readPin(col_pins[c])) {
                row_val |= ((matrix_row_t)1 << c);
            }
        }

        /* Return row pin to Hi-Z floating immediately */
        setPinInput(r_pin);

        if (current_matrix[r] != row_val) {
            current_matrix[r] = row_val;
            matrix_has_changed = true;
        }
    }

    /* Scan Direct-pin switches on virtual row 16 */
    matrix_row_t direct_val = 0;
    for (uint8_t d = 0; d < 3; d++) {
        if (!readPin(direct_pins[d])) {
            direct_val |= ((matrix_row_t)1 << d);
        }
    }

    if (current_matrix[16] != direct_val) {
        current_matrix[16] = direct_val;
        matrix_has_changed = true;
    }

    return matrix_has_changed;
}
