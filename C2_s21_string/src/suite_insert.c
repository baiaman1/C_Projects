#include "tests_suitcases.h"

START_TEST(insert_1) {
    char str1[7] = "this +";
    char str2[6] = " this";
    char *str3 = (char*)s21_insert(str1, str2, 6);
    ck_assert_str_eq(str3, "this + this");
    free(str3);
} END_TEST

START_TEST(insert_2) {
    char str1[1] = "";
    char str2[14] = "checking null";
    char *str3 = (char*)s21_insert(str1, str2, 1);
    ck_assert_ptr_eq(str3, s21_NULL);
    free(str3);
} END_TEST

START_TEST(insert_3) {
    char str1[8] = "splitme";
    char str2[2] = " ";
    char *str3 = (char*)s21_insert(str1, str2, 5);
    ck_assert_str_eq(str3, "split me");
    free(str3);
} END_TEST

START_TEST(insert_4) {
    char str1[14] = "checking null";
    char *str2 = s21_NULL;
    char *str3 = (char*)s21_insert(str1, str2, 0);
    ck_assert_ptr_eq(str3, s21_NULL);
    free(str3);
} END_TEST

START_TEST(insert_5) {
    char str1[4] = "end";
    char str2[6] = "start";
    char *str3 = (char*)s21_insert(str1, str2, 0);
    ck_assert_str_eq(str3, "startend");
    free(str3);
} END_TEST

START_TEST(insert_6) {
    char str1[7] = "caseof";
    char str2[8] = "mistake";
    char *str3 = (char*)s21_insert(str1, str2, -1);
    ck_assert_ptr_eq(str3, NULL);
    free(str3);
} END_TEST

START_TEST(insert_7) {
    char *str1 = s21_NULL;
    char str2[14] = "checking null";
    char *str3 = (char*)s21_insert(str1, str2, 1);
    ck_assert_ptr_eq(str3, s21_NULL);
    free(str3);
} END_TEST

START_TEST(insert_8) {
    char str1[2] = " ";
    char str2[32] = "if strlen src lesser than index";
    char *str3 = (char*)s21_insert(str1, str2, 3);
    ck_assert_ptr_eq(str3, s21_NULL);
    free(str3);
} END_TEST

START_TEST(insert_9) {
    char *str1 = s21_NULL;
    char str2[1] = "";
    char *str3 = (char*)s21_insert(str1, str2, 0);
    ck_assert_ptr_eq(str3, s21_NULL);
    free(str3);
} END_TEST

START_TEST(insert_10) {
    char *str1 = s21_NULL;
    char *str2 = s21_NULL;
    char *str3 = (char*)s21_insert(str1, str2, 0);
    ck_assert_ptr_eq(str3, s21_NULL);
    free(str3);
} END_TEST

START_TEST(insert_11) {
    char str1[4] = "";
    char str2[6] = "";
    char *str3 = (char*)s21_insert(str1, str2, 1);
    ck_assert_ptr_eq(str3, s21_NULL);
    free(str3);
} END_TEST

Suite * suite_insert(void) {
    Suite *s24;
    TCase *tc24;
    s24 = suite_create("s21_INSERT");
    tc24 = tcase_create("case_insert");
    tcase_add_test(tc24, insert_1);
    tcase_add_test(tc24, insert_2);
    tcase_add_test(tc24, insert_3);
    tcase_add_test(tc24, insert_4);
    tcase_add_test(tc24, insert_5);
    tcase_add_test(tc24, insert_6);
    tcase_add_test(tc24, insert_7);
    tcase_add_test(tc24, insert_8);
    tcase_add_test(tc24, insert_9);
    tcase_add_test(tc24, insert_10);
    tcase_add_test(tc24, insert_11);
    suite_add_tcase(s24, tc24);
    return s24;
}
