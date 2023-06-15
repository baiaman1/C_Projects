#include "s21_string.h"

// Выполняет поиск первого вхождения символа c (беззнаковый тип) в строке, на которую указывает аргумент str.

char *s21_strchr(const char *str, int c) {
    char *s = (char*) str;
    unsigned char b = (char) c;
    char *res;
    while (*s != '\0' && *s != b) {  // проходимся по строке до конца или до первого вхождения
        s++;
    }
    if (*s == '\0' && b != '\0') {  // если не нашли - нулл
        res = s21_NULL;
    } else {
        res = s;  // если нашли возвращаем указатель
    }
    return res;
}
