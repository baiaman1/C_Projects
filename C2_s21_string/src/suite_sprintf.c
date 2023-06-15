#include "tests_suitcases.h"
#include "s21_string.h"

#define BUFF_SIZE 512

START_TEST(SPRINTFTestLaslhyn22) {
    char data[100];
    char data1[100];
    sprintf(data, "|%32s|\n", "111");
    s21_sprintf(data1, "|%32s|\n", "111");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn23) {
    char data[100];
    char data1[100];
    sprintf(data, "|%32s|\n", "abc");
    s21_sprintf(data1, "|%32s|\n", "abc");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn24) {
    char data[100];
    char data1[100];
    sprintf(data, "|%-32s|\n", "abc");
    s21_sprintf(data1, "|%-32s|\n", "abc");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn25) {
    char data[100];
    char data1[100];
    sprintf(data, "|%16s|\n", "nark nark");
    s21_sprintf(data1, "|%16s|\n", "nark nark");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn26) {
    char data[100];
    char data1[100];
    sprintf(data, "|%16s|\n", "nark nark");
    s21_sprintf(data1, "|%16s|\n", "nark nark");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn27) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%.03s|\n", "hello");
    int d = sprintf(data1, "|%.03s|\n", "hello");
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn28) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
    int d = sprintf(data1, "|%.3s| kushat nado |%20s|\n", "MneEEEEEEEEE", "arbuz");
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn31) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%-20.18u|\n", (unsigned)-345);
    int d = sprintf(data1, "|%-20.18u|\n", (unsigned)-345);
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn32) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%-20.18d|\n", -345);
    int d = sprintf(data1, "|%-20.18d|\n", -345);
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn33) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%20.2d|\n", -345);
    int d = sprintf(data1, "|%20.2d|\n", -345);
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn34) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%020d|\n", -345);
    int d = sprintf(data1, "|%020d|\n", -345);
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn35) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|%%|\n");
    int d = sprintf(data1, "|%%|\n");
    ck_assert_int_eq(c, d);
} END_TEST


START_TEST(SPRINTFTestLaslhyn37) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|test %-12i et %24s !|\n", 0, "coco");
    int d = sprintf(data1, "|test %-12i et %24s !|\n", 0, "coco");
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn38) {
    char data[100];
    char data1[100];
    int c = s21_sprintf(data, "|test %-12i et %-2.4d %24s !|\n", 0, 25, "coco");
    int d = sprintf(data1, "|test %-12i et %-2.4d %24s !|\n" , 0, 25, "coco");
    ck_assert_int_eq(c, d);
} END_TEST

START_TEST(SPRINTFTestLaslhyn39) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%c|\n", 'a');
    sprintf(data1, "01)SPRINTF : |%c|\n", 'a');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn40) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-c|\n", 'z');
    sprintf(data1, "01)SPRINTF : |%-c|\n", 'z');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn42) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%5c|\n", 'R');
    sprintf(data1, "01)SPRINTF : |%5c|\n", 'R');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn43) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-5c|\n", 'R');
    sprintf(data1, "01)SPRINTF : |%-5c|\n", 'R');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn44) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1c|\n", '3');
    sprintf(data1, "01)SPRINTF : |%1c|\n", '3');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn45) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%c|\n", '\0');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn46) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%5c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%5c|\n", '\0');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn47) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-5c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%-5c|\n", '\0');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn48) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1c|\n", '\0');
    sprintf(data1, "01)SPRINTF : |%1c|\n", '\0');
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn49) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%s|\n", "salut");
    sprintf(data1, "01)SPRINTF : |%s|\n", "salut");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn50) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-s|\n", "test");
    sprintf(data1, "01)SPRINTF : |%-s|\n", "test");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn52) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10s|\n", "42");
    sprintf(data1, "01)SPRINTF : |%10s|\n", "42");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn53) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-10s|\n", "42");
    sprintf(data1, "01)SPRINTF : |%-10s|\n", "42");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn54) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2s|\n", "string");
    sprintf(data1, "01)SPRINTF : |%2s|\n", "string");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn55) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-2s|\n", "string");
    sprintf(data1, "01)SPRINTF : |%-2s|\n", "string");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn56) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.15s|\n", "precision");
    sprintf(data1, "01)SPRINTF : |%.15s|\n", "precision");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn57) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.4s|\n", "precision");
    sprintf(data1, "01)SPRINTF : |%.4s|\n", "precision");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn58) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.0s|\n", "precision");
    sprintf(data1, "01)SPRINTF : |%.0s|\n", "precision");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn59) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
    sprintf(data1, "01)SPRINTF : |%s|\n", "\0\0\0\0\0");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn60) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
    sprintf(data1, "01)SPRINTF : |%10s|\n", "\0\0\0\0\0");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn61) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%s|\n", "");
    sprintf(data1, "01)SPRINTF : |%s|\n", "");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn62) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-.2s|\n", "boom");
    sprintf(data1, "01)SPRINTF : |%-.2s|\n", "boom");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn63) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10.8s|\n", "google");
    sprintf(data1, "01)SPRINTF : |%10.8s|\n", "google");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn64) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "twitter");
    sprintf(data1, "01)SPRINTF : |%10.2s|\n", "twitter");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn65) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2.10s|\n", "samsung");
    sprintf(data1, "01)SPRINTF : |%2.10s|\n", "samsung");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn66) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "sprintf");
    sprintf(data1, "01)SPRINTF : |%2.5s|\n", "sprintf");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn67) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "424242424242");
    sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "424242424242");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn68) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1.0s|\n", "123456789");
    sprintf(data1, "01)SPRINTF : |%1.0s|\n", "123456789");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn69) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-1.0s|\n", "123456789");
    sprintf(data1, "01)SPRINTF : |%-1.0s|\n", "123456789");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn70) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%.1s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%.1s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn71) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%10.2s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%10.2s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn72) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%2.5s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%2.5s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn73) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%-10.2s|\n", "covid-19");
    sprintf(data1, "01)SPRINTF : |%-10.2s|\n", "covid-19");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn74) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu", "12345", "hu");
    sprintf(data1, "01)SPRINTF : |%1.4s| et |%-6.8s| et |%4.2s|\n", "tuuu", "12345", "hu");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn88) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", -20);
    sprintf(data1, "02) standart PRINTF :|%1.1d|\n", -20);
} END_TEST

