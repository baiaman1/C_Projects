#include "s21_string.h"

// Вычисляет длину строки str, не включая завершающий нулевой символ.

s21_size_t s21_strlen(const char *str) {
    s21_size_t size = 0;
    while (str[size]) {  // пока индекс строки действителен
        ++size;  // увеличиваем счетчик размера
    }
    return size;  // возвращаем размер
}
