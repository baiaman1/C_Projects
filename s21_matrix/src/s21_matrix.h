#include <check.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define SUCCESS 1
#define FAILURE 0

typedef struct matrix_struct {
  double **matrix;
  int rows;
  int columns;
} matrix_t;

// matrix operations---------
int s21_create_matrix(int rows, int columns, matrix_t *result);
void s21_remove_matrix(matrix_t *A); // Очистка матриц (remove_matrix)
int s21_eq_matrix(matrix_t *A, matrix_t *B); // Сравнение матриц (eq_matrix)
int s21_sum_matrix(matrix_t *A, matrix_t *B, matrix_t *result); // Сложение
int s21_sub_matrix(matrix_t *A, matrix_t *B, matrix_t *result); // Bычитание
// Умнож-е на число
int s21_mult_number(matrix_t *A, double number, matrix_t *result);
// Умнож-е двух матриц
int s21_mult_matrix(matrix_t *A, matrix_t *B, matrix_t *result);
// Транспонирование матрицы (transpose)
int s21_transpose(matrix_t *A, matrix_t *result);
// Матрица алгебраических дополнений
int s21_calc_complements(matrix_t *A, matrix_t *result);
// Определитель матрицы (determinant)
int s21_determinant(matrix_t *A, double *result);
// Обратная матрица (inverse_matrix)
int s21_inverse_matrix(matrix_t *A, matrix_t *result);

// helpers-----------
void print_matrix(matrix_t *mat);
void fill_rand(matrix_t *mat);
int valid_in(matrix_t *mat);
// sum(type1) || sub(type2)
int cycle_su(matrix_t *A, matrix_t *B, matrix_t *result, int type);

// Минор матрицы
int get_minor_ij(int row, int column, matrix_t *A, matrix_t *result);