START_TEST(SPRINTFTestLaslhyn89) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", -50);
    sprintf(data1, "02) standart PRINTF :|%-10d|\n", -50);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn90) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%2d|\n", -20);
    sprintf(data1, "02) standart PRINTF :|%2d|\n", -20);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn91) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%.2d|\n", -20);
    sprintf(data1, "02) standart PRINTF :|%.2d|\n", -20);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn92) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%d|\n", 42);
    sprintf(data1, "02) standart PRINTF :|%d|\n", 42);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn93) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%i|\n", 42);
    sprintf(data1, "02) standart PRINTF :|%i|\n", 42);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn94) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%-d|\n", 42);
    sprintf(data1, "02) standart PRINTF :|%-d|\n", 42);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn95) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%10d|\n", 100);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn96) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%-10d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%-10d|\n", 100);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn97) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%.10d|\n", 100);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn98) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", 100);
    sprintf(data1, "02) standart PRINTF :|%10.5d|\n", 100);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn99) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", 64);
    sprintf(data1, "02) standart PRINTF :|%5.10d|\n", 64);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn100) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%1.1d|\n", 16);
    sprintf(data1, "02) standart PRINTF :|%1.1d|\n", 16);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn101) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%d|\n", -42);
    sprintf(data1, "02) standart PRINTF :|%d|\n", -42);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn102) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10d|\n", -42);
    sprintf(data1, "02) standart PRINTF :|%10d|\n", -42);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn103) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%.10d|\n", -42);
    sprintf(data1, "02) standart PRINTF :|%.10d|\n", -42);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn104) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%10.5d|\n", -16);
    sprintf(data1, "02) standart PRINTF :|%10.5d|\n", -16);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn105) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%5.10d|\n", -16);
    sprintf(data1, "02) standart PRINTF :|%5.10d|\n", -16);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn106) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.2d|\n", -1);
    sprintf(data1, "02) standart PRINTF : |%.2d|\n", -1);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn107) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-10d|\n", -80);
    sprintf(data1, "02) standart PRINTF : |%-10d|\n", -80);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn108) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-.10d|\n", -80);
    sprintf(data1, "02) standart PRINTF : |%-.10d|\n", -80);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn109) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%6d|\n", 35);
    sprintf(data1, "02) standart PRINTF : |%6d|\n", 35);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn110) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%6d|\n", -35);
    sprintf(data1, "02) standart PRINTF : |%6d|\n", -35);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn111) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", 5);
    sprintf(data1, "02) standart PRINTF : |%5.3d|\n", 5);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn112) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", 5);
    sprintf(data1, "02) standart PRINTF : |%3.5d|\n", 5);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn113) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%5.3d|\n", -5);
    sprintf(data1, "02) standart PRINTF : |%5.3d|\n", -5);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn114) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%3.5d|\n", -5);
    sprintf(data1, "02) standart PRINTF : |%3.5d|\n", -5);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn115) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 0);
    sprintf(data1, "02) standart PRINTF : |%.d|\n", 0);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn116) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 100);
    sprintf(data1, "02) standart PRINTF : |%.d|\n", 100);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn155) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%u|\n", (unsigned)34);
    sprintf(data1, "02) standart PRINTF : |%u|\n", (unsigned)34);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn156) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%u|\n", (unsigned)-34);
    sprintf(data1, "02) standart PRINTF : |%u|\n", (unsigned)-34);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn157) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-u|\n", (unsigned)50);
    sprintf(data1, "02) standart PRINTF : |%-u|\n", (unsigned)50);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn158) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%10u|\n", (unsigned)90);
    sprintf(data1, "02) standart PRINTF : |%10u|\n", (unsigned)90);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn159) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.10u|\n", (unsigned)90);
    sprintf(data1, "02) standart PRINTF : |%.10u|\n", (unsigned)90);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn160) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%15u|\n", (unsigned)-100);
    sprintf(data1, "02) standart PRINTF : |%15u|\n", (unsigned)-100);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn161) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%10.5u|\n", (unsigned)52);
    sprintf(data1, "02) standart PRINTF : |%10.5u|\n", (unsigned)52);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn162) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%5.10u|\n", (unsigned)52);
    sprintf(data1, "02) standart PRINTF : |%5.10u|\n", (unsigned)52);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn163) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%20.15u|\n", (unsigned)-100000);
    sprintf(data1, "02) standart PRINTF : |%20.15u|\n", (unsigned)-100000);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn164) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%15.20u|\n", (unsigned)-100000);
    sprintf(data1, "02) standart PRINTF : |%15.20u|\n", (unsigned)-100000);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn165) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-10u|\n", (unsigned)144);
    sprintf(data1, "02) standart PRINTF : |%-10u|\n", (unsigned)144);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn166) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-.10u|\n", (unsigned)144);
    sprintf(data1, "02) standart PRINTF : |%-.10u|\n", (unsigned)144);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn167) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%-20u|\n", (unsigned)-20000000);
    sprintf(data1, "02) standart PRINTF : |%-20u|\n", (unsigned)-20000000);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn168) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%08u|\n", (unsigned)64);
    sprintf(data1, "02) standart PRINTF : |%08u|\n", (unsigned)64);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn169) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%3.4u|\n", (unsigned)10);
    sprintf(data1, "02) standart PRINTF : |%3.4u|\n", (unsigned)10);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn170) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF :|%u|\n", (unsigned)0);
    sprintf(data1, "02) standart PRINTF :|%u|\n", (unsigned)0);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn171) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.u|\n", (unsigned)0);
    sprintf(data1, "02) standart PRINTF : |%.u|\n", (unsigned)0);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn172) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%10u|\n", (unsigned)0);
    sprintf(data1, "02) standart PRINTF : |%10u|\n", (unsigned)0);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn173) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.u|\n", (unsigned)88);
    sprintf(data1, "02) standart PRINTF : |%.u|\n", (unsigned)88);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn174) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.s|\n", "bratok");
    sprintf(data1, "02) standart PRINTF : |%.s|\n", "bratok");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn176) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.d|\n", 5);
    sprintf(data1, "02) standart PRINTF : |%.d|\n", 5);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn177) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "02) standart PRINTF : |%.3s|\n", "21");
    sprintf(data1, "02) standart PRINTF : |%.3s|\n", "21");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn183) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%u|\n", (unsigned)-1);
    sprintf(data1, "|%u|\n", (unsigned)-1);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn184) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%u|\n", (unsigned)-1);
    sprintf(data1, "|%u|\n", (unsigned)-1);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn185) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%f|\n", 324.34);
    sprintf(data1, "|%f|\n", 324.34);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn186) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10f|\n", 324.343);
    sprintf(data1, "|%10f|\n", 324.343);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn187) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.3f|\n", 324.343);
    sprintf(data1, "|%10.3f|\n", 324.343);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn188) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%1.19f|\n", 324.343);
    sprintf(data1, "|%1.19f|\n", 324.343);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn189) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-1.10f|\n", 324.343);
    sprintf(data1, "|%-1.10f|\n", 324.343);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn190) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-1.10f|\n", -324.343);
    sprintf(data1, "|%-1.10f|\n", -324.343);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn191) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.10f|\n", -324.343);
    sprintf(data1, "|%.10f|\n", -324.343);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn192) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.10f|\n", 324.343);
    sprintf(data1, "|%.10f|\n", 324.343);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn193) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|% 10f|\n", 324.1);
    sprintf(data1, "|% 10f|\n", 324.1);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn194) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%+10f|\n", 324.1);
    sprintf(data1, "|%+10f|\n", 324.1);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn195) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10f|\n", 324.1);
    sprintf(data1, "|%10f|\n", 324.1);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn196) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10f|\n", 324.1123132);
    sprintf(data1, "|%10f|\n", 324.1123132);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn197) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.15f|\n", 324.1123132);
    sprintf(data1, "|%10.15f|\n", 324.1123132);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn198) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.0f|\n", 324.1123132);
    sprintf(data1, "|%.0f|\n", 324.1123132);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn199) {
    //
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.0f|\n", 3.14);
    sprintf(data1, "|%10.0f|\n", 3.14);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn200) {
    //
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%10.10f|\n", 320.3);
    sprintf(data1, "|%10.10f|\n", 320.3);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn201) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-10.10f|\n", 320.3);
    sprintf(data1, "|%-10.10f|\n", 320.3);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn202) {
    //
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-10.10f|\n", 320.3);
    sprintf(data1, "|%-10.10f|\n", 320.3);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn203) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%-10.10f|\n", -320.3);
    sprintf(data1, "|%-10.10f|\n", -320.3);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn204) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%.0f|\n", -320.3);
    sprintf(data1, "|%.0f|\n", -320.3);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn205) {
    char data[100];
    char data1[100];

    s21_sprintf(data, "|%.0f|\n", -320.3);
    sprintf(data1, "|%.0f|\n", -320.3);

    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn206) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.0f|\n", -320.3);
    sprintf(data1, "|%5.0f|\n", -320.3);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn207) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
    sprintf(data1, "|%5.0f|\n", 3.141592653589793);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn208) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.0f|\n", 3.141592653589793);
    sprintf(data1, "|%5.0f|\n", 3.141592653589793);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn209) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|% -5.1f|\n", 0.001);
    sprintf(data1, "|% -5.1f|\n", 0.001);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn210) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.1f|\n", 324.324);
    sprintf(data1, "|%5.1f|\n", 324.324);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestLaslhyn211) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "|%5.3f|\n", 0.0001);
    sprintf(data1, "|%5.3f|\n", 0.0001);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestdogletho1) {
    char str[100];
    char str1[100];
    int a = 10, b = 20, c;
    c = a + b;
    sprintf(str, "Sum of %d and %d is %d", a, b, c);
    s21_sprintf(str1, "Sum of %d and %d is %d", a, b, c);
    ck_assert_str_eq(str, str1);
    sprintf(str, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
            "abra", 'e', 56, (unsigned)-43);
    s21_sprintf(str1, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
                "abra", 'e', 56, (unsigned)-43);
    ck_assert_str_eq(str, str1);
    sprintf(str, "Sum of %d and %d is %d", a, b, c);
    s21_sprintf(str1, "Sum of %d and %d is %d", a, b, c);
} END_TEST

