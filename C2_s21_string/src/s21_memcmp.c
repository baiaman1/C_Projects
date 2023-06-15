#include "s21_string.h"

// Сравнивает первые n байтов str1 и str2.

int s21_memcmp(const void *s1, const void *s2, s21_size_t n) {
    unsigned char *str1 = (unsigned char *)s1;
    unsigned char *str2 = (unsigned char *)s2;
    s21_size_t i = 0, flag = 0;
    while (i < n) {
        if (str1[i] != str2[i]) {
            flag = (str1[i] - str2[i]);
            i += n;
        }
        i++;
    }
    return flag;
}

