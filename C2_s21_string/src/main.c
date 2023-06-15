#include "tests_suitcases.h"

int main(void) {
    run_tests();
    return 0;
}
void run_testcase(Suite *testcase) {
    static int counter_testcase = 1;
    if (counter_testcase > 1)
        counter_testcase++;
    SRunner *sr = srunner_create(testcase);
    srunner_set_fork_status(sr, CK_NOFORK);
    srunner_run_all(sr, CK_NORMAL);
    srunner_free(sr);
}

void run_tests(void) {
    Suite *list_cases[] = {
    suite_strlen(),
    suite_strspn(),
    suite_strcspn(),
    suite_memcmp(),
    suite_strcmp(),
    suite_strncmp(),
    suite_memcpy(),
    suite_memmove(),
    suite_memset(),
    suite_strcpy(),
    suite_strncpy(),
    suite_strtok(),
    suite_strerror(),
    suite_strcat(),
    suite_strncat(),
    suite_memchr(),
    suite_strstr(),
    suite_strpbrk(),
    suite_strrchr(),
    suite_strchr(),
    suite_to_lower(),
    suite_to_upper(),
    suite_trim(),
    suite_insert(),
    suite_sprintf(),
    NULL
    };

    for (Suite **current_testcase = list_cases; *current_testcase != NULL;
        current_testcase++) {
        run_testcase(*current_testcase);
    }
}
