#include "s21_string.h"

// Выполняет поиск последнего вхождения символа c (беззнаковый тип)
// в строке, на которую указывает аргумент str.

char *s21_strrchr(const char *str, int c) {
    const char *res = s21_NULL;
    if (str != s21_NULL) {
        do {
            if (*str == (char)c) {
                res = str;
            }
        } while (*str++);
    }
    return (char *)res;
}
