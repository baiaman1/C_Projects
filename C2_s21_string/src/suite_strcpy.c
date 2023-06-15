#include "tests_suitcases.h"

START_TEST(strcpy_1) {
    char str_1[50] = " \n\0\0";
    char str_2[50] = " a\n\0";
    ck_assert_str_eq(strcpy(str_1, str_2), s21_strcpy(str_1, str_2));
} END_TEST

START_TEST(strcpy_2) {
    char str_1[50] = "\n\t";
    char str_2[50] = "\056";
    ck_assert_str_eq(strcpy(str_1, str_2), s21_strcpy(str_1, str_2));
} END_TEST

START_TEST(strcpy_3) {
    char str_1[50] = "Hello";
    char str_2[50] = "\t\n World!";
    ck_assert_str_eq(strcpy(str_1, str_2), s21_strcpy(str_1, str_2));
} END_TEST

START_TEST(strcpy_4) {
    char str_1[50] = "0";
    char str_2[50] = "0\n\n6\t/t8";
    ck_assert_str_eq(strcpy(str_1, str_2), s21_strcpy(str_1, str_2));
} END_TEST

START_TEST(strcpy_5) {
    char str_1[50] = "\t/n\n\0/0 ";
    char str_2[50] = " \t/n\n\0/0";
    ck_assert_str_eq(strcpy(str_1, str_2), s21_strcpy(str_1, str_2));
} END_TEST

START_TEST(strcpy_6) {
    char s1[255] = "QWERTY";
    char s2[255] = "E";
    char s3[255] = "E";
    char s4[255] = "QWERTYUIO";
    ck_assert_pstr_eq(strcpy(s1, s2), s21_strcpy(s3, s2));
    ck_assert_pstr_eq(strcpy(s2, s4), s21_strcpy(s2, s4));
} END_TEST

Suite * suite_strcpy(void) {
    Suite *s4;
    TCase *tc4;
    s4 = suite_create("s1_STRCPY");
    tc4 = tcase_create("case_strcpy");
    tcase_add_test(tc4, strcpy_1);
    tcase_add_test(tc4, strcpy_2);
    tcase_add_test(tc4, strcpy_3);
    tcase_add_test(tc4, strcpy_4);
    tcase_add_test(tc4, strcpy_5);
    tcase_add_test(tc4, strcpy_6);
    suite_add_tcase(s4, tc4);
    return s4;
}
