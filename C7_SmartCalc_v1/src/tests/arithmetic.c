#include "../s21_smart_calc.h"
#include "./test.h"

START_TEST(arithmetic_1) {
  char input[STR_MAX] = "3+4*2/(1-5)^2^3";
  calculate(input);

  double res = atof(input);
  double ori = 3 + 8.0 / pow(-4, 8);
  ck_assert_double_eq_tol(res, ori, 1e-07);
}
END_TEST

START_TEST(arithmetic_2) {
  char input[STR_MAX] = "3+5%(6-5.4)";
  calculate(input);

  double res = atof(input);
  double ori = 3 + fmod(5, 0.6);
  ck_assert_double_eq_tol(res, ori, 1e-07);
}
END_TEST

START_TEST(arithmetic_3) {
  char input[STR_MAX] = "3+5%(6-5.4)*10*22";
  calculate(input);

  double res = atof(input);
  double ori = 3 + fmod(5, 0.6) * 10 * 22;
  ck_assert_double_eq_tol(res, ori, 1e-07);
}
END_TEST

START_TEST(arithmetic_4) {
  char input[STR_MAX] = "cos(5)+sin(5)*sqrt(121)";
  calculate(input);

  double res = atof(input);
  double ori = cos(5) + sin(5) * sqrt(121);
  ck_assert_double_eq_tol(res, ori, 1e-06);
}
END_TEST

START_TEST(arithmetic_5) {
  char input[STR_MAX] = "5^5*cos(6)";
  calculate(input);

  double res = atof(input);
  double ori = pow(5, 5) * cos(6);
  ck_assert_double_eq_tol(res, ori, 1e-06);
}
END_TEST

START_TEST(arithmetic_6) {
  char input[STR_MAX] = "tan(5)*log(7)+ln(2)*2-10";
  calculate(input);

  double res = atof(input);
  double ori = tan(5) * log10(7) + log(2) * 2 - 10;
  ck_assert_double_eq_tol(res, ori, 1e-06);
}
END_TEST

START_TEST(arithmetic_7) {
  char input[STR_MAX] = "sqrt(123)+sqrt(500)+ln(25+1)-log(24)";
  calculate(input);

  double res = atof(input);
  double ori = sqrt(123) + sqrt(500) + log(25 + 1) - log10(24);
  ck_assert_double_eq_tol(res, ori, 1e-06);
}
END_TEST

START_TEST(arithmetic_8) {
  char input[STR_MAX] = "tan(3)+sin(2)*sin(5)*cos(8)*ln(4)+log(33)";
  calculate(input);

  double res = atof(input);
  double ori = tan(3) + sin(2) * sin(5) * cos(8) * log(4) + log10(33);
  ck_assert_double_eq_tol(res, ori, 1e-06);
}
END_TEST

START_TEST(arithmetic_9) {
  char input[STR_MAX] = "sqrt(124)+sin(24)-sin(2)*cos(6)*tan(8)";
  calculate(input);

  double res = atof(input);
  double ori = sqrt(124) + sin(24) - sin(2) * cos(6) * tan(8);
  ck_assert_double_eq_tol(res, ori, 1e-07);
}
END_TEST

Suite *suite_arithmetic(void) {
  Suite *s = suite_create("arithmetic");
  TCase *tc = tcase_create("arithmetic");
  tcase_add_test(tc, arithmetic_1);
  tcase_add_test(tc, arithmetic_2);
  tcase_add_test(tc, arithmetic_3);
  tcase_add_test(tc, arithmetic_4);
  tcase_add_test(tc, arithmetic_5);
  tcase_add_test(tc, arithmetic_6);
  tcase_add_test(tc, arithmetic_7);
  tcase_add_test(tc, arithmetic_8);
  tcase_add_test(tc, arithmetic_9);

  suite_add_tcase(s, tc);
  return s;
}
