#include "../s21_decimal.h"

// округление вниз
int s21_floor(s21_decimal value, s21_decimal *result) {
  if (result == NULL) {
    return 1;
  }
  // error = 1 если ошибка вычисления
  int error = 0;
  s21_decimal fractional_part = {0};
  s21_take_fractional_part(value, &fractional_part);
  // if negative && есть ненулевая дробная часть
  if ((value.bits[3] & 0x80000000) != 0 && !is_zero(fractional_part)) {
    s21_decimal truncated_part = {0};
    s21_truncate(value, &truncated_part);
    s21_decimal one = {0};
    s21_one(&one);
    s21_sub(truncated_part, one, result);

  } else {  // if positive
    s21_truncate(value, result);
  }

  return error;
}

/***************************helpers*************************************************/

int is_zero(s21_decimal value) {
  int res = 1;
  for (int i = 0; i < 3;
       i++) {  // нули могут быть с заполненными последними 32 битами
    if (value.bits[i] != 0) {
      res = 0;
      i = 4;
    }
  }
  return res;
}

int s21_take_fractional_part(
    s21_decimal value,
    s21_decimal *fractional_part) {  // дробная часть и биты степени 10
  // надо брать без знакового бита
  int error = 0;
  s21_decimal truncated_part = {0};
  s21_truncate(value, &truncated_part);
  s21_sub(value, truncated_part, fractional_part);
  fractional_part->bits[3] =
      fractional_part->bits[3] & 0x00ff0000;  // убрал знаковый бит

  return error;
}

int s21_one(s21_decimal *one_value) {
  int error = 0;
  for (int i = 0; i < 4; i++) {
    one_value->bits[i] = 0;
  }
  one_value->bits[0] = 1;
  return error;
}
/****************************************************************************/