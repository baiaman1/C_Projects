#include "s21_string.h"

// Еще одна функция для копирования n символов из src в dest.

void *s21_memmove(void *dest, const void *src, s21_size_t n) {
    char *pd = (char *)dest;
    const char *ps = (const char*)src;
    if (dest < src) {
        while (n-- > 0) {
            *pd++ = *ps++;
        }
    } else {
        pd = pd + n;
        ps = ps + n;
        while (n-- > 0) {
            *--pd = *--ps;
        }
    }
    return dest;
}

