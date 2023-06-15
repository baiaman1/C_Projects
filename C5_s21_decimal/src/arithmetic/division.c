#include "../s21_decimal.h"

int s21_div(s21_decimal value_1, s21_decimal value_2, s21_decimal *result) {
  // 0 - OK
  // 1 - the number is too large or equal to infinity
  // 2 - the number is too small or equal to negative infinity
  // 3 - division by 0
  int output_code = 0;
  int sign = GetSign(value_1) ^ GetSign(value_2);
  s21_decimal zero = {{0, 0, 0, 0}};
  s21_decimal one = {{1, 0, 0, 0}};
  if (s21_is_equal(value_2, zero)) {
    // Division by zero
    output_code = DIV_BY_ZERO;
  } else if (s21_is_equal(value_1, zero) || s21_is_equal(value_2, one)) {
    // Cases of divison by 1 and divison of 0
    *result = value_1;
  } else {
    // Calculation
    s21_big_decimal dividend = ExtendDecimal(value_1);
    s21_big_decimal res = {{0, 0, 0, 0, 0, 0, 0}};
    DivAlgo(dividend, value_2, &res);
    // Overflow check
    output_code = ShortenExtDecimal(res, result);
    if (output_code != 0) {
      output_code = sign ? MINUS_INF_OR_TOO_SMALL : INF_OR_TOO_BIG;
    }
  }
  return output_code;
}

// Division algorithm
void DivAlgo(s21_big_decimal value_1, s21_decimal value_2,
             s21_big_decimal *result) {
  InitialiseExtNumber(result);
  s21_big_decimal remainder;
  InitialiseExtNumber(&remainder);
  s21_big_decimal dividend = value_1;
  s21_decimal divider = value_2;
  int exp = CheckExpExt(value_1) - CheckExp(value_2);
  int sign = GetSignExt(value_1) ^ GetSign(value_2);
  if (exp < 0) {
    for (int i = 0; i < abs(exp); i++) {
      MulExtDec10(&dividend);
    }
    exp = 0;
  }
  dividend.bits[6] = SetScale(0, 0);
  divider.bits[3] = SetScale(0, 0);
  do {
    IntDivisionExt(&dividend, divider, &remainder);
    MulExtDec10(result);
    AddAlgo(*result, dividend, result);
    MulExtDec10(&remainder);
    dividend = remainder;
    exp++;
  } while (!(dividend.bits[0] == 0 && dividend.bits[1] == 0 &&
             dividend.bits[2] == 0 && dividend.bits[3] == 0 &&
             dividend.bits[4] == 0 && dividend.bits[5] == 0) &&
           exp <= 28);
  exp--;
  result->bits[6] = SetScale(exp, sign);
}

// Integer division with the same exp
void IntDivisionExt(s21_big_decimal *value_1, s21_decimal value_2,
                    s21_big_decimal *remainder) {
  s21_big_decimal result;
  InitialiseExtNumber(&result);
  s21_big_decimal dividend;
  InitialiseExtNumber(&dividend);
  s21_big_decimal divider = ExtendDecimal(value_2);
  divider.bits[6] = 0;
  int exp = CheckExpExt(*value_1) - CheckExp(value_2);
  int sign = GetSignExt(*value_1) ^ GetSign(value_2);
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
  *remainder = dividend;
  remainder->bits[6] = SetScale(exp, sign);
}

// Integer division by 10
int Div10(s21_decimal value_1, s21_decimal *result) {
  int error = 0;
  s21_decimal ten = {{10, 0, 0, 0}};
  InitialiseNumber(result);
  if (s21_is_greater_or_equal(Module(value_1), ten)) {
    s21_decimal dividend;
    InitialiseNumber(&dividend);
    int j = 0;  // iteration of dividing
    while (j < OccupBitsNum(value_1)) {
      ShiftDecimal(&dividend, 1);
      int k = OccupBitsNum(value_1) - 1 - j;
      dividend.bits[0] ^= GetBit(value_1, k);
      ShiftDecimal(result, 1);
      if (s21_is_greater_or_equal(dividend, ten)) {
        s21_sub(dividend, ten, &dividend);
        result->bits[0] ^= 1;
      }
      j++;
    }
    result->bits[3] = SetScale(CheckExp(value_1), GetSign(value_1));
  }
  return error;
}

// Integer division by 10 for extended decimal
int Div10Ext(s21_big_decimal value_1, s21_big_decimal *result) {
  int error = 0;
  s21_decimal ten = {{10, 0, 0, 0}};
  InitialiseExtNumber(result);
  s21_decimal dividend;
  InitialiseNumber(&dividend);
  int j = 0;  // iteration of dividing
  while (j < OccupBitsNumExt(value_1)) {
    ShiftDecimal(&dividend, 1);
    int k = OccupBitsNumExt(value_1) - 1 - j;
    dividend.bits[0] ^= GetBitExt(value_1, k);
    ShiftBitExt(result, 1);
    if (s21_is_greater_or_equal(dividend, ten)) {
      s21_sub(dividend, ten, &dividend);
      result->bits[0] ^= 1;
    }
    j++;
  }
  result->bits[6] = SetScale(CheckExpExt(value_1), CheckExpExt(value_1));
  return error;
}
