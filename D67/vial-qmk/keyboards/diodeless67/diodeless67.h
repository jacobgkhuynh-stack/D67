#pragma once

#include "quantum.h"

#define LAYOUT_65( \
    k01, k02, k03, k04, k05, k06, k07, k08, k09, k10, k11, k12, k13, k14, enc, \
    k16, k17, k18, k19, k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k30, \
    k31, k32, k33, k34, k35, k36, k37, k38, k39, k40, k41, k42,      k43, k44, \
    k45,      k46, k47, k48, k49, k50, k51, k52, k53, k54, k55, k56, k57, k58, \
    k59, k60, k61,                k62,                k63, k64, k65, k66, k67  \
) { \
    { k01, k02, k03, k04, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, k05, k06, k07, k08, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k09, k10, KC_NO, KC_NO, KC_NO, k11, k12 }, \
    { KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k13, KC_NO, KC_NO, k14, enc, k64, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, k18, KC_NO, k20, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k25, k29, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, k17, KC_NO, KC_NO, k35, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k30, KC_NO, KC_NO, k27 }, \
    { KC_NO, KC_NO, KC_NO, k19, k49, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k65, k41, KC_NO }, \
    { k16, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k22, KC_NO, KC_NO, KC_NO, k40, KC_NO, KC_NO, k66, KC_NO, KC_NO }, \
    { k31, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k23, KC_NO, KC_NO, KC_NO, k62, KC_NO, KC_NO, KC_NO, k42 }, \
    { k45, KC_NO, KC_NO, KC_NO, KC_NO, k50, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k44, KC_NO, k55, KC_NO }, \
    { KC_NO, k32, KC_NO, KC_NO, KC_NO, k36, KC_NO, KC_NO, k28, KC_NO, k54, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, k34, KC_NO, k21, KC_NO, KC_NO, KC_NO, k24, KC_NO, k63, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, k46, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k38, KC_NO, k39, KC_NO, KC_NO, KC_NO, k67, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, k33, KC_NO, KC_NO, KC_NO, k37, KC_NO, KC_NO, k53, KC_NO, KC_NO, k58, KC_NO, KC_NO, KC_NO }, \
    { KC_NO, KC_NO, KC_NO, k48, KC_NO, KC_NO, k51, KC_NO, k43, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, k56 }, \
    { KC_NO, KC_NO, k47, KC_NO, KC_NO, KC_NO, KC_NO, k52, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }, \
    { k59, k60, k61, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO }  \
}
