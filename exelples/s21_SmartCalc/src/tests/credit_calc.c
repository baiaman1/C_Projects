#include "./_test.h"
#include "../s21_smart_calc.h"



START_TEST(credit_1) {
    double cr_sum = 150500.0;
    double dur_v = 2.0;
    double dur_t = 1.0;
    double cr_perc = 5.0;
    double cr_t = 1.0;
    double res_m_1, res_m_2, res_p_1, res_t_1;
    // double ori_m_1 = ;
    double ori_m_2 = 6602.64;
    double ori_p_1 = 7963.36;
    double ori_t_1 = 158463.36;

    s21_credit_calc(cr_sum, dur_v, dur_t, cr_perc, cr_t, &res_m_1, &res_m_2, &res_p_1, &res_t_1);

    ck_assert_double_eq_tol(res_m_2, ori_m_2, 1e-07);
    ck_assert_double_eq_tol(res_p_1, ori_p_1, 1e-07);
    ck_assert_double_eq_tol(res_t_1, ori_t_1, 1e-07);

}
END_TEST

START_TEST(credit_2) {
    double cr_sum = 150500.0;
    double dur_v = 2.0;
    double dur_t = 1.0;
    double cr_perc = 5.0;
    double cr_t = 2.0;
    double res_m_1, res_m_2, res_p_1, res_t_1;
    double ori_m_1 = 6897.92;
    double ori_m_2 = 6296.96;
    double ori_p_1 = 7838.54;
    double ori_t_1 = 158338.54;

    s21_credit_calc(cr_sum, dur_v, dur_t, cr_perc, cr_t, &res_m_1, &res_m_2, &res_p_1, &res_t_1);

    ck_assert_double_eq_tol(res_m_1, ori_m_1, 1e-07);
    ck_assert_double_eq_tol(res_m_2, ori_m_2, 1e-07);
    ck_assert_double_eq_tol(res_p_1, ori_p_1, 1e-07);
    ck_assert_double_eq_tol(res_t_1, ori_t_1, 1e-07);
}
END_TEST

Suite *suite_credit_calc(void) {
    Suite *s = suite_create("credit");
    TCase *tc = tcase_create("credit");
    tcase_add_test(tc, credit_1);
    tcase_add_test(tc, credit_2);
    suite_add_tcase(s, tc);
    return s;
}
