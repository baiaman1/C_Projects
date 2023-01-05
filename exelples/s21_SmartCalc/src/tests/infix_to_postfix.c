#include "./_test.h"
#include "../s21_smart_calc.h"

START_TEST(str_to_infix_1) {
    char input[INPUT_SIZE] = " -5 + sin(cos(2.1)) * 6";
    int v = s21_validate(input);
    int err = 0;
    N_stack* s = s21_input_to_infix_expression(input, &err);
    int q = s->array[0].type;
    double a = s->array[s->top].value;
    ck_assert_int_eq(v, 0);
    ck_assert_int_eq(q, 0);
    ck_assert_double_eq(a, 6.0);
    s21_remove_stack(s);
}
END_TEST

START_TEST(infix_to_postfix_1) {
    char input[INPUT_SIZE] = "3 + 4 * 2 / ( 1 - 5 ) ^ 2 ^ 3";
    int v = s21_validate(input);
    int err = 0;
    N_stack* i = s21_input_to_infix_expression(input, &err);
    N_stack* p = s21_infix_expr_to_postfix(*i, &err);  // 3 4 2 * 1 5 − 2 3 ^ ^ / +
    ck_assert_int_eq(v, 0);
    ck_assert_int_eq(p->array[p->top].type, 2);
    s21_remove_stack(i);
    s21_remove_stack(p);
}
END_TEST

START_TEST(infix_to_postfix_2) {
    char input[INPUT_SIZE] = "sin ( cos ( 2 ) / 3 * x )";
    int v = s21_validate(input);
    int err = 0;
    N_stack* i = s21_input_to_infix_expression(input, &err);
    N_stack* p = s21_infix_expr_to_postfix(*i, &err);  // 2 cos 3 / x * sin
    ck_assert_int_eq(v, 0);
    ck_assert_int_eq(p->array[p->top].type, 9);
    s21_remove_stack(i);
    s21_remove_stack(p);
}
END_TEST

Suite *suite_infix_to_postfix(void) {
    Suite *s = suite_create("infix_to_postfix");
    TCase *tc = tcase_create("infix_to_postfix");
    tcase_add_test(tc, str_to_infix_1);
    tcase_add_test(tc, infix_to_postfix_1);
    tcase_add_test(tc, infix_to_postfix_2);
    suite_add_tcase(s, tc);
    return s;
}
