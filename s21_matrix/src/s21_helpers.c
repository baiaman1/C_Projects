#include "s21_matrix.h"

// void print_matrix(matrix_t *mat) {
//   for (int i = 0; i < mat->rows; i++) {
//     for (int j = 0; j < mat->columns; j++) {
//       printf("%.1f ", mat->matrix[i][j]);
//     }
//     printf("\n");
//   }
//   printf("\n");
// }

// // Заполнить случайными числами
// void fill_rand(matrix_t *mat) {
//   for (int i = 0; i < mat->rows; i++) {
//     for (int j = 0; j < mat->columns; j++) {
//       mat->matrix[i][j] = rand() % 10;
//     }
//   }
// }

// int valid_in(matrix_t *mat) {
//   int res = 1;
//   if (mat != NULL || mat->matrix != NULL || mat->columns <= 0 || mat->rows <=
//   0) {
//     res = 0;
//   }
//   return res;
// }

// // перебор для сложения и вычитания
// int cycle_su(matrix_t *A, matrix_t *B, matrix_t *result, int type) {
//   int res = 0;
//   // проверка на валидность
//   if (valid_in(A) || valid_in(B)) {
//     res = 1;
//   } else if (A->columns != B->columns && A->rows != B->rows) {
//     res = 2;
//   }

//   else {
//     s21_create_matrix(A->rows, A->columns, result);
//     for (int i = 0; i < A->rows; i++) {
//       for (int j = 0; j < A->columns; j++) {
//         if (type == 1) {
//           result->matrix[i][j] = A->matrix[i][j] + B->matrix[i][j];
//         } else if (type == 2) {
//           result->matrix[i][j] = A->matrix[i][j] - B->matrix[i][j];
//         }
//       }
//     }
//   }
//   return res;
// }

// // Получить минор зад-го элемента
// int get_minor_ij(int row, int column, matrix_t *A, matrix_t *result) {
//   int err = 1;
//   if (A->matrix != NULL) {
//     err = s21_create_matrix(A->rows - 1, A->columns - 1, result);
//     if (err == 0) {
//       for (int i = 0; i < A->rows; i++) {
//         int tmp_row = i;
//         if (i > row - 1) {
//           tmp_row--;
//         }
//         for (int j = 0; j < A->columns; j++) {
//           int tmp_col = j;
//           if (j > column - 1) {
//             tmp_col--;
//           }
//           if (i != row - 1 && j != column - 1) {
//             result->matrix[tmp_row][tmp_col] = A->matrix[i][j];
//           }
//         }
//       }
//     }
//   }
//   return err;
// }
