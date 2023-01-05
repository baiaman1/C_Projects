#include "./_test.h"

int main() {
    Suite* suites[] = {
        suite_validate(),
        suite_infix_to_postfix(),
        suite_arithmetic(),
        suite_trigonometric(),
        suite_credit_calc(),

    };
    for (int i = 0; i < 5; i++) {
        SRunner *sr = srunner_create(suites[i]);
        srunner_set_fork_status(sr, CK_NOFORK);
        srunner_run_all(sr, CK_NORMAL);
        srunner_free(sr);
        putchar('\n');
    }
    return 0;
}
