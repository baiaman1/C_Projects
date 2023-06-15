#ifndef SRC_S21_MATH_H_
#define SRC_S21_MATH_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>

#define S21_PI 3.14159265358979323846264338327950288
#define S21_M_E 2.71828182845904523536028747135266250
#define S21_EPS 1e-17
#define S21_ISNAN(x) (!(x >= 0) && !(x < 0))
#define S21_NAN (__builtin_nanf(""))
#define S21_INFINITY (__builtin_inff())
#define s21_isnan(x) __builtin_isnan(x)  // проверка на NAN
#define s21_is_finite(x) __builtin_isfinite(x)

int s21_abs(int x);  //
long double s21_acos(double x);  //
long double s21_asin(double x);  //
long double s21_atan(double x);  //
long double s21_ceil(double x);
long double s21_cos(double x);
long double s21_exp(double x);  // I
long double s21_fabs(double x);  // I
long double s21_floor(double x);
long double s21_fmod(double x, double y);  //
long double s21_log(double x);  // I
long double s21_pow(double base, double exp);  // I
long double s21_sin(double x);
long double s21_sqrt(double x);  // I
long double s21_tan(double x);
long double s21_atan_calculate(double x);

#endif  // SRC_S21_MATH_H_
