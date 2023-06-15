#include "s21_string.h"

char *s21_strerror(int errnum) {
    char* ERRORS[] = ERR_LIST;
    char* error = s21_NULL;
    static char buf[100];
    if (errnum >= 0 && errnum < N) {
        error = ERRORS[errnum];
    } else {
        if (std == 0) {
            char* undef = "Unknown error ";
            s21_sprintf(buf, "%s%d", undef, errnum);
        } else if (std == 1) {
            char* undef = "Unknown error: ";
            s21_sprintf(buf, "%s%d", undef, errnum);
        }
    }
    return error == s21_NULL ? buf : error;
}

