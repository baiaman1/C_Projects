#include "../s21_smart_calc.h"
#include "./test.h"

START_TEST(replace_x_1) {
  char input[STR_MAX] = "cos(x)";
  char value_x[STR_MAX] = "5";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "cos(5)");
}
END_TEST

START_TEST(replace_x_2) {
  char input[STR_MAX] = "sin(x)+cos(x)";
  char value_x[STR_MAX] = "7";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "sin(7)+cos(7)");
}
END_TEST

START_TEST(replace_x_3) {
  char input[STR_MAX] = "x + 5";
  char value_x[STR_MAX] = "10";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "10 + 5");
}
END_TEST

START_TEST(replace_x_4) {
  char input[STR_MAX] = "sqrt(x) + tan(x)";
  char value_x[STR_MAX] = "8";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "sqrt(8) + tan(8)");
}
END_TEST

START_TEST(replace_x_5) {
  char input[STR_MAX] = "log(x)";
  char value_x[STR_MAX] = "2";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "log(2)");
}
END_TEST

START_TEST(replace_x_6) {
  char input[STR_MAX] = "ln(x)";
  char value_x[STR_MAX] = "9";
  char *res = replace_x(input, value_x);
  ck_assert_str_eq(res, "ln(9)");
}
END_TEST

START_TEST(unary_1) {
  char input[STR_MAX] = "5+7";
  char *res = unary(input);
  ck_assert_str_eq(res, "5+(-7)");
}
END_TEST

START_TEST(unary_2) {
  char input[STR_MAX] = "25+9";
  char *res = unary(input);
  ck_assert_str_eq(res, "25+(-9)");
}
END_TEST

START_TEST(unary_3) {
  char input[STR_MAX] = "50+(-5)";
  char *res = unary(input);
  ck_assert_str_eq(res, "50+5");
}
END_TEST

START_TEST(unary_4) {
  char input[STR_MAX] = "7+(-5)";
  char *res = unary(input);
  ck_assert_str_eq(res, "7+5");
}
END_TEST

START_TEST(val_1) {
  char input[STR_MAX] = "9cos(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 13);
}
END_TEST

START_TEST(val_2) {
  char input[STR_MAX] = "9s(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 13);
}
END_TEST

START_TEST(val_3) {
  char input[STR_MAX] = "9t(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 13);
}
END_TEST

START_TEST(val_4) {
  char input[STR_MAX] = "9a(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 13);
}
END_TEST

START_TEST(val_5) {
  char input[STR_MAX] = "9l(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 13);
}
END_TEST

START_TEST(val2_1) {
  char input[STR_MAX] = ".9cos(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 2);
}
END_TEST

START_TEST(val2_2) {
  char input[STR_MAX] = "^9s(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 2);
}
END_TEST

START_TEST(val2_3) {
  char input[STR_MAX] = "*9t(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 2);
}
END_TEST

START_TEST(val2_4) {
  char input[STR_MAX] = "/9a(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 2);
}
END_TEST

START_TEST(val2_5) {
  char input[STR_MAX] = "%9l(3-5)";
  int res = validate(input);
  ck_assert_int_eq(res, 2);
}
END_TEST

Suite *suite_validate(void) {
  Suite *s = suite_create("validate");
  TCase *tc = tcase_create("validate");

  tcase_add_test(tc, replace_x_1);
  tcase_add_test(tc, replace_x_2);
  tcase_add_test(tc, replace_x_3);
  tcase_add_test(tc, replace_x_4);
  tcase_add_test(tc, replace_x_5);
  tcase_add_test(tc, replace_x_6);

  tcase_add_test(tc, unary_1);
  tcase_add_test(tc, unary_2);
  tcase_add_test(tc, unary_3);
  tcase_add_test(tc, unary_4);

  tcase_add_test(tc, val_1);
  tcase_add_test(tc, val_2);
  tcase_add_test(tc, val_3);
  tcase_add_test(tc, val_4);
  tcase_add_test(tc, val_5);

  tcase_add_test(tc, val2_1);
  tcase_add_test(tc, val2_2);
  tcase_add_test(tc, val2_3);
  tcase_add_test(tc, val2_4);
  tcase_add_test(tc, val2_5);

  suite_add_tcase(s, tc);
  return s;
}
