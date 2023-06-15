#include "tests_suitcases.h"

START_TEST(strstr_1) {
    char str[] = "Techie Delight – Ace the Technical Interviews";
    char str1[] = "Ace";
    ck_assert_str_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_2) {
    char str[] = " \n\0\0";
    char str1[] = " a\n\0";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_3) {
    char str[] = "\0";
    char str1[] = " schhol21\0";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_4) {
    char str[] = "i am\nproger";
    char str1[] = " a\n\0";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_5) {
    char str[] = "Hello World";
    char str1[] = "Hell";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_6) {
    char str[] = "Hello World";
    char str1[] = "";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_7) {
    char str[] = "Hello World";
    char str1[] = "abc";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_8) {
    char str[] = "Hello World";
    char str1[] = "Hello Worls";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_9) {
    char str[] = "Hello World !!!!!!!!!";
    char str1[] = "Hello Worls";
    ck_assert_ptr_eq(strstr(str, str1), s21_strstr(str, str1));
} END_TEST

START_TEST(strstr_10) {
    char *s1 = "QWERTY";
    char *s2 = "E";
    char *s3 = "";
    ck_assert_pstr_eq(strstr(s1, s2), s21_strstr(s1, s2));
    ck_assert_pstr_eq(strstr(s3, s2), s21_strstr(s3, s2));
    ck_assert_pstr_eq(strstr(s1, s3), s21_strstr(s1, s3));
} END_TEST

START_TEST(strstr_12) {
    char haystack[] = "";
    char needle[] = "jho1faQsdkjnSa3aefwf8hiuJafeHioj";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_13) {
    char haystack[] = "safQhilufas7MaSef2345wknwefnkjHawe2fhilu";
    char needle[] = "";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_14) {
    char haystack[] = "You are toxic!";
    char needle[] = "toxic";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_15) {
    char haystack[] = "There is no right word in this test!";
    char needle[] = "NOT";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_16) {
    char haystack[] = "AbOBosNyTSa";
    char needle[] = "aBoboSNYTsa";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_17) {
    char haystack[] = "AD AD AD";
    char needle[] = "AD";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_18) {
    char haystack[] = "22 321 123";
    char needle[] = "123";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_19) {
    char haystack[] = "1";
    char needle[] = "1";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_20) {
    char haystack[] = "13625523478437263475984675342345sdghyftrg freshtsyASFWEt wEafe";
    char needle[] = " ";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

START_TEST(strstr_21) {
    char haystack[] = "-";
    char needle[] = "1234567890qwertyuiopasdfghjk-";
    ck_assert_pstr_eq(s21_strstr(haystack, needle), strstr(haystack, needle));
} END_TEST

Suite * suite_strstr(void) {
    Suite *s10;
    TCase *tc10;
    s10 = suite_create("s21_STRSTR");
    tc10 = tcase_create("case_strstr");
    tcase_add_test(tc10, strstr_1);
    tcase_add_test(tc10, strstr_2);
    tcase_add_test(tc10, strstr_3);
    tcase_add_test(tc10, strstr_4);
    tcase_add_test(tc10, strstr_5);
    tcase_add_test(tc10, strstr_6);
    tcase_add_test(tc10, strstr_7);
    tcase_add_test(tc10, strstr_8);
    tcase_add_test(tc10, strstr_9);
    tcase_add_test(tc10, strstr_10);
    tcase_add_test(tc10, strstr_12);
    tcase_add_test(tc10, strstr_13);
    tcase_add_test(tc10, strstr_14);
    tcase_add_test(tc10, strstr_15);
    tcase_add_test(tc10, strstr_16);
    tcase_add_test(tc10, strstr_17);
    tcase_add_test(tc10, strstr_18);
    tcase_add_test(tc10, strstr_19);
    tcase_add_test(tc10, strstr_20);
    tcase_add_test(tc10, strstr_21);
    suite_add_tcase(s10, tc10);
    return s10;
}