START_TEST(SPRINTFTestdogletho2) {
    char str[100];
    char str1[100];
    sprintf(str, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
            "abra", 'e', 56, (unsigned)-43);
    s21_sprintf(str1, "Chislo:|%-5s|kust and |%9c|. This sum is |%i|. This is |%%|. And now unsigned: |%u|\n",
                "abra", 'e', 56, (unsigned)-43);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho6) {
    char str[100];
    char str1[100];
    sprintf(str, "|%i|\n",   10);
    s21_sprintf(str1, "|%i|\n",   10);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho52) {
    char str[100];
    char str1[100];
    sprintf(str, "|%.d|\n", 0);
    s21_sprintf(str1, "|%.d|\n", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho53) {
    char str[100];
    char str1[100];
    sprintf(str, "|%5.d|\n", 0);
    s21_sprintf(str1, "|%5.d|\n", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho54) {
    char str[100];
    char str1[100];
    sprintf(str, "|%5.0d|\n", 0);
    s21_sprintf(str1, "|%5.0d|\n", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho55) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-5.d|\n", 0);
    s21_sprintf(str1, "|%-5.d|\n", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho56) {
    char str[100];
    char str1[100];
    sprintf(str, "|%.0d|\n", 0);
    s21_sprintf(str1, "|%.0d|\n", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho68) {
    char str[100];
    char str1[100];
    sprintf(str, "|%20.18u|\n", (unsigned)-345);
    s21_sprintf(str1, "|%020.18u|\n", (unsigned)-345);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho69) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-20.18u|\n", (unsigned)-345);
    s21_sprintf(str1, "|%-20.18u|\n", (unsigned)-345);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho127) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abra");
    s21_sprintf(str1, "|%8s|\n", "abra");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho128) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-8s|\n", "abrafdefgbr");
    s21_sprintf(str1, "|%-8s|\n", "abrafdefgbr");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho129) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abra");
    s21_sprintf(str1, "|%8s|\n", "abra");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho130) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abrafdefgbr");
    s21_sprintf(str1, "|%8s|\n", "abrafdefgbr");
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho131) {
    char str[100];
    char str1[100];
    sprintf(str, "|%8s|\n", "abra");
    s21_sprintf(str1, "|%8s|\n", "abra");
    ck_assert_str_eq(str, str1);
}

START_TEST(SPRINTFTestdogletho187) {
    char str[100];
    char str1[100];
    sprintf(str, "%i", 0);
    s21_sprintf(str1, "%i", 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho190) {
    char str[100];
    char str1[100];
    sprintf(str, "|%c|\n", 'a');
    s21_sprintf(str1, "|%c|\n", 'a');
    ck_assert_str_eq(str, str1);
} END_TEST


START_TEST(SPRINTFTestdogletho197) {
    char str[100];
    char str1[100];
    sprintf(str, "|%c|\n", 'a');
    s21_sprintf(str1, "|%c|\n", 'a');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho198) {
    char str[100];
    char str1[100];
    sprintf(str, "|%-c|\n", 'a');
    s21_sprintf(str1, "|%-c|\n", 'a');
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho232) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101; i++) {
        sprintf(str, "%+i", i);
        s21_sprintf(str1, "%+i", i);
        ck_assert_str_eq(str, str1);
    }
} END_TEST

