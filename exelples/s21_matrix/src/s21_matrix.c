
#include "s21_matrix.h"

static int sum_sub(matrix_t *A, matrix_t *B, matrix_t *result, int minus);
static matrix_t create_minor(matrix_t a, int row, int column);
static int matrix_not_null(matrix_t *a);

static int matrix_not_null(matrix_t *a) {
    int res = 1;
    if (a == NULL || a->matrix == NULL || a->columns <= 0 || a->rows <= 0) {
        res = 0;
    }
    return res;
}

int s21_eq_matrix(matrix_t *A, matrix_t *B) {
    int res = SUCCESS;
    if (A->columns == B->columns && A->rows == B->rows && matrix_not_null(A) && matrix_not_null(B)) {
        for (int k = 0; k < A->rows; k++) {
            for (int g = 0; g < A->columns; g++) {
                if (fabs(A->matrix[k][g] - B->matrix[k][g]) > 1e-6) {
                    res = FAILURE;
                    break;
                }
            }
        }
    } else {
        res = FAILURE;
    }
    return res;
}

int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    int res = sum_sub(A, B, result, 1);
    return res;
}

int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    int res = sum_sub(A, B, result, -1);
    return res;
}

static int sum_sub(matrix_t *A, matrix_t *B, matrix_t *result, int minus) {
    int res = 0;
    if (!matrix_not_null(A) || !matrix_not_null(B)) {
        res = 1;
    } else if (A->columns != B->columns || A->rows != B->rows) {
        res = 2;
    } else {
        s21_create_matrix(A->rows, A->columns, result);
        for (int k = 0; k < A->rows; k++) {
            for (int g = 0; g < A->columns; g++) {
                result->matrix[k][g] = A->matrix[k][g] + B->matrix[k][g] * minus;
            }
        }
    }
    return res;
}

int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
    int res = 0;
    if (matrix_not_null(A)) {
        s21_create_matrix(A->rows, A->columns, result);
        for (int k = 0; k < A->rows; k++) {
            for (int g = 0; g < A->columns; g++) {
                result->matrix[k][g] = A->matrix[k][g] * number;
            }
        }
    } else {
        res = 1;
    }
    return res;
}

int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
    int res = 0;
    if (!matrix_not_null(A) || !matrix_not_null(B)) {
        res = 1;
    } else if (A->columns != B->rows) {
        res = 2;
    } else {
        s21_create_matrix(A->rows, B->columns, result);
        for (int k = 0; k < A->rows; k++) {
            for (int g = 0; g < B->columns; g++) {
                for (int i = 0; i < A->columns; i++) {
                    result->matrix[k][g] += A->matrix[k][i] * B->matrix[i][g];
                }
            }
        }
    }
    return res;
}

int s21_transpose(matrix_t *A, matrix_t *result) {
    int res = 0;
    if (matrix_not_null(A)) {
        s21_create_matrix(A->columns, A->rows, result);
        for (int k = 0; k < A->rows; k++) {
            for (int g = 0; g < A->columns; g++) {
                result->matrix[g][k] = A->matrix[k][g];
            }
        }
    } else {
        res = 1;
    }
    return res;
}

int s21_determinant(matrix_t *A, double *result) {
    int res = 0;
    if (!matrix_not_null(A) || result == NULL) {
        res = 1;
    } else if (A->columns != A->rows) {
        res = 2;
    } else {
        if (A->columns == 1) {
            *result = A->matrix[0][0];
        } else if (A->columns == 2) {
            *result = A->matrix[0][0] * A->matrix[1][1] - A->matrix[1][0] * A->matrix[0][1];
        } else {
            matrix_t minor;
            int minus = 1;
            for (int k = 0; k < A->columns; k++) {
                double result_minor = 0;
                minor = create_minor(*A, 0, k);
                s21_determinant(&minor, &result_minor);
                s21_remove_matrix(&minor);
                *result += minus * result_minor * A->matrix[0][k];
                minus *= -1;
            }
        }
    }
    return res;
}

static matrix_t create_minor(matrix_t a, int row, int column) {
    matrix_t res;
    s21_create_matrix(a.rows - 1, a.columns - 1, &res);
    int i = 0, j;
    for (int k = 0; k < a.rows; k++) {
        j = 0;
        if (k != row) {
            for (int g = 0; g < a.columns; g++) {
                if (g != column) {
                    res.matrix[i][j] = a.matrix[k][g];
                    j++;
                }
            }
            i++;
        }
    }
    return res;
}

int s21_calc_complements(matrix_t *A, matrix_t *result) {
    int res = 0;
    if (!matrix_not_null(A)) {
        res = 1;
    } else if (A->columns != A->rows) {
        res = 2;
    } else {
        s21_create_matrix(A->rows, A->columns, result);
        for (int k = 0; k < A->rows; k++) {
            for (int g = 0; g < A->columns; g++) {
                double det = 0;
                matrix_t minor = create_minor(*A, k, g);
                s21_determinant(&minor, &det);
                s21_remove_matrix(&minor);
                result->matrix[k][g] = det * pow(-1, k + g);
            }
        }
    }
    return res;
}

int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
    double det = 0;
    int res = s21_determinant(A, &det);
    if (result == NULL) {
        res = 1;
    } else if (!res && det != 0) {
        s21_calc_complements(A, result);
        matrix_t buff = *result;
        s21_transpose(&buff, result);
        s21_remove_matrix(&buff);
        for (int k = 0; k < A->rows; k++) {
            for (int g = 0; g < A->columns; g++) {
                result->matrix[k][g] /= det;
            }
        }
    } else if (!res) {
        res = 2;
    }
    return res;
}

int s21_create_matrix(int rows, int columns, matrix_t *result) {
    int res = 0;
    result->rows = rows;
    result->columns = columns;
    if (rows <= 0 || columns <= 0) {
        res = 1;
    } else {
        result->matrix = (double**)calloc(rows, sizeof(double*));
        if (result->matrix == NULL) {
            res = 1;
        }
    }
    if (!res) {
        for (int k = 0; k < rows; k++) {
            result->matrix[k] = (double*)calloc(columns, sizeof(double));
            if (result->matrix[k] == NULL) {
                for (int g = 0; g < k; g++) {
                    free(result->matrix[g]);
                }
                free(result->matrix);
                res = 1;
                break;
            }
        }
    }
    return res;
}

void s21_remove_matrix(matrix_t *A) {
    if (matrix_not_null(A)) {
        for (int k = 0; k < A->rows; k++) {
            if (A->matrix[k] != NULL) {
                free(A->matrix[k]);
            }
        }
        if (A->matrix != NULL) free(A->matrix);
        A->columns = 0;
        A->rows = 0;
    }
}
