#include "../s21_decimal.h"

int s21_mod(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // 0 - OK
  // 1 - the number is too large or equal to infinity
  // 2 - the number is too small or equal to negative infinity
  // 3 - division by 0
  int output_code = 0;
  int sign = GetSign(value_1) ^ GetSign(value_2);
  int exp = CheckExp(value_1) > CheckExp(value_2) ? CheckExp(value_1)
                                                  : CheckExp(value_2);
  s21_decimal zero = {{0, 0, 0, 0}};

  if (s21_is_equal(value_2, zero)) {
    // Division by zero
    output_code = DIV_BY_ZERO;
  } else if (s21_is_equal(value_1, zero)) {
    // Division of zero
    *result = value_1;
  } else {
    // Calculation
    InitialiseNumber(result);
    s21_big_decimal mod = {{0, 0, 0, 0, 0, 0, 0}};
    s21_big_decimal dividend = ExtendDecimal(value_1);
    s21_big_decimal divider = ExtendDecimal(value_2);
    ShiftComExt(&dividend, &divider);
    ModAlgo(&dividend, divider, &mod);
    mod.bits[6] = SetScale(abs(exp), GetSign(value_1));
    // Overflow check
    output_code = ShortenExtDecimal(mod, result);
    if (output_code != 0) {
      output_code = sign ? MINUS_INF_OR_TOO_SMALL : INF_OR_TOO_BIG;
    }
  }
  return output_code;
}

// Modulo algorithm
void ModAlgo(s21_big_decimal *value_1, s21_big_decimal value_2,
             s21_big_decimal *mod) {
  s21_big_decimal result;
  InitialiseExtNumber(&result);
  s21_big_decimal dividend;
  InitialiseExtNumber(&dividend);
  // Only divider's module is taken
  s21_big_decimal divider = value_2;
  divider.bits[6] = 0;
  int exp = CheckExpExt(*value_1) - CheckExpExt(value_2);
  int sign = GetSignExt(*value_1) ^ GetSignExt(value_2);
  if (exp < 0) {
    for (int i = 0; i < abs(exp); i++) {
      MulExtDec10(value_1);
    }
    exp = 0;
  }
  int j = 0;                            // iteration of dividing
  int num = OccupBitsNumExt(*value_1);  // Number of bits in dividend
  while (j < num) {
    ShiftBitExt(&dividend, 1);
    int k = num - 1 - j;
    dividend.bits[0] ^= GetBitExt(*value_1, k);
    ShiftBitExt(&result, 1);
    if (s21_is_greater_or_equal_big(dividend, divider)) {
      SubAlgo(dividend, divider, &dividend);
      result.bits[0] ^= 1;
    }
    j++;
  }
  result.bits[6] = SetScale(exp, sign);
  *value_1 = result;
  *mod = dividend;
  mod->bits[6] = SetScale(exp, sign);
}