START_TEST(SPRINTFTestdogletho233) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101; i++) {
        sprintf(str, "%+d", i);
        s21_sprintf(str1, "%+d", i);
        ck_assert_str_eq(str, str1);
    }
} END_TEST

START_TEST(SPRINTFTestdogletho234) {
    char str[100];
    char str1[100];
    sprintf(str, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
    s21_sprintf(str1, " %+d %+i %+d %+d", 2147483647, -2147483647, 21, 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho235) {
    char str[100];
    char str1[100];
    sprintf(str, " %+li ", 9223372036854775807);
    s21_sprintf(str1, " %+li ", 9223372036854775807);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho236) {
    char str[100];
    char str1[100];
    sprintf(str, " %+ld ", 9223372036854775807);
    s21_sprintf(str1, " %+ld ", 9223372036854775807);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho237) {
    char str[100];
    char str1[100];
    sprintf(str, " %+-5d %+-5i", -7, 0);
    s21_sprintf(str1, " %+-5d %+-5i", -7, 0);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho239) {
    char str[100];
    char str1[100];
    sprintf(str, "|%u|\n", (unsigned)10);
    s21_sprintf(str1, "|%u|\n", (unsigned)10);
    ck_assert_str_eq(str, str1);
} END_TEST

START_TEST(SPRINTFTestdogletho259) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101;) {
        sprintf(str, "% d", i);
        s21_sprintf(str1, "% d", i);
        i = i+7;
        ck_assert_str_eq(str, str1);
    }
} END_TEST

START_TEST(SPRINTFTestdogletho261) {
    char str[100];
    char str1[100];
    for (int i = -101; i <= 101;) {
        sprintf(str, "% -i % -d % -5d", i, i+1, 143646235);
        s21_sprintf(str1, "% -i % -d % -5d", i, i+1, 143646235);
        i = i+7;
        ck_assert_str_eq(str, str1);
    }
} END_TEST

START_TEST(SPRINTFTestdogletho282) {
    char data[100];
    char data1[100];

    s21_sprintf(data, "%s ", "hello world");
    sprintf(data1, "%s ", "hello world");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestdogletho283) {
    char data[100];
    char data1[100];
    s21_sprintf(data, "%-3.1s", "\0");
    sprintf(data1, "%-3.1s", "\0");
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard1) {
    char data[200];
    char data1[200];
    s21_sprintf(data, "%li", 100000000000000000);
    sprintf(data1, "%li", 100000000000000000);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard3) {
    char data[200];
    char data1[200];
    s21_sprintf(data, "%lu", (unsigned long)100000000000000000);
    sprintf(data1, "%lu", (unsigned long)100000000000000000);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard6) {
    char data[200];
    char data1[200];
    s21_sprintf(data, "%ld", 100000000000000000);
    sprintf(data1, "%ld", 100000000000000000);
    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard7) {
    char data[200];
    char data1[200];
    short int i = -30000;
    s21_sprintf(data, "%hi", i);
    sprintf(data1, "%hi", i);

    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard9) {
    char data[200];
    char data1[200];
    short int i = -30000;
    s21_sprintf(data, "%hu", (unsigned short)i);
    sprintf(data1, "%hu", (unsigned short)i);

    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard12) {
    char data[200];
    char data1[200];
    short int i = -30000;
    s21_sprintf(data, "%hd", i);
    sprintf(data1, "%hd", i);

    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard13) {
    char data[200];
    char data1[200];
    wchar_t buf = L'c';
    s21_sprintf(data, "%lc", buf);
    sprintf(data1, "%lc",  buf);

    ck_assert_str_eq(data, data1);
} END_TEST

