#include "s21_math_test.h"
#include <math.h>
#include <stdio.h>
#include <check.h>
#include <limits.h>
#define ERROR pow(10, -7)

START_TEST(s21_pow_test_1) {
  long double num1 = -8.574862;
  long double num2 = 7.993099;
  long double condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = 8.181928;
  num2 = -1.950393;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -8.140663;
  num2 = -6.153770;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -8.190569;
  num2 = 4.068785;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -3.313375;
  num2 = -0.682443;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -7.730617;
  num2 = 1.083946;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -3.049562;
  num2 = 8.660237;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -2;
  num2 = 234.3;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = 0;
  num2 = 2.457203;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = 6.52355;
  num2 = -2;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = S21_NAN;
  num2 = -0.349780;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_ldouble_nan(pow(num1, num2));
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = 1;
  num2 = S21_NAN;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_ldouble_nan(pow(num1, num2));
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = 32424;
  num2 = S21_NAN;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_ldouble_nan(pow(num1, num2));
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -INFINITY;
  num2 = 41271.435;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else if (isinf((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isinf(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = 123;
  num2 = INFINITY;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else if (isinf((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isinf(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = INFINITY;
  num2 = -INFINITY;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_ldouble_nan(pow(num1, num2));
  } else if (isinf((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isinf(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -INFINITY;
  num2 = 41271;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_ldouble_nan(pow(num1, num2));
  } else if (isinf((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isinf(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = -INFINITY;
  num2 = S21_NAN;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else if (isinf((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isinf(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }

  num1 = 132;
  num2 = -INFINITY;
  condition = (s21_pow(num1, num2) - pow(num1, num2));
  if (isnan((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isnan(pow(num1, num2)) != 0), 1);
  } else if (isinf((double)(s21_pow(num1, num2)))) {
    ck_assert_int_eq((isinf(pow(num1, num2)) != 0), 1);
  } else {
    ck_assert_int_eq((condition <= ERROR && condition >= -ERROR), 1);
  }
}
END_TEST

START_TEST(s21_pow_test_2) {
    for (double k = -1e-1; k <= 1; k += 1.1e-1) {
        for (double g = -2.55; g < 2; g += 1.1) {
            long double a = s21_pow(k, g);
            long double b = pow(k, g);
            if ((!s21_isnan(a) && !isnan(b)) &&
                !(a == INFINITY && b == INFINITY) &&
                !(a == -INFINITY && b == -INFINITY)) {
                ck_assert_double_eq_tol(a, b, 1e-6);
            }
            a = s21_pow(g, k);
            b = pow(g, k);
            if ((!s21_isnan(a) && !isnan(b)) &&
                !(a == INFINITY && b == INFINITY) &&
                !(a == -INFINITY && b == -INFINITY)) {
                ck_assert_double_eq_tol(a, b, 1e-6);
            }
        }
    }
}
END_TEST

START_TEST(s21_pow_test_3) {
    ck_assert_double_eq(pow(1, 0), s21_pow(1, 0));
    ck_assert_double_eq(pow(-1, 3), s21_pow(-1, 3));
    ck_assert_double_eq(pow(-1, 4), s21_pow(-1, 4));
    ck_assert_double_eq(pow(0, 0), s21_pow(0, 0));
    ck_assert_double_eq(pow(0, -1), s21_pow(0, -1));
    ck_assert_double_eq(pow(0, 1), s21_pow(0, 1));
    ck_assert_double_eq(pow(INFINITY, 0), s21_pow(S21_INFINITY, 0));
    ck_assert_double_eq(pow(INFINITY, -1), s21_pow(INFINITY, -1));
    ck_assert_double_eq(pow(-1, -INFINITY), s21_pow(-1, -S21_INFINITY));
    ck_assert_double_eq(pow(0, INFINITY), s21_pow(0, S21_INFINITY));
    ck_assert_double_nan(s21_pow(0, S21_NAN));
    ck_assert_double_eq(pow(NAN, 0), s21_pow(S21_NAN, 0));
    ck_assert_double_nan(s21_pow(S21_NAN, S21_NAN));
    ck_assert_double_nan(s21_pow(S21_NAN, -S21_NAN));
    ck_assert_double_nan(s21_pow(S21_NAN, -1));
    ck_assert_double_nan(s21_pow(S21_NAN, 1));
    ck_assert_double_nan(s21_pow(S21_NAN, -7));
    ck_assert_double_nan(s21_pow(S21_NAN, 7));
    ck_assert_double_nan(s21_pow(-S21_NAN, -S21_NAN));
    ck_assert_double_nan(s21_pow(-S21_NAN, S21_NAN));
    ck_assert_double_eq(pow(INFINITY, INFINITY),
                        s21_pow(S21_INFINITY, S21_INFINITY));
    ck_assert_double_eq(pow(INFINITY, -INFINITY),
                        s21_pow(S21_INFINITY, -S21_INFINITY));
    ck_assert_double_eq(pow(-INFINITY, INFINITY),
                        s21_pow(-S21_INFINITY, S21_INFINITY));
    ck_assert_double_eq(pow(-INFINITY, -INFINITY),
                        s21_pow(-S21_INFINITY, -S21_INFINITY));
    ck_assert_double_eq(pow(1, -INFINITY), s21_pow(1, -S21_INFINITY));
    ck_assert_double_eq(pow(1, NAN), s21_pow(1, S21_NAN));
    ck_assert_double_nan(s21_pow(S21_NAN, S21_INFINITY));
    ck_assert_double_nan(s21_pow(S21_INFINITY, S21_NAN));
    ck_assert_double_nan(s21_pow(S21_NAN, -S21_INFINITY));
    ck_assert_double_nan(s21_pow(-S21_INFINITY, S21_NAN));
    ck_assert_double_eq(pow(2, INFINITY), s21_pow(2, S21_INFINITY));
    ck_assert_double_eq(pow(0.5, INFINITY), s21_pow(0.5, S21_INFINITY));
    ck_assert_double_eq(pow(-2, INFINITY), s21_pow(-2, S21_INFINITY));
    ck_assert_double_eq(pow(2, -INFINITY), s21_pow(2, -S21_INFINITY));
    ck_assert_double_eq(pow(0.5, -INFINITY), s21_pow(0.5, -S21_INFINITY));
    ck_assert_double_eq(pow(-10, -INFINITY), s21_pow(-10, -S21_INFINITY));
}
END_TEST

START_TEST(s21_pow_test_4) {
  double num = 5.5;
  long double my = 0;
  long double orig = 0;

  orig = pow(num, 0);
  my = s21_pow(num, 0);
  ck_assert_float_eq(orig, my);

  orig = pow(num, -1);
  my = s21_pow(num, -1);
  ck_assert_float_eq(orig, my);

  num = 0.0;
  orig = pow(num, 1);
  my = s21_pow(num, 1);
  ck_assert_float_eq(orig, my);

  num = -0.0;
  orig = pow(num, 2);
  my = s21_pow(num, 2);
  ck_assert_float_eq(orig, my);

  num = -0.0;
  orig = pow(num, S21_INFINITY);
  my = s21_pow(num, S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = -1;
  orig = pow(num, S21_INFINITY);
  my = s21_pow(num, S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = 0.5;
  orig = pow(num, -S21_INFINITY);
  my = s21_pow(num, -S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = 2;
  orig = pow(num, S21_INFINITY);
  my = s21_pow(num, S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = 0.5;
  orig = pow(num, S21_INFINITY);
  my = s21_pow(num, S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = 2;
  orig = pow(num, S21_INFINITY);
  my = s21_pow(num, S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = 0;
  orig = pow(num, -2);
  my = s21_pow(num, -2);
  ck_assert_float_eq(orig, my);

  num = 0;
  orig = pow(num, 2);
  my = s21_pow(num, 2);
  ck_assert_float_eq(orig, my);

  num = -1;
  orig = pow(num, 1.5);
  my = s21_pow(num, 1.5);
  ck_assert_float_nan(orig);
  ck_assert_float_nan(my);

  num = -S21_INFINITY;
  orig = pow(num, -2);
  my = s21_pow(num, -2);
  ck_assert_float_eq(orig, my);

  num = -S21_INFINITY;
  orig = pow(num, 2.5);
  my = s21_pow(num, 2.5);
  ck_assert_float_eq(orig, my);

  num = -S21_INFINITY;
  orig = pow(num, 2);
  my = s21_pow(num, 2);
  ck_assert_float_eq(orig, my);

  num = S21_INFINITY;
  orig = pow(num, -1);
  my = s21_pow(num, -1);
  ck_assert_float_eq(orig, my);

  num = -S21_INFINITY;
  orig = pow(num, -2);
  my = s21_pow(num, -2);
  ck_assert_float_eq(orig, my);

  num = 0;
  orig = pow(num, S21_INFINITY);
  my = s21_pow(num, S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = -1;
  orig = pow(num, S21_INFINITY);
  my = s21_pow(num, S21_INFINITY);
  ck_assert_float_eq(orig, my);

  num = 3923984;
  orig = pow(num, 392.994);
  my = s21_pow(num, 392.994);
  ck_assert_float_eq(orig, my);

  num = -3923984;
  orig = pow(num, -4);
  my = s21_pow(num, -4);
  ck_assert_float_eq(orig, my);

  num = S21_NAN;
  orig = pow(num, 3);
  my = s21_pow(num, 3);
  ck_assert_ldouble_nan(my);
  ck_assert_ldouble_nan(orig);

  num = S21_INFINITY;
  orig = pow(num, 3);
  my = s21_pow(num, 3);
  ck_assert_double_infinite(my);
  ck_assert_double_infinite(orig);

  num = -S21_INFINITY;
  orig = pow(num, 3);
  my = s21_pow(num, 3);
  ck_assert_double_infinite(my);
  ck_assert_double_infinite(orig);

  num = 4588394;
  orig = pow(num, 3.994);
  my = s21_pow(num, 3.994);
  ck_assert_float_eq(orig, my);

  num = 4588394;
  orig = pow(num, 0);
  my = s21_pow(num, 0);
  ck_assert_float_eq(orig, my);

  num = 4588394;
  orig = pow(num, -1);
  my = s21_pow(num, -1);
  ck_assert_double_eq_tol(orig, my, 1e-06);

  num = DBL_MAX;
  orig = pow(num, -DBL_MAX);
  my = s21_pow(num, -DBL_MAX);
  ck_assert_float_eq(orig, my);

  num = -1;
  orig = pow(num, -1);
  my = s21_pow(num, -1);
  ck_assert_float_eq(orig, my);

  num = +1;
  orig = pow(num, -1);
  my = s21_pow(num, -1);
  ck_assert_float_eq(orig, my);

  num = -1;
  orig = pow(num, -1);
  my = s21_pow(num, -1);
  ck_assert_float_eq(orig, my);

  num = -9;
  orig = pow(num, -19);
  my = s21_pow(num, -19);
  ck_assert_float_eq(orig, my);

  num = -S21_INFINITY;
  orig = pow(num, -39);
  my = s21_pow(num, -39);
  ck_assert_float_eq(orig, my);

  num = (0);
  orig = pow(num, -S21_INFINITY);
  my = s21_pow(num, -S21_INFINITY);
  ck_assert_double_infinite(my);
  ck_assert_double_infinite(orig);

  num = S21_INFINITY;
  orig = pow(num, 39);
  my = s21_pow(num, 39);
  ck_assert_double_infinite(my);
  ck_assert_double_infinite(orig);

  num = S21_NAN;
  orig = pow(num, 39);
  my = s21_pow(num, 39);
  ck_assert_ldouble_nan(my);
  ck_assert_ldouble_nan(orig);

  num = S21_NAN;
  orig = pow(num, 0);
  my = s21_pow(num, 0);
  ck_assert_float_eq(orig, my);
}
END_TEST


START_TEST(s21_log_test_1) {
    for (double k = 1; k < 100; k += 13.2) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_log_test_2) {
    for (double k = 0.1; k < 4; k += 0.24) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_log_test_3) {
    for (double k = 0.1; k < 10000; k += 123) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_log_test_4) {
    for (double k = 0.000005; k < 1; k *= 5) {
        double a = s21_log(k);
        double b = log(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_log_test_5) {
    ck_assert_ldouble_nan(s21_log(-S21_NAN));
    ck_assert_ldouble_nan(log(-NAN));
    ck_assert_ldouble_nan(s21_log(S21_NAN));
    ck_assert_ldouble_nan(log(NAN));
    ck_assert_double_nan(s21_log(-3));
    ck_assert_double_eq(log(INFINITY), s21_log(S21_INFINITY));
    ck_assert_double_nan(s21_log(-S21_INFINITY));
    ck_assert_double_eq(log(1), s21_log(1));
    ck_assert_double_eq(log(0), s21_log(0));
    ck_assert_double_eq(log(S21_M_E), s21_log(S21_M_E));
    ck_assert_double_eq_tol(log(2), s21_log(2), 1e-6);
}
END_TEST

START_TEST(s21_sin_test_1) {
    for (int R = 20; R >= -20; R -= 4) {
        for (double k = 2 * S21_PI; k > -2 * S21_PI; k -= S21_PI / 17) {
            ck_assert_double_eq_tol(sin(k + R * S21_PI),
                                    s21_sin(k + R * S21_PI), 1e-6);
        }
    }
}
END_TEST

START_TEST(s21_sin_test_2) {
    ck_assert_double_nan(s21_sin(S21_NAN));
    ck_assert_double_nan(s21_sin(S21_INFINITY));
    ck_assert_double_nan(s21_sin(-S21_INFINITY));
    ck_assert_double_eq_tol(s21_sin(-S21_PI), sin(-S21_PI), 1e-06);
    ck_assert_double_eq_tol(s21_sin(-3 * M_PI), sin(-3 * M_PI), 1e-06);
    ck_assert_double_eq_tol(s21_sin(-2 * M_PI), sin(-2 * M_PI), 1e-06);
    ck_assert_double_eq_tol(s21_sin(2 * M_PI), sin(2 * M_PI), 1e-06);
    ck_assert_double_eq_tol(s21_sin(3 * M_PI / 2), sin(3 * M_PI / 2), 1e-06);
    ck_assert_double_eq_tol(s21_sin(M_PI / 2), sin(M_PI / 2), 1e-06);
    ck_assert_double_eq_tol(s21_sin(M_PI / 3), sin(M_PI / 3), 1e-06);
    ck_assert_double_eq_tol(s21_sin(M_PI / 4), sin(M_PI / 4), 1e-06);
    ck_assert_double_eq_tol(s21_sin(M_PI / 6), sin(M_PI / 6), 1e-06);
    ck_assert_double_eq_tol(s21_sin(1), sin(1), 1e-06);
    ck_assert_ldouble_nan(sinl(NAN));
    ck_assert_ldouble_nan(s21_sin(NAN));
    ck_assert_ldouble_nan(sinl(INFINITY));
    ck_assert_ldouble_nan(s21_sin(INFINITY));
    ck_assert_ldouble_nan(sinl(-INFINITY));
    ck_assert_ldouble_nan(s21_sin(-INFINITY));
    ck_assert_double_eq_tol(s21_sin(0), sinl(0), 1e-06);
}
END_TEST

START_TEST(s21_cos_test_1) {
    for (int R = 20; R >= -20; R -= 4) {
        for (double k = 2 * S21_PI; k > -2 * S21_PI; k -= S21_PI / 17) {
            ck_assert_double_eq_tol(cos(k + R * S21_PI),
                                    s21_cos(k + R * S21_PI), 1e-6);
        }
    }
}
END_TEST

START_TEST(s21_tan_test_1) {
    for (int R = 20; R >= -20; R -= 4) {
        for (double k = 2 * S21_PI; k > -2 * S21_PI; k -= S21_PI / 9) {
            ck_assert_double_eq_tol(tan(k + R * S21_PI),
                                    s21_tan(k + R * S21_PI), 1e-6);
        }
    }
}
END_TEST

START_TEST(s21_sin_cos_tan_test) {
    ck_assert_double_nan(s21_sin(S21_NAN));
    ck_assert_double_nan(s21_cos(S21_NAN));
    ck_assert_double_nan(s21_tan(S21_NAN));
    ck_assert_double_nan(s21_sin(S21_INFINITY));
    ck_assert_double_nan(s21_cos(S21_INFINITY));
    ck_assert_double_nan(s21_tan(S21_INFINITY));
    ck_assert_double_nan(s21_sin(-S21_INFINITY));
    ck_assert_double_nan(s21_cos(-S21_INFINITY));
    ck_assert_double_nan(s21_tan(-S21_INFINITY));
}
END_TEST

START_TEST(s21_exp_test_1) {
    for (double k = -21; k < 21; k += 1) {
        double a = s21_exp(k);
        double b = exp(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_exp_test_2) {
    for (double k = -15; k < 15; k += 0.123) {
        double a = s21_exp(k);
        double b = exp(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_exp_test_3) {
    for (double k = -5; k < 5; k += 0.00573) {
        double a = s21_exp(k);
        double b = exp(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_exp_test_4) {
    ck_assert_double_nan(s21_exp(-S21_NAN));
    ck_assert_double_nan(s21_exp(S21_NAN));
    ck_assert_double_eq(exp(INFINITY), s21_exp(S21_INFINITY));
    ck_assert_double_eq(exp(-INFINITY), s21_exp(-S21_INFINITY));
    ck_assert_double_eq(exp(0), s21_exp(0));
    ck_assert_double_eq_tol(exp(1), s21_exp(1), 1e-06);
}
END_TEST

START_TEST(s21_asin_test_1) {
    for (float k = -1; k <= 0; k += 0.0205) {
        double a = s21_asin(k);
        double b = asin(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
    ck_assert_double_eq_tol(asin(1), s21_asin(1), 1e-6);
}
END_TEST

START_TEST(s21_asin_test_2) {
    for (float k = -1; k <= 0; k += 0.1) {
        double a = s21_asin(k);
        double b = asin(k);
        ck_assert_double_eq_tol(a, b, 1e-7);
    }
}
END_TEST

START_TEST(s21_acos_test_1) {
    for (float k = -1; k <= 1; k += 0.1) {
        double a = s21_acos(k);
        double b = acos(k);
        ck_assert_double_eq_tol(a, b, 1e-7);
    }
}
END_TEST

START_TEST(s21_acos_test_2) {
    for (float k = -1; k <= 1; k += 0.1) {
        double a = s21_acos(k);
        double b = acos(k);
        ck_assert_double_eq_tol(a, b, 1e-7);
    }
}
END_TEST

START_TEST(s21_atan_test_1) {
    for (double k = 1; k <= 10; k += 1) {
        long double a = s21_atan(k);
        double b = atan(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_sqrt_test_1) {
    for (double k = 0; k < 21; k += 3) {
        double a = s21_sqrt(k);
        double b = sqrt(k);
        ck_assert_double_eq_tol(a, b, 1e-6);
    }
}
END_TEST

START_TEST(s21_sqrt_test_2) {
    ck_assert_double_nan(s21_sqrt(S21_NAN));
    ck_assert_double_nan(sqrt(NAN));
    ck_assert_double_nan(s21_sqrt(-S21_NAN));
    ck_assert_double_nan(sqrt(-NAN));
    ck_assert_double_eq(s21_sqrt(S21_INFINITY), sqrt(INFINITY));
    ck_assert_double_nan(s21_sqrt(-S21_INFINITY));
    ck_assert_double_nan(sqrt(-INFINITY));
    ck_assert_double_nan(s21_sqrt(-5.5));
    ck_assert_double_nan(sqrt(-5.5));
    ck_assert_double_eq_tol(s21_sqrt(1000), sqrt(1000), 1e-7);
}
END_TEST

START_TEST(s21_atan_test_2) {
    double a = 12;
    ck_assert_double_eq_tol(atan(a), s21_atan(a), 1e-7);
    a = 0.4;
    ck_assert_double_eq_tol(atan(a), s21_atan(a), 1e-7);
    a = -0.333;
    ck_assert_double_eq_tol(atan(a), s21_atan(a), 1e-7);
    a = 55;
    ck_assert_double_eq_tol(atan(a), s21_atan(a), 1e-7);
    a = 13.54;
    ck_assert_double_eq_tol(atan(a), s21_atan(a), 1e-7);
    a = S21_M_E;
    ck_assert_double_eq_tol(atan(a), s21_atan(a), 1e-7);
}
END_TEST

START_TEST(s21_asin_acos_atan_test) {
    ck_assert_double_nan(s21_asin(S21_NAN));
    ck_assert_double_nan(s21_acos(S21_NAN));
    ck_assert_double_nan(s21_atan(S21_NAN));
    ck_assert_double_nan(s21_asin(S21_INFINITY));
    ck_assert_double_nan(s21_acos(S21_INFINITY));
    ck_assert_double_eq(atan(INFINITY), s21_atan(S21_INFINITY));
    ck_assert_double_nan(s21_asin(-S21_INFINITY));
    ck_assert_double_nan(s21_acos(-S21_INFINITY));
    ck_assert_double_eq(atan(-INFINITY), atan(-S21_INFINITY));
    ck_assert_double_nan(s21_asin(5));
    ck_assert_double_nan(s21_acos(6));
    ck_assert_double_nan(s21_asin(-8));
    ck_assert_double_nan(s21_acos(-4));
}
END_TEST

START_TEST(s21_abs_test) {
    ck_assert_double_eq(abs(-7), s21_abs(-7));
    ck_assert_double_eq(abs(-98), s21_abs(-98));
    ck_assert_double_eq(abs(123), s21_abs(123));
    ck_assert_double_eq(abs(10009), s21_abs(10009));
    ck_assert_double_eq(abs(-10009), s21_abs(-10009));
}
END_TEST

START_TEST(s21_fabs_test) {
    ck_assert_double_eq(fabs(INFINITY), s21_fabs(S21_INFINITY));
    ck_assert_double_eq(fabs(-INFINITY), s21_fabs(-S21_INFINITY));
    ck_assert_double_nan(fabs(NAN));
    ck_assert_double_nan(s21_fabs(S21_NAN));
    ck_assert_double_nan(s21_fabs(-S21_NAN));
    ck_assert_double_eq(fabs(-7.0), s21_fabs(-7.0));
    ck_assert_double_eq(fabs(-98.1), s21_fabs(-98.1));
    ck_assert_double_eq(fabs(123.02), s21_fabs(123.02));
    ck_assert_double_eq(fabs(10009.0), s21_fabs(10009.0));
    ck_assert_double_eq(fabs(-10009.555), s21_fabs(-10009.555));
    ck_assert_double_eq(fabs(-0.10009), s21_fabs(-0.10009));
    ck_assert_double_eq(fabs(-1e23), s21_fabs(-1e23));
}
END_TEST

START_TEST(s21_floor_test_1) {
    ck_assert_double_eq(floor(INFINITY), s21_floor(S21_INFINITY));
    ck_assert_double_eq(floor(LLONG_MAX), s21_floor(LLONG_MAX));
    ck_assert_double_eq(floor(LLONG_MIN), s21_floor(LLONG_MIN));
    ck_assert_double_eq(floor(-INFINITY), s21_floor(-S21_INFINITY));
    ck_assert_double_nan(floor(-NAN));
    ck_assert_double_nan(s21_floor(-S21_NAN));
    ck_assert_double_nan(floor(NAN));
    ck_assert_double_nan(s21_floor(S21_NAN));
    ck_assert_double_eq(floor(-7.0), s21_floor(-7.0));
    ck_assert_double_eq(floor(-98.1), s21_floor(-98.1));
    ck_assert_double_eq(floor(123.02), s21_floor(123.02));
    ck_assert_double_eq(floor(10009.00123), s21_floor(10009.00123));
    ck_assert_double_eq(floor(-10009.555), s21_floor(-10009.555));
    ck_assert_double_eq(floor(-0.10009), s21_floor(-0.10009));
    ck_assert_double_eq(floor(-1e-23), s21_floor(-1e-23));
    ck_assert_double_eq(floor(100091234.5), s21_floor(100091234.5));
}
END_TEST

START_TEST(s21_floor_test_2) {
  double num = 2.5;
  long double orig = 0;
  long double my = 0;

  orig = floor(num);
  my = s21_floor(num);
  ck_assert_ldouble_eq(orig, my);

  num = 1839.9349939;
  orig = floor(num);
  my = s21_floor(num);
  ck_assert_ldouble_eq(orig, my);

  num = -1839.9939293;
  orig = floor(num);
  my = s21_floor(num);
  ck_assert_ldouble_eq(orig, my);

  num = 2.5;
  orig = floor(num);
  my = s21_floor(num);
  ck_assert_ldouble_eq(orig, my);

  num = -0.99932038848;
  orig = floor(num);
  my = s21_floor(num);
  ck_assert_ldouble_eq(orig, my);

  num = +0.99;
  orig = floor(num);
  my = s21_floor(num);
  ck_assert_ldouble_eq(orig, my);

  num = S21_NAN;
  orig = floor(num);
  my = s21_floor(num);
  ck_assert_ldouble_nan(orig);
  ck_assert_ldouble_nan(my);

  num = S21_INFINITY;
  orig = floor(num);
  my = s21_floor(num);
  ck_assert_double_infinite(orig);
  ck_assert_double_infinite(my);
}
END_TEST

START_TEST(s21_ceil_test_1) {
    ck_assert_double_eq(ceil(INFINITY), s21_ceil(S21_INFINITY));
    ck_assert_double_eq(ceil(-INFINITY), s21_ceil(-S21_INFINITY));
    ck_assert_double_nan(ceil(NAN));
    ck_assert_double_nan(s21_ceil(S21_NAN));
    ck_assert_double_eq(ceil(-7.0), s21_ceil(-7.0));
    ck_assert_double_eq(ceil(-98.1), s21_ceil(-98.1));
    ck_assert_double_eq(ceil(123.02), s21_ceil(123.02));
    ck_assert_double_eq(ceil(10009.00123), s21_ceil(10009.00123));
    ck_assert_double_eq(ceil(-10009.555), s21_ceil(-10009.555));
    ck_assert_double_eq(ceil(-0.10009), s21_ceil(-0.10009));
    ck_assert_double_eq(ceil(-1e-23), s21_ceil(-1e-23));
}
END_TEST

START_TEST(s21_ceil_test_2) {
  double num = 2.5;
  long double orig = 0;
  long double my = 0;

  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_ldouble_eq(orig, my);

  num = 1839.9349939;
  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_ldouble_eq(orig, my);

  num = -1839.9939293;
  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_ldouble_eq(orig, my);

  num = 2.5;
  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_ldouble_eq(orig, my);

  num = -0.99932038848;
  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_ldouble_eq(orig, my);

  num = +0.99;
  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_ldouble_eq(orig, my);

  num = S21_NAN;
  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_ldouble_nan(orig);
  ck_assert_ldouble_nan(my);

  num = S21_INFINITY;
  orig = ceil(num);
  my = s21_ceil(num);
  ck_assert_double_infinite(orig);
  ck_assert_double_infinite(my);
}
END_TEST


START_TEST(s21_fmod_test_1) {
    ck_assert_double_nan(fmod(1, 0));
    ck_assert_double_nan(s21_fmod(1, 0));
    ck_assert_double_eq(fmod(0, -1), s21_fmod(0, -1));
    ck_assert_double_eq(fmod(0, 1), s21_fmod(0, 1));
    ck_assert_double_nan(fmod(INFINITY, -1));
    ck_assert_double_nan(s21_fmod(INFINITY, -1));
    ck_assert_double_eq(fmod(-1, -INFINITY), s21_fmod(-1, -S21_INFINITY));
    ck_assert_double_eq(fmod(0, INFINITY), s21_fmod(0, S21_INFINITY));
    ck_assert_double_nan(s21_fmod(0, S21_NAN));
    ck_assert_double_nan(fmod(0, NAN));
    ck_assert_double_nan(s21_fmod(S21_NAN, S21_NAN));
    ck_assert_double_nan(fmod(NAN, NAN));
    ck_assert_double_nan(s21_fmod(S21_NAN, S21_INFINITY));
    ck_assert_double_nan(s21_fmod(S21_INFINITY, S21_NAN));
    ck_assert_double_nan(s21_fmod(S21_NAN, -S21_INFINITY));
    ck_assert_double_nan(s21_fmod(-S21_INFINITY, S21_NAN));
    ck_assert_double_nan(fmod(NAN, INFINITY));
    ck_assert_double_nan(fmod(INFINITY, NAN));
    ck_assert_double_nan(fmod(NAN, -INFINITY));
    ck_assert_double_nan(fmod(-INFINITY, NAN));
}
END_TEST

START_TEST(s21_fmod_test_2) {
    for (double a = -1500; a < 1500; a += 123) {
        for (double b = -12; b < 12; b += 1.25) {
            ck_assert_double_eq(fmod(a, b), s21_fmod(a, b));
            ck_assert_double_eq(fmod(b, a), s21_fmod(b, a));
        }
    }
}
END_TEST

START_TEST(s21_fmod_test_3) {
  double num = 0;
  double num1 = 0;
  double orig = 0;
  double my = 0;

  num = 51515.5;
  num1 = 98;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = 50;
  num1 = 98;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = 0;
  num1 = 98;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = -51840;
  num1 = 98;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = -21561860;
  num1 = -9800;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = 21561860;
  num1 = -9800;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = 0;
  num1 = 15151;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = -1510;
  num1 = 15151;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = 3;
  num1 = 0;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_nan(orig);
  ck_assert_float_nan(my);

  num = 3;
  num1 = S21_INFINITY;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_eq(orig, my);

  num = 3;
  num1 = S21_NAN;
  my = s21_fmod(num, num1);
  orig = fmod(num, num1);
  ck_assert_float_nan(orig);
  ck_assert_float_nan(my);
}
END_TEST

Suite *s21_math_suite(void) {
    Suite *suite;

    suite = suite_create("s21_math");
    TCase *tcase_core = tcase_create("Core");

    tcase_add_test(tcase_core, s21_pow_test_1);
    tcase_add_test(tcase_core, s21_pow_test_2);
    tcase_add_test(tcase_core, s21_pow_test_3);
    tcase_add_test(tcase_core, s21_pow_test_4);
    tcase_add_test(tcase_core, s21_log_test_1);
    tcase_add_test(tcase_core, s21_log_test_2);
    tcase_add_test(tcase_core, s21_log_test_3);
    tcase_add_test(tcase_core, s21_log_test_4);
    tcase_add_test(tcase_core, s21_log_test_5);
    tcase_add_test(tcase_core, s21_sin_test_1);
    tcase_add_test(tcase_core, s21_sin_test_2);
    tcase_add_test(tcase_core, s21_cos_test_1);
    tcase_add_test(tcase_core, s21_tan_test_1);
    tcase_add_test(tcase_core, s21_sin_cos_tan_test);
    tcase_add_test(tcase_core, s21_exp_test_1);
    tcase_add_test(tcase_core, s21_exp_test_2);
    tcase_add_test(tcase_core, s21_exp_test_3);
    tcase_add_test(tcase_core, s21_exp_test_4);
    tcase_add_test(tcase_core, s21_asin_test_1);
    tcase_add_test(tcase_core, s21_asin_test_2);
    tcase_add_test(tcase_core, s21_acos_test_1);
    tcase_add_test(tcase_core, s21_acos_test_2);
    tcase_add_test(tcase_core, s21_atan_test_1);
    tcase_add_test(tcase_core, s21_atan_test_2);
    tcase_add_test(tcase_core, s21_asin_acos_atan_test);
    tcase_add_test(tcase_core, s21_sqrt_test_1);
    tcase_add_test(tcase_core, s21_sqrt_test_2);
    tcase_add_test(tcase_core, s21_abs_test);
    tcase_add_test(tcase_core, s21_fabs_test);
    tcase_add_test(tcase_core, s21_floor_test_1);
    tcase_add_test(tcase_core, s21_floor_test_2);
    tcase_add_test(tcase_core, s21_ceil_test_1);
    tcase_add_test(tcase_core, s21_ceil_test_2);
    tcase_add_test(tcase_core, s21_fmod_test_1);
    tcase_add_test(tcase_core, s21_fmod_test_2);
    tcase_add_test(tcase_core, s21_fmod_test_3);
    suite_add_tcase(suite, tcase_core);

    return suite;
}

int main(void) {
    Suite *suite = s21_math_suite();
    SRunner *suite_runner = srunner_create(suite);
    srunner_run_all(suite_runner, CK_VERBOSE);
    int failed_count = srunner_ntests_failed(suite_runner);
    srunner_free(suite_runner);
    return (failed_count == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}
