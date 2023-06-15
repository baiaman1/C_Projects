#include "s21_string.h"

// Добавляет строку, на которую указывает src, в конец строки, на которую указывает dest.

char *s21_strcat(char *dest, const char *src) {
    char *flag;
    char *start = dest;
    while (*start != '\0') {
        start++;
    }
    while (*src != '\0') {
        *start++ = *src++;
    }
    *start = '\0';
    flag = dest;
    return flag;
}
