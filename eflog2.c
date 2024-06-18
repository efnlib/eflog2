#include "eflog2.h"

#include <efpopcount.h>

uint32_t eflog2(uint32_t x) {
    uint32_t a;
    uint32_t b;
    uint32_t c;
    uint32_t d;
    uint32_t e;
    uint32_t f;
    a = x | (x >> 0x01);
    b = a | (a >> 0x02);
    c = b | (b >> 0x04);
    d = c | (c >> 0x08);
    e = d | (d >> 0x10);
    f = e >> 0x01;
    return efpopcount(f);
}
