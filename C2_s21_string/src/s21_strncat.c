#include "s21_string.h"

char *s21_strncat(char *dest, const char *src, s21_size_t count) {
    char *p = dest + s21_strlen(dest);
    while (*src != '\0' && count--) {
        *p++ = *src++;
    }
    *p = '\0';
    return dest;
}
