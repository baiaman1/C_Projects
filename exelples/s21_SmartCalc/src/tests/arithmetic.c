#include "./_test.h"
#include "../s21_smart_calc.h"

START_TEST(arithmetic_1) {
    char input[INPUT_SIZE] = "3 + 4 * 2 / ( 1 - 5 ) ^ 2 ^ 3";
    s21_validate(input);
    int err = 0;
    N_stack* i = s21_input_to_infix_expression(input, &err);
    N_stack* p = s21_infix_expr_to_postfix(*i, &err);
    double res = s21_calc_rpn(*p, 0);
    double ori = 3 + 8.0 / pow(-4, 8);
    ck_assert_double_eq_tol(res, ori, 1e-07);
    s21_remove_stack(i);
    s21_remove_stack(p);
}
END_TEST

START_TEST(arithmetic_2) {
    char input[INPUT_SIZE] = "3 + 5 mod (6 - 5.4)";
    s21_validate(input);
    int err = 0;
    N_stack* i = s21_input_to_infix_expression(input, &err);
    N_stack* p = s21_infix_expr_to_postfix(*i, &err);
    double res = s21_calc_rpn(*p, 0);
    double ori = 3 + fmod(5, 0.6);
    ck_assert_double_eq_tol(res, ori, 1e-07);
    s21_remove_stack(i);
    s21_remove_stack(p);
}
END_TEST

Suite *suite_arithmetic(void) {
    Suite *s = suite_create("arithmetic");
    TCase *tc = tcase_create("arithmetic");
    tcase_add_test(tc, arithmetic_1);
    tcase_add_test(tc, arithmetic_2);
    suite_add_tcase(s, tc);
    return s;
}
