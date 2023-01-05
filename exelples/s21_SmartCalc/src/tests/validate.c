#include "./_test.h"
#include "../s21_smart_calc.h"

START_TEST(remove_unary_1) {
    char input[INPUT_SIZE] = "-(8 + (-2)) -1 - 2";
    remove_unary(input);
    ck_assert_str_eq(input, "0-(8 + (0-2)) -1 - 2");
}
END_TEST

START_TEST(remove_spaces_1) {
    char input[INPUT_SIZE] = " 0-(8 + (0-2)) -1 - 2";
    remove_spaces(input);
    ck_assert_str_eq(input, "0-(8+(0-2))-1-2");
}
END_TEST

START_TEST(str_replace_1) {
    char input[INPUT_SIZE] = " (8.0 + sin(-2)) -1 -- 2";
    str_replace(input, "sin", "s");
    ck_assert_str_eq(input, " (8.0 + s(-2)) -1 -- 2");
}
END_TEST

START_TEST(shrink_func_names_1) {
    char input[INPUT_SIZE] = "1 mod 2 + cos(8.0) + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    shrink_func_names(input);
    ck_assert_str_eq(input, "1 m 2 + c(8.0) + s(-2) +t(C(x) + S(x)) +T(0) +q(-1) +n(g(2))");
}
END_TEST

START_TEST(validate_1) {
    char input[INPUT_SIZE] = " -(8 + (-2))) -1 - 2";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 2);
}
END_TEST

START_TEST(validate_2) {
    char input[INPUT_SIZE] = "-(8.0009) + (-2.0) -1 - 2";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 0);
}
END_TEST

START_TEST(validate_3) {
    char input[INPUT_SIZE] = " -(8 + (-2.0.0)) -1 - 2";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 1);
}
END_TEST

START_TEST(validate_4) {
    char input[INPUT_SIZE] = " -(-8 * z(-2))) -1 - 2";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 4);
}
END_TEST

START_TEST(validate_5) {
    char input[INPUT_SIZE] = " (8.0 + (-2)) -1 - 2(";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 5);
}
END_TEST

START_TEST(validate_6) {
    char input[INPUT_SIZE] = " (8.0 + (-2)) -1 -- 2";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 3);
}
END_TEST

START_TEST(validate_7) {
    char input[INPUT_SIZE] = " (8.0 + (-2)) - 1 mod 2.0";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 0);
}
END_TEST

START_TEST(validate_trig_1) {
    char input[INPUT_SIZE] = "1 mod 2 + cos() + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 2);
}
END_TEST

START_TEST(validate_trig_2) {
    char input[INPUT_SIZE] = "1 mod 2 + cos(8.0) + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 0);
}
END_TEST

START_TEST(validate_trig_3) {
    char input[INPUT_SIZE] = "1 mod 2 + cos8.0) + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 6);
}
END_TEST

START_TEST(validate_trig_4) {
    char input[INPUT_SIZE] = "1x mod 2 + cos(8.0) + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 7);
}
END_TEST

START_TEST(validate_trig_5) {
    char input[INPUT_SIZE] = "1 mod 2 + cos(x8.0) + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 7);
}
END_TEST

START_TEST(validate_trig_6) {
    char input[INPUT_SIZE] = "1 mod 2 + x(8.0) + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 7);
}
END_TEST

START_TEST(validate_trig_7) {
    char input[INPUT_SIZE] = "1 mod 2 + x8 + sin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 7);
}
END_TEST

START_TEST(validate_trig_8) {
    char input[INPUT_SIZE] = "1 mod 2 + x8 + xsin(-2) +tan(acos(x) + asin(x)) +atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 7);
}
END_TEST

START_TEST(validate_trig_9) {
    char input[INPUT_SIZE] = "sin(-2) * tan(acos(x) / asin(x)) ^ atan(0) +sqrt(-1) +ln(log(2))";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 0);
}
END_TEST

START_TEST(validate_other_1) {
    char input[INPUT_SIZE] = "x + 1";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 0);
}
END_TEST

START_TEST(validate_other_2) {
    char input[INPUT_SIZE] = "xx";
    int v = s21_validate(input);
    ck_assert_int_eq(v, 7);
}
END_TEST

Suite *suite_validate(void) {
    Suite *s = suite_create("validate");
    TCase *tc = tcase_create("validate");
    tcase_add_test(tc, remove_unary_1);
    tcase_add_test(tc, remove_spaces_1);
    tcase_add_test(tc, str_replace_1);
    tcase_add_test(tc, shrink_func_names_1);
    tcase_add_test(tc, validate_1);
    tcase_add_test(tc, validate_2);
    tcase_add_test(tc, validate_3);
    tcase_add_test(tc, validate_4);
    tcase_add_test(tc, validate_5);
    tcase_add_test(tc, validate_6);
    tcase_add_test(tc, validate_7);
    tcase_add_test(tc, validate_trig_1);
    tcase_add_test(tc, validate_trig_2);
    tcase_add_test(tc, validate_trig_3);
    tcase_add_test(tc, validate_trig_4);
    tcase_add_test(tc, validate_trig_5);
    tcase_add_test(tc, validate_trig_6);
    tcase_add_test(tc, validate_trig_7);
    tcase_add_test(tc, validate_trig_8);
    tcase_add_test(tc, validate_trig_9);
    tcase_add_test(tc, validate_other_1);
    tcase_add_test(tc, validate_other_2);
    suite_add_tcase(s, tc);
    return s;
}
