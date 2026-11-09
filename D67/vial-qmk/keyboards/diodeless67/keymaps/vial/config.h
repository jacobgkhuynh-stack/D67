#pragma once

#include "config_common.h"

#define MATRIX_ROWS 17
#define MATRIX_COLS 16

/* 16 Row (Drive) Pins: Set A */
#define MATRIX_ROW_PINS { \
    GP42, GP44, GP46, GP4,  \
    GP39, GP38, GP33, GP37, \
    GP20, GP32, GP26, GP9,  \
    GP19, GP7,  GP18, GP10, \
    NO_PIN                  \
}

/* 16 Column (Sense) Pins: Set B */
#define MATRIX_COL_PINS { \
    GP12, GP13, GP14, GP15, \
    GP16, GP17, GP21, GP47, \
    GP3,  GP43, GP8,  GP5,  \
    GP27, GP2,  GP6,  GP1   \
}

/* 3 Direct-pin switches mapped to row 16 */
#define DIRECT_PINS { \
    { GP0, GP28, GP11 } \
}

#define DIODE_DIRECTION ROW2COL

/* Rotary Encoder pins */
#define ENCODERS_PAD_A { GP30 }
#define ENCODERS_PAD_B { GP29 }
#define ENCODER_RESOLUTION 4
