#include "s21_matrix.h"

// Создание матриц (create_matrix)
int s21_create_matrix(int rows, int columns, matrix_t *result) {
  int res = 0;
  if (rows <= 0 || columns <= 0) {
    res = 1;
  } else {
    result->rows = rows;
    result->columns = columns;
    result->matrix = calloc(rows, sizeof(double *));
    res = 1;
    if (result->matrix != NULL) {
      for (int i = 0; i < result->rows; i++) {
        result->matrix[i] = calloc(columns, sizeof(double));
      }
      res = 0;
    }
  }
  return res;
}

// Очистка матриц (remove_matrix)
void s21_remove_matrix(matrix_t *A) {
  for (int i = 0; i < A->rows; i++) {
    if (A->matrix[i] != NULL) {
      free(A->matrix[i]);
    }
  }
  if (A->matrix != NULL)
    free(A->matrix);
  A->columns = 0;
  A->rows = 0;
}

// Сравнение матриц (eq_matrix)
int s21_eq_matrix(matrix_t *A, matrix_t *B) {
  int res = 0;
  if (!valid_in(A) || !valid_in(B)) {
    res = 1;
  } else if (A->columns != B->columns && A->rows != B->rows) {
    res = 2;
  } else {
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
        if (fabs(A->matrix[i][j] - B->matrix[i][j]) > 1e-6) {
          res = 3;
          i = A->rows;
          j = A->columns;
        }
      }
    }
  }
  return (!res) ? SUCCESS : FAILURE;
}

// перебор для сложения и вычитания
int cycle_su(matrix_t *A, matrix_t *B, matrix_t *result, int type) {
  int res = 0;
  if (!valid_in(A) || !valid_in(B)) {
    res = 1;
  } else if (A->columns != B->columns || A->rows != B->rows) {
    res = 2;
  } else {
    s21_create_matrix(A->rows, A->columns, result);
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
        result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j] * type;
      }
    }
  }
  return res;
}

// Сложение
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return cycle_su(A, B, result, 1);
}
// Bычитание
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  return cycle_su(A, B, result, -1);
}

// Умнож-е на число
int s21_mult_number(matrix_t *A, double number, matrix_t *result) {
  int res = 0;
  if (!valid_in(A) || result == NULL) {
    res = 1;
  } else {
    s21_create_matrix(A->rows, A->columns, result);
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
        result->matrix[i][j] = A->matrix[i][j] * number;
      }
    }
  }
  return res;
}

// Умнож-е двух матриц
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result) {
  int res = 0;
  if (!valid_in(A) || !valid_in(B)) {
    res = 1;
  } else if (A->columns != B->rows) {
    res = 2;
  } else {
    s21_create_matrix(A->rows, B->columns, result);
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < B->columns; j++) {
        for (int k = 0; k < A->columns; k++) {
          result->matrix[i][j] += A->matrix[i][k] * B->matrix[k][j];
        }
      }
    }
  }
  return res;
}

// Транспонирование матрицы
int s21_transpose(matrix_t *A, matrix_t *result) {
  int res = 0;
  if (!valid_in(A) || result == NULL) {
    res = 1;
  } else {
    s21_create_matrix(A->columns, A->rows, result);
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
        result->matrix[j][i] = A->matrix[i][j];
      }
    }
  }
  return res;
}

// Получить минор зад-го элемента
int get_minor_ij(int row, int column, matrix_t *A, matrix_t *result) {
  int res = 1;
  if (A->matrix != NULL) {
    res = s21_create_matrix(A->rows - 1, A->columns - 1, result);
    if (res == 0) {
      for (int i = 0; i < A->rows; i++) {
        int tmp_row = i;
        if (i > row - 1) {
          tmp_row--;
        }
        for (int j = 0; j < A->columns; j++) {
          int tmp_col = j;
          if (j > column - 1) {
            tmp_col--;
          }
          if (i != row - 1 && j != column - 1) {
            result->matrix[tmp_row][tmp_col] = A->matrix[i][j];
          }
        }
      }
    }
  }
  return res;
}

// Mатрица алгебраических дополнений
int s21_calc_complements(matrix_t *A, matrix_t *result) {
  int res = 0;
  if (!valid_in(A)) {
    res = 1;
  } else if (A->columns != A->rows) {
    res = 2;
  } else {
    s21_create_matrix(A->rows, A->columns, result);
    for (int i = 0; i < A->rows; i++) {
      for (int j = 0; j < A->columns; j++) {
        double det = 0;
        matrix_t minor = {0};
        get_minor_ij(i + 1, j + 1, A, &minor);
        s21_determinant(&minor, &det);
        s21_remove_matrix(&minor);
        result->matrix[i][j] = pow((-1), i + j) * det;
      }
    }
  }
  return res;
}

// Определитель матрицы
int s21_determinant(matrix_t *A, double *result) {
  int res = 0;
  if (!valid_in(A) || !result) {
    res = 1;
  } else if (A->rows != A->columns) {
    res = 2;
  } else {
    *result = 0;
    if (A->rows == 1) {
      *result = A->matrix[0][0];
    } else if (A->rows == 2) {
      *result =
          A->matrix[0][0] * A->matrix[1][1] - A->matrix[0][1] * A->matrix[1][0];
    } else {
      matrix_t minor = {0};
      for (int i = 0; i < A->rows; i++) {
        double result_minor = 0;
        get_minor_ij(1, i + 1, A, &minor);
        s21_determinant(&minor, &result_minor);
        s21_remove_matrix(&minor);
        *result += pow((-1), i) * A->matrix[0][i] * result_minor;
      }
    }
  }
  return res;
}

// Обратная матрица
int s21_inverse_matrix(matrix_t *A, matrix_t *result) {
  double det = 0;
  int res = s21_determinant(A, &det);
  if (!valid_in(A) || result == NULL) {
    res = 1;
  } else if (res || det == 0) {
    res = 2;
  } else {
    matrix_t tmp_calc = {0};
    if (!s21_calc_complements(A, &tmp_calc)) {
      matrix_t tmp_tran = {0};
      if (!s21_transpose(&tmp_calc, &tmp_tran)) {
        s21_mult_number(&tmp_tran, 1 / det, result);
      }
      s21_remove_matrix(&tmp_tran);
    }
    s21_remove_matrix(&tmp_calc);
  }
  return res;
}

// Проверка на матицы на правильность
int valid_in(matrix_t *mat) {
  int res = 1;
  if (mat == NULL || mat->matrix == NULL || mat->columns <= 0 ||
      mat->rows <= 0) {
    res = 0;
  }
  return res;
}
