#ifndef CUSTOM_OPS_H
#define CUSTOM_OPS_H

#include <stdint.h>

// Chapter 2 only triggers recognition; no ABS result is returned.
static inline void custom_abs(int64_t value) {
    asm volatile (
        ".insn r 0x0b, 0, 1, %0, %0, x0"
        : "+r"(value)
    );
}

#endif