START_TEST(SPRINTFTestRleonard14) {
    char data[3000];
    char data1[3000];
    wchar_t buf[100] = L"hello";
    s21_sprintf(data, "%ls", buf);
    sprintf(data1, "%ls", buf);

    ck_assert_str_eq(data, data1);
} END_TEST
// ##########################################
START_TEST(s21_sprintf_test_percent) {
  char str1[1000];
  char str2[1000];
  int r1 = sprintf(str1, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  int r2 = s21_sprintf(str2, "%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%");
  ck_assert_str_eq(str1, str2);
  ck_assert_int_eq(r1, r2);
} END_TEST

START_TEST(simple_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple value %d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(precise_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%5d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(minus_width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(plus_width_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%+12d";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(padding_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%12i";
    int val = 69;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(flags_long_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%+5.31li";
    long int val = 698518581899;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(flags_short_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-16.9hi";
    short int val = 6958;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST


START_TEST(zero_precision_zero_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.0d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(space_flag_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% d";
    int val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-16u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val_many_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% 5.51u";
    unsigned int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val_short) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%hu";
    unsigned short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val_long) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%lu";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_val_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%lu, %u, %hu, %.5u, %5.u";
    unsigned long int val = 949149114140;
    ck_assert_int_eq(s21_sprintf(str1, format, val, 14, 1441, 14414, 9681),
                     sprintf(str2, format, val, (unsigned)14,
                             (unsigned short)1441, (unsigned)14414,
                             (unsigned)9681));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(octal_short) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%hd";
    short int val = 14140;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(unsigned_zero) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%u";
    ck_assert_int_eq(s21_sprintf(str1, format, 0),
                     sprintf(str2, format, (unsigned)0));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(one_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%c";
    char val = 'X';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(one_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(one_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "% -5c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(one_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(one_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5.3c%c%c%c%c Hello! ABOBA";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val, 'c', 'a', 'b', 'b'),
                     sprintf(str2, format, val, 'c', 'a', 'b', 'b'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(one_many_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-5.3c";
    char val = 'c';
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(string_precision) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%.15s";
    char *val = "I LOVE STRINGS AND TESTS AND SCHOOL21 NO JOKE";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(string_width) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%15s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(string_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%-15.9s";
    char *val = "69 IS MY FAVORITE NUMBER";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(string_long) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(string_many) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "%s%s%s%s";
    char *val =
        "69 IS MY FAVORITE NUMBER THIS IS SUPPOSED TO BE A VERY LONG STRING";
    char *s1 = "";
    char *s2 = "87418347813748913749871389480913";
    char *s3 = "HAHAABOBASUCKER";
    ck_assert_int_eq(s21_sprintf(str1, format, val, s1, s2, s3),
                     sprintf(str2, format, val, s1, s2, s3));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(string_width_huge) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char *val = "kjafdiuhfjahfjdahf";
    char *format = "%120s";
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(float_flags) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char *format = "% f";
    float val = 0;
    ck_assert_int_eq(s21_sprintf(str1, format, val),
                     sprintf(str2, format, val));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(all_empty) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(empty_format_and_parameters) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "abc"), sprintf(str2, "abc"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%c", '\t'), sprintf(str2, "%c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_many_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'),
                     sprintf(str2, "%c%c%c%c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%s", "Drop Sega PLS"),
                     sprintf(str2, "%s", "Drop Sega PLS"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_many_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"),
        sprintf(str2, "%s%s%s%s%s", "Drop", " ", "Sega", " ", "PLS"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%d", 666), sprintf(str2, "%d", 666));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_many_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%d%d%d%d", -999, 0, 666, -100),
                     sprintf(str2, "%d%d%d%d", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%i", -0), sprintf(str2, "%i", -0));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_many_int) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%i%i%i%i", -999, 0, 666, -100),
                     sprintf(str2, "%i%i%i%i", -999, 0, 666, -100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_float) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%f", 0.0001),
                     sprintf(str2, "%f", 0.0001));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_many_float) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001),
        sprintf(str2, "%f%f%f%f", -999.666, 0.0001, 666.999, -100.001));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_unsigned_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%u", 100),
                     sprintf(str2, "%u", (unsigned)100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_many_unsigned_dec) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%u%u%u%u", 999, 0, 666, 100),
                     sprintf(str2, "%u%u%u%u", (unsigned)999, (unsigned)0,
                             (unsigned)666, (unsigned)100));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_char_with_alignment_left) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%8c", '\t'),
                     sprintf(str2, "%8c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_one_char_with_alignment_right) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(s21_sprintf(str1, "%-8c", '\t'),
                     sprintf(str2, "%-8c", '\t'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_many_char_with_alignment) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    ck_assert_int_eq(
        s21_sprintf(str1, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'),
        sprintf(str2, "%3c%-11c%10c%-2c%c", '\t', '\n', '0', 'S', 's'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf1) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%10ld";

    ck_assert_int_eq(s21_sprintf(str1, format, 1), sprintf(str2, format, 1));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf2) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%1.1f";

    ck_assert_int_eq(s21_sprintf(str1, format, 1.1),
                     sprintf(str2, format, 1.1));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf3) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%8.3c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'),
                     sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf4) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+5.5d aboba";

    int val = 10000;
    int a = s21_sprintf(str1, format, val);
    int b = sprintf(str2, format, val);
    ck_assert_int_eq(a, b);

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf6) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%7.7f";

    ck_assert_int_eq(s21_sprintf(str1, format, 11.123456),
                     sprintf(str2, format, 11.123456));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf7) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%7.4s";

    ck_assert_int_eq(s21_sprintf(str1, format, "aboba floppa"),
                     sprintf(str2, format, "aboba floppa"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf8) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%6.6u";

    ck_assert_int_eq(s21_sprintf(str1, format, 12341151),
                     sprintf(str2, format, 12341151));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf9) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%li%ld%lu";

    ck_assert_int_eq(s21_sprintf(str1, format, 666666666666, 777, 111),
                     sprintf(str2, format, 666666666666, 777, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf10) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%hi%hd%hu";

    ck_assert_int_eq(s21_sprintf(str1, format, 666, -777, 111),
                     sprintf(str2, format, 666, -777, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf11) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+li%+lu%+d%+lf";

    ck_assert_int_eq(s21_sprintf(str1, format, -123, 321, -5555, -1213.123),
                     sprintf(str2, format, -123, 321, -5555, -1213.123));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf16) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% c";

    ck_assert_int_eq(s21_sprintf(str1, format, 'a'),
                     sprintf(str2, format, 'a'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf17) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% s";

    ck_assert_int_eq(s21_sprintf(str1, format, "aboba likes floppa"),
                     sprintf(str2, format, "aboba likes floppa"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf18) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "% s% c";

    ck_assert_int_eq(s21_sprintf(str1, format, "", 'f'),
                     sprintf(str2, format, "", 'f'));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf19) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%210s";

    ck_assert_int_eq(s21_sprintf(str1, format, "AHHAHAHA\0AHHAHAHAH"),
                     sprintf(str2, format, "AHHAHAHA\0AHHAHAHAH"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf20) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-115s";

    ck_assert_int_eq(s21_sprintf(str1, format, "Nick her"),
                     sprintf(str2, format, "Nick her"));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf24) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%+2.1c%+4.2d%+5.4i%+10.2f%+55.55s%+1.1u";

    ck_assert_int_eq(
        s21_sprintf(str1, format, 'f', 21, 42, 666.666,
                    "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11),
        sprintf(str2, format, 'f', 21, 42, 666.666,
                "Lorem ipsum dolor sit amet. Aut quam ducimus.", 11));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf25) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 121.123),
                     sprintf(str2, format, 121.123));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf26) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%%";

    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf27) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%%%%%%%%";

    ck_assert_int_eq(s21_sprintf(str1, format), sprintf(str2, format));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf29) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-.f";

    ck_assert_int_eq(s21_sprintf(str1, format, 111.111),
                     sprintf(str2, format, 111.111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(test_sprintf30) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];
    char format[] = "%-.1d";

    ck_assert_int_eq(s21_sprintf(str1, format, 111),
                     sprintf(str2, format, 111));

    ck_assert_str_eq(str1, str2);
} END_TEST

START_TEST(wide_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %lc";
    unsigned long w = L'汉';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}

START_TEST(width_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %5c";
    char w = 'c';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
}
START_TEST(minus_wide_char) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %-5lc";
    unsigned long w = L'森';
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST
START_TEST(wide_string) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(wide_string1) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %5.12ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(wide_string2) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %120ls ABOBA";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST
START_TEST(wide_string3) {
    char str1[BUFF_SIZE];
    char str2[BUFF_SIZE];

    char *format = "This is a simple wide char %-43ls";
    wchar_t w[] = L"森我爱菠萝";
    int a = s21_sprintf(str1, format, w);
    int b = sprintf(str2, format, w);
    ck_assert_str_eq(str1, str2);
    ck_assert_int_eq(a, b);
} END_TEST

START_TEST(SPRINTF_FLOAT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_H_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5.5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_MINUS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%f";
  float f = -7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_PLUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5f";
  float f = 7.891233;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_FLOAT_LONG) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%.16f";
  float f = 7.891235551512512321;
  sprintf(result, format_str, f);
  s21_sprintf(result_s21, format_str, f);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_PREC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_L) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%ld";
  long long d = LONG_MAX;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%hd";
  int d = INT_MAX;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5d";
  int d = -5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_PLUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_DECIMAL_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% d";
  int d = 5;
  sprintf(result, format_str, d);
  s21_sprintf(result_s21, format_str, d);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_MINUS_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%u";
  unsigned int u = -5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_LONG) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%lu";
  unsigned long int u = ULONG_MAX;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_SHORT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%hu";
  unsigned long int u = USHRT_MAX;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_UNSIGNED_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% u";
  unsigned int u = 5;
  sprintf(result, format_str, u);
  s21_sprintf(result_s21, format_str, u);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  char c = 'c';
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_DIGIT) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_CHAR_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% c";
  int c = 48;
  sprintf(result, format_str, c);
  s21_sprintf(result_s21, format_str, c);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_SYMBOLS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%s";
  char s[] = "A\nB\tO\vB\rA\0C";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_STRING_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% s";
  char s[] = "ABOBA";
  sprintf(result, format_str, s);
  s21_sprintf(result_s21, format_str, s);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_DEC) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 5;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_OCTAL) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_HEX) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%i";
  int i = 0xF;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_MINUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%-5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_PLUS) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_PLUS_H) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "%+5i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(SPRINTF_I_SPACE) {
  char result[100] = "";
  char result_s21[100] = "";
  char format_str[100] = "% i";
  int i = 05;
  sprintf(result, format_str, i);
  s21_sprintf(result_s21, format_str, i);
  ck_assert_str_eq(result, result_s21);
} END_TEST

