#include "s21_string.h"

// Возвращает копию строки (str), преобразованной в нижний регистр.
// В случае какой-либо ошибки следует вернуть значение NULL

void* s21_to_lower(const char* str) {
    char* res = NULL;
    if (str) {
        res = (char*)malloc((s21_strlen(str) + 1) * sizeof(char));
        if (res) {
            s21_strcpy(res, str);
            for (char* tmp_str = res; *tmp_str; tmp_str++) {
                if (*tmp_str >= 'A' && *tmp_str <= 'Z') {
                    *tmp_str += 32;
                }
            }
        }
    }
    return res;
}