START_TEST(s21_sprintf_d) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);
  int min = -2147483648;
  int max = 2147483647;
  int lib_res = sprintf(lib_test_str,
  "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| |%5d| |%20.15d| |%+.0d| |%5.15d|\n",
  12, 0, 12, max, min, 12, 12, 0, -12, 12, 12, -12);
  int s21_res = s21_sprintf(s21_test_str,
  "|%d| |%d| |% d| |%+d| |%d| |%-5d| |%05d| |%+5d| |%5d| |%20.15d| |%+.0d| |%5.15d|\n",
  12, 0, 12, max, min, 12, 12, 0, -12, 12, 12, -12);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_i) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);
  int lib_res = sprintf(lib_test_str, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n",
  12, 12, 12, -12, 12, 12, 12, -12);
  int s21_res = s21_sprintf(s21_test_str, "|%i| |% i| |%+i| |%i| |%-5i| |%5i| |%+5i| |%5i|\n",
  12, 12, 12, -12, 12, 12, 12, -12);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_star) {
    char* s21_test_str = (char*)malloc(sizeof(char) * 256);
    char* lib_test_str = (char*)malloc(sizeof(char) * 256);
    int lib_res = sprintf(lib_test_str, "%.d\n", 5);
    int s21_res = s21_sprintf(s21_test_str, "%.d\n", 5);
    ck_assert_str_eq(s21_test_str, lib_test_str);
    ck_assert_int_eq(s21_res, lib_res);
    free(s21_test_str);
    free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_u) {
    char* s21_test_str = (char*)malloc(sizeof(char) * 256);
    char* lib_test_str = (char*)malloc(sizeof(char) * 256);
    unsigned int u = 2147483647;
    unsigned int a = 0;
    unsigned int b = 102;
    unsigned int c = 12;
    unsigned int d = 120;
    unsigned int e = 1200;
    unsigned int f = 14895085;
    int lib_res = sprintf(lib_test_str,
    "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n",
    u, a, b, c, f, c, c, c, d, e);
    int s21_res = s21_sprintf(s21_test_str,
    "|%u| |%u| |%u| |%-20u| |%u| |%07u| |%5u| |%.20u| |%-20.15u| |%u|\n",
    u, a, b, c, f, c, c, c, d, e);
    ck_assert_str_eq(s21_test_str, lib_test_str);
    ck_assert_int_eq(s21_res, lib_res);
    free(s21_test_str);
    free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_f) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);
  int lib_res = sprintf(lib_test_str, "|%f| |% f| |%+f| |%f| |%-8f| |%8f| |%+8f| |%8f|\n",
  0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);
  int s21_res = s21_sprintf(s21_test_str, "|%f| |% f| |%+f| |%f| |%-8f| |%8f| |%+8f| |%8f|\n",
  0.020, 0.020, 0.020, -0.020, 0.020, 0.020, 0.020, -0.020);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_s) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);
  int lib_res = sprintf(lib_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n",
  "Hi", "My", "Hi", "My");
  int s21_res = s21_sprintf(s21_test_str, "|%20s| |%-20s| |%5.0s| |%.1s|\n",
  "Hi", "My", "Hi", "My");
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_h) {
    char* s21_test_str = (char*)malloc(sizeof(char) * 256);
    char* lib_test_str = (char*)malloc(sizeof(char) * 256);
    short i = 0;
    short a = 32767;
    int lib_res = sprintf(lib_test_str, "|%hi| |%hd| |%hu|", i, a, (unsigned short)i);
    int s21_res = s21_sprintf(s21_test_str, "|%hi| |%hd| |%hu|", i, a, (unsigned short)i);
    ck_assert_str_eq(s21_test_str, lib_test_str);
    ck_assert_int_eq(s21_res, lib_res);
    free(s21_test_str);
    free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_l) {
    char* s21_test_str = (char*)malloc(sizeof(char) * 256);
    char* lib_test_str = (char*)malloc(sizeof(char) * 256);
    long i = LONG_MAX;
    long a = LONG_MIN;
    unsigned long b = 4294967295;
    int lib_res = sprintf(lib_test_str, "|%li| |%ld| |%lu|", i, a, b);
    int s21_res = s21_sprintf(s21_test_str, "|%li| |%ld| |%lu|", i, a, b);
    ck_assert_str_eq(s21_test_str, lib_test_str);
    ck_assert_int_eq(s21_res, lib_res);
    free(s21_test_str);
    free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_diu_whith_str) {
    char* s21_test_str = (char*)malloc(sizeof(char) * 256);
    char* lib_test_str = (char*)malloc(sizeof(char) * 256);
    long number = 100000000;
    short number1 = 5;
    int lib_res = sprintf(lib_test_str,
    "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n", 0, (unsigned)1, number1, 3, -4, 5, number);
    int s21_res = s21_sprintf(s21_test_str,
    "%d Hello, %10u it's a great % hd, %-10i, %d, %+10d, %ld\n", 0, (unsigned)1, number1, 3, -4, 5, number);
    ck_assert_str_eq(s21_test_str, lib_test_str);
    ck_assert_int_eq(s21_res, lib_res);
    free(s21_test_str);
    free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_cs) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 256);
  char* lib_test_str = (char*)malloc(sizeof(char) * 256);
  char* str0 = "User";
  char* str1 = "";
  int lib_res = sprintf(lib_test_str, "Hello, %-13s, i%c, %s a great day!", str0, 't', str1);
  int s21_res = s21_sprintf(s21_test_str, "Hello, %-13s, i%c, %s a great day!", str0, 't', str1);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_f_with_str) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 512);
  char* lib_test_str = (char*)malloc(sizeof(char) * 512);
  int lib_res = sprintf(lib_test_str, "Hello%.10f, my %.2f, beautiful %+10.f,world %-5.3f",
  0.2, 0.12345, 0.3, -0.23246);
  int s21_res = s21_sprintf(s21_test_str, "Hello%.10f, my %.2f, beautiful %+10.f,world %-5.3f",
  0.2, 0.12345, 0.3, -0.23246);
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
} END_TEST

START_TEST(s21_sprintf_empty) {
  char* s21_test_str = (char*)malloc(sizeof(char) * 512);
  char* lib_test_str = (char*)malloc(sizeof(char) * 512);
  int lib_res = sprintf(lib_test_str, "%c", '\0');
  int s21_res = s21_sprintf(s21_test_str, "%c", '\0');
  ck_assert_str_eq(s21_test_str, lib_test_str);
  ck_assert_int_eq(s21_res, lib_res);
  free(s21_test_str);
  free(lib_test_str);
} END_TEST

Suite *suite_sprintf() {
    Suite *s25;
    TCase *tc1_1;
    s25 = suite_create("s21_SPRINTF");
    tc1_1 = tcase_create("case_sprintf");
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn22);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn23);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn24);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn25);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn26);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn27);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn28);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn31);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn32);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn33);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn34);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn35);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn37);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn38);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn39);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn40);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn42);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn43);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn44);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn45);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn46);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn47);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn48);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn49);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn50);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn52);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn53);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn54);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn55);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn56);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn57);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn58);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn59);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn60);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn61);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn62);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn63);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn64);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn65);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn66);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn67);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn68);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn69);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn70);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn71);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn72);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn73);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn74);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn88);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn89);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn90);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn91);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn92);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn93);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn94);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn95);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn96);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn97);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn98);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn99);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn100);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn101);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn102);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn103);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn104);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn105);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn106);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn107);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn108);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn109);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn110);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn111);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn112);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn113);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn114);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn115);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn116);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn155);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn156);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn157);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn158);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn159);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn160);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn161);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn162);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn163);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn164);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn165);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn166);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn167);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn168);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn169);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn170);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn171);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn172);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn173);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn174);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn176);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn177);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn183);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn184);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn185);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn186);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn187);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn188);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn189);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn190);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn191);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn192);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn193);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn194);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn195);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn196);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn197);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn198);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn199);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn200);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn201);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn202);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn203);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn204);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn205);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn206);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn207);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn208);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn209);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn210);
    tcase_add_test(tc1_1, SPRINTFTestLaslhyn211);
    tcase_add_test(tc1_1, SPRINTFTestdogletho1);
    tcase_add_test(tc1_1, SPRINTFTestdogletho2);
    tcase_add_test(tc1_1, SPRINTFTestdogletho6);
    tcase_add_test(tc1_1, SPRINTFTestdogletho52);
    tcase_add_test(tc1_1, SPRINTFTestdogletho53);
    tcase_add_test(tc1_1, SPRINTFTestdogletho54);
    tcase_add_test(tc1_1, SPRINTFTestdogletho55);
    tcase_add_test(tc1_1, SPRINTFTestdogletho56);
    tcase_add_test(tc1_1, SPRINTFTestdogletho68);
    tcase_add_test(tc1_1, SPRINTFTestdogletho69);
    tcase_add_test(tc1_1, SPRINTFTestdogletho127);
    tcase_add_test(tc1_1, SPRINTFTestdogletho128);
    tcase_add_test(tc1_1, SPRINTFTestdogletho129);
    tcase_add_test(tc1_1, SPRINTFTestdogletho130);
    tcase_add_test(tc1_1, SPRINTFTestdogletho131);
    tcase_add_test(tc1_1, SPRINTFTestdogletho187);
    tcase_add_test(tc1_1, SPRINTFTestdogletho190);
    tcase_add_test(tc1_1, SPRINTFTestdogletho197);
    tcase_add_test(tc1_1, SPRINTFTestdogletho198);
    tcase_add_test(tc1_1, SPRINTFTestdogletho232);
    tcase_add_test(tc1_1, SPRINTFTestdogletho233);
    tcase_add_test(tc1_1, SPRINTFTestdogletho234);
    tcase_add_test(tc1_1, SPRINTFTestdogletho235);
    tcase_add_test(tc1_1, SPRINTFTestdogletho236);
    tcase_add_test(tc1_1, SPRINTFTestdogletho237);
    tcase_add_test(tc1_1, SPRINTFTestdogletho239);
    tcase_add_test(tc1_1, SPRINTFTestdogletho259);
    tcase_add_test(tc1_1, SPRINTFTestdogletho261);
    tcase_add_test(tc1_1, SPRINTFTestdogletho282);
    tcase_add_test(tc1_1, SPRINTFTestdogletho283);
    tcase_add_test(tc1_1, SPRINTFTestRleonard1);
    tcase_add_test(tc1_1, SPRINTFTestRleonard3);
    tcase_add_test(tc1_1, SPRINTFTestRleonard6);
    tcase_add_test(tc1_1, SPRINTFTestRleonard7);
    tcase_add_test(tc1_1, SPRINTFTestRleonard9);
    tcase_add_test(tc1_1, SPRINTFTestRleonard12);
    tcase_add_test(tc1_1, SPRINTFTestRleonard13);
    tcase_add_test(tc1_1, SPRINTFTestRleonard14);
    tcase_add_test(tc1_1, s21_sprintf_test_percent);
    tcase_add_test(tc1_1, simple_int);
    tcase_add_test(tc1_1, precise_int);
    tcase_add_test(tc1_1, width_int);
    tcase_add_test(tc1_1, minus_width_int);
    tcase_add_test(tc1_1, plus_width_int);
    tcase_add_test(tc1_1, padding_int);
    tcase_add_test(tc1_1, flags_long_int);
    tcase_add_test(tc1_1, flags_short_int);
    tcase_add_test(tc1_1, zero_precision_zero_int);
    tcase_add_test(tc1_1, space_flag_int);
    tcase_add_test(tc1_1, unsigned_val);
    tcase_add_test(tc1_1, unsigned_val_width);
    tcase_add_test(tc1_1, unsigned_val_flags);
    tcase_add_test(tc1_1, unsigned_val_precision);
    tcase_add_test(tc1_1, unsigned_val_many_flags);
    tcase_add_test(tc1_1, unsigned_val_short);
    tcase_add_test(tc1_1, unsigned_val_long);
    tcase_add_test(tc1_1, unsigned_val_many);
    tcase_add_test(tc1_1, octal_short);
    tcase_add_test(tc1_1, unsigned_zero);
    tcase_add_test(tc1_1, one_char);
    tcase_add_test(tc1_1, one_precision);
    tcase_add_test(tc1_1, one_flags);
    tcase_add_test(tc1_1, one_width);
    tcase_add_test(tc1_1, one_many);
    tcase_add_test(tc1_1, one_many_flags);
    tcase_add_test(tc1_1, string);
    tcase_add_test(tc1_1, string_precision);
    tcase_add_test(tc1_1, string_width);
    tcase_add_test(tc1_1, string_flags);
    tcase_add_test(tc1_1, string_long);
    tcase_add_test(tc1_1, string_many);
    tcase_add_test(tc1_1, string_width_huge);
    tcase_add_test(tc1_1, float_flags);
    tcase_add_test(tc1_1, all_empty);
    tcase_add_test(tc1_1, empty_format_and_parameters);
    tcase_add_test(tc1_1, test_one_char);
    tcase_add_test(tc1_1, test_many_char);
    tcase_add_test(tc1_1, test_one_string);
    tcase_add_test(tc1_1, test_many_string);
    tcase_add_test(tc1_1, test_one_dec);
    tcase_add_test(tc1_1, test_many_dec);
    tcase_add_test(tc1_1, test_one_int);
    tcase_add_test(tc1_1, test_many_int);
    tcase_add_test(tc1_1, test_one_float);
    tcase_add_test(tc1_1, test_many_float);
    tcase_add_test(tc1_1, test_one_unsigned_dec);
    tcase_add_test(tc1_1, test_many_unsigned_dec);
    tcase_add_test(tc1_1, test_one_char_with_alignment_left);
    tcase_add_test(tc1_1, test_one_char_with_alignment_right);
    tcase_add_test(tc1_1, test_many_char_with_alignment);
    tcase_add_test(tc1_1, test_sprintf1);
    tcase_add_test(tc1_1, test_sprintf2);
    tcase_add_test(tc1_1, test_sprintf3);
    tcase_add_test(tc1_1, test_sprintf4);
    tcase_add_test(tc1_1, test_sprintf6);
    tcase_add_test(tc1_1, test_sprintf7);
    tcase_add_test(tc1_1, test_sprintf8);
    tcase_add_test(tc1_1, test_sprintf9);
    tcase_add_test(tc1_1, test_sprintf10);
    tcase_add_test(tc1_1, test_sprintf11);
    tcase_add_test(tc1_1, test_sprintf16);
    tcase_add_test(tc1_1, test_sprintf17);
    tcase_add_test(tc1_1, test_sprintf18);
    tcase_add_test(tc1_1, test_sprintf19);
    tcase_add_test(tc1_1, test_sprintf20);
    tcase_add_test(tc1_1, test_sprintf24);
    tcase_add_test(tc1_1, test_sprintf25);
    tcase_add_test(tc1_1, test_sprintf26);
    tcase_add_test(tc1_1, test_sprintf27);
    tcase_add_test(tc1_1, test_sprintf29);
    tcase_add_test(tc1_1, test_sprintf30);
    tcase_add_test(tc1_1, wide_char);
    tcase_add_test(tc1_1, width_char);
    tcase_add_test(tc1_1, minus_wide_char);
    tcase_add_test(tc1_1, wide_string);
    tcase_add_test(tc1_1, wide_string1);
    tcase_add_test(tc1_1, wide_string2);
    tcase_add_test(tc1_1, wide_string3);
    tcase_add_test(tc1_1, SPRINTF_FLOAT);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_PREC);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_H);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_H_PREC);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_MINUS);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_MINUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_SPACE);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_PLUS_H);
    tcase_add_test(tc1_1, SPRINTF_FLOAT_LONG);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_PREC);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_L);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_H);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_MINUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_PLUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_DECIMAL_SPACE);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_MINUS_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_LONG);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_SHORT);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_H);
    tcase_add_test(tc1_1, SPRINTF_UNSIGNED_SPACE);
    tcase_add_test(tc1_1, SPRINTF_CHAR);
    tcase_add_test(tc1_1, SPRINTF_CHAR_DIGIT);
    tcase_add_test(tc1_1, SPRINTF_CHAR_H);
    tcase_add_test(tc1_1, SPRINTF_CHAR_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_CHAR_SPACE);
    tcase_add_test(tc1_1, SPRINTF_STRING);
    tcase_add_test(tc1_1, SPRINTF_STRING_SYMBOLS);
    tcase_add_test(tc1_1, SPRINTF_STRING_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_STRING_H);
    tcase_add_test(tc1_1, SPRINTF_STRING_SPACE);
    tcase_add_test(tc1_1, SPRINTF_I_DEC);
    tcase_add_test(tc1_1, SPRINTF_I_OCTAL);
    tcase_add_test(tc1_1, SPRINTF_I_HEX);
    tcase_add_test(tc1_1, SPRINTF_I_H);
    tcase_add_test(tc1_1, SPRINTF_I_MINUS_H);
    tcase_add_test(tc1_1, SPRINTF_I_PLUS);
    tcase_add_test(tc1_1, SPRINTF_I_PLUS_H);
    tcase_add_test(tc1_1, SPRINTF_I_SPACE);
    tcase_add_test(tc1_1, s21_sprintf_d);
    tcase_add_test(tc1_1, s21_sprintf_u);
    tcase_add_test(tc1_1, s21_sprintf_cs);
    tcase_add_test(tc1_1, s21_sprintf_f);
    tcase_add_test(tc1_1, s21_sprintf_i);
    tcase_add_test(tc1_1, s21_sprintf_s);
    tcase_add_test(tc1_1, s21_sprintf_h);
    tcase_add_test(tc1_1, s21_sprintf_l);
    tcase_add_test(tc1_1, s21_sprintf_star);
    tcase_add_test(tc1_1, s21_sprintf_empty);
    tcase_add_test(tc1_1, s21_sprintf_diu_whith_str);
    tcase_add_test(tc1_1, s21_sprintf_f_with_str);
    suite_add_tcase(s25, tc1_1);
    return s25;
}
