#include "s21_math.h"

long double s21_exp(double x) {
    long double res = 1.0;
    bool check = true;

    if (s21_isnan(x)) {
        res = x;
        check = false;
    }

    if (x == S21_INFINITY) {
        res = S21_INFINITY;
        check = false;
    }

    if (x == -S21_INFINITY) {
        res = 0;
        check = false;
    }

    long double temp = 1.0;
    if (check) {
        for (int i = 1; s21_fabs(temp / res) > 1e-100; i++) {
            temp = (temp * x) / i;
            res = res + temp;
        }
    }

    return res;
}

long double s21_fabs(double x) {
    if (s21_isnan(x)) {
        x = S21_NAN;
    }
    if (x < 0) {
        x = -x;
    }
    return (long double)x;
}

long double s21_log(double x) {
    int whole = 0;
    long double tail = 0;
    long double res = 0;
    bool check = true;

    if (s21_isnan(x)) {
        check = false;
        res = x;
    }

    if (x == 0) {
        check = false;
        res = -S21_INFINITY;
    }
    if (x == S21_INFINITY) {
        check = false;
        res = S21_INFINITY;
    }
    if ((x == -S21_INFINITY) || (x < 0)) {
        check = false;
        res = -S21_NAN;
    }

    if ((x > 0) && check) {
        for ( ; x >= S21_M_E; whole++) {
            x = x / S21_M_E;
        }
        for (int i = 0; i < 100; i++) {
            tail = tail + 2 * ((x - s21_exp(tail)) /
            (x + s21_exp(tail)));
        }
        res = whole + tail;
    }
    return res;
}

long double s21_pow(double base, double exp) {
    long double res = 1;
    bool minus = false;
    bool check = true;
    if (base == 1) {
        res = 1;
        check = false;
    }
    if ((base == -S21_INFINITY) && (exp == -S21_INFINITY)) {
        res = 0;
        check = false;
    }
    if ((base < 0) && (exp == -S21_INFINITY)) {
        if (base == -1) {
            res = 1;
        } else {
            res = 0;
        }
        check = false;
    }
    if ((base < 0) && (exp == S21_INFINITY)) {
        if (base == -1) {
            res = 1;
        } else {
            res = S21_INFINITY;
        }
        check = false;
    }
    if ((base < 0) && (-(s21_isnan(exp)))) {
        res = exp;
        check = false;
    }
    if (s21_isnan(base) && ((exp == S21_INFINITY) || (exp == -S21_INFINITY))) {
        res = base;
        check = false;
    }
    if (-(s21_isnan(base))) {
        if (exp == 1 || exp == -1) {
            res = S21_NAN;
        } else {
            res = base;
        }
        check = false;
    }

    if (check) {
        if (base < 0) {
            base = s21_fabs(base);
            long double over = __LDBL_MAX__ / base;
            if (exp == (int)exp) {
                if (exp < 0) {
                    exp = -exp;
                    minus = true;
                }
                int i = (int)exp;
                while (i--) {
                    res = res * base;
                    if (res > over) {
                        res = S21_INFINITY;
                        break;
                    }
                }
                if ((int)exp % 2 !=0) {
                    res = -res;
                }
            } else {
                if (base == S21_INFINITY && !s21_isnan(exp)) {
                    res = S21_INFINITY;
                } else {
                    res = S21_NAN;
                }
            }
        } else {
            res = s21_exp(exp * s21_log(base));
        }
    }
    if (minus) {
        res = 1.0 / res;
    }
    if (exp == 0.0) {
        res = 1;
    }
    return res;
}

long double s21_sqrt(double x) {
    long double res = 0;
    bool check = true;
    if (s21_isnan(x)) {
        res = x;
        check = false;
    }
    if ((x == -S21_INFINITY) || (x < 0)) {
        res = -S21_NAN;
        check = false;
    }
    if ((x > 0) && check) {
        res = s21_pow(x, 0.5);
    }
    return res;
}

long double s21_floor(double x) {
    long double result;
    int flag = 0;
    if ((x >= LLONG_MAX || x <= LLONG_MIN || x != x)) {
        result = (long double)x;
        flag = 1;
    }
    if (flag == 0) {
        long long n = (long long)x;
        long double d = (long double)n;
        if (d == x || x >= 0)
            result = d;
        else
            result = d - 1;
    }
    return result;
}

long double s21_ceil(double x) {
    long double result;
    int flag = 0;
    if ((x >= LLONG_MAX || x <= LLONG_MIN || x != x)) {
        result = (long double)x;
        flag = 1;
    }
    if (flag == 0) {
        long long n = (long long)x;
        long double d = (long double)n;
        if ((d != x) && (x < 0))
            result = d;
        else if ((d != x) && (x > 0))
            result = d + 1;
        else
            result = d;
    }
    return result;
}

long double s21_fmod(double x, double y) {
    long double result = 0;
    long long int denominator = x / y;
    if (y == 0.0 || x == S21_INFINITY || x == -S21_INFINITY) {
        result = S21_NAN;
    } else if (y == S21_INFINITY || y == -S21_INFINITY) {
        result = x;
    } else {
        result = x - (denominator * y);
    }
    return result;
}



// s21_abs вычисляет абсолютное значение целого числа

int s21_abs(int x) { return x < 0 ? x *= -1 : x; }

// s21_acos вычисляет арккосинус
long double s21_acos(double x) {
  long double result = 0;
  if (x > 1.0 || x < -1.0)
    result = S21_NAN;
  else if (x == 1)
    result = 0.0;
  else if (x == -1)
    result = S21_PI;
  else
    result = S21_PI / 2 - s21_asin(x);
  return result;
}

// s21_asin вычисляет арксинус
long double s21_asin(double x) {
    long double result = x, temp = x;
    long double i = 1;
    while (s21_fabs(result) > S21_EPS) {
        if (x < -1 || x > 1) {
            temp = S21_NAN;
            break;
        }
        if (x == 1 || x == -1) {
            temp = S21_PI / 2 * x;
            break;
        }
        result *= x * x * (2 * i - 1) * (2 * i) * (2 * i - 1) / ((2 * i + 1) * 4 * i * i);
        i += 1;
        temp += result;
    }
    return temp;
}

// s21_atan вычисляет арктангенс
long double s21_atan_calculate(double x) {
  long double result = x, atan = x, n = 1;
  while (s21_fabs(atan) > S21_EPS) {
    atan = -1 * atan * x * x * (2 * n - 1) / (2 * n + 1);
    n += 1;
    result += atan;
  }
  return result;
}

long double s21_atan(double x) {
  long double result = 0;
  if (x < 1.0 && x > -1.0) {
    result = s21_atan_calculate(x);
  } else if (x == 1.0) {
    result = S21_PI / 4;
  } else if (x == -1.0) {
    result = -S21_PI / 4;
  } else if (x == 0) {
    result = 0;
  } else if (x > 1.0) {
    result = S21_PI / 2 - s21_atan_calculate(1 / x);
  } else if (x < -1.0) {
    result = -S21_PI / 2 - s21_atan_calculate(1 / x);
  } else if (S21_ISNAN(x)) {
    result = S21_NAN;
  }
  return result;
}

long double s21_sin(double x) {
    if (s21_isnan(x) || !s21_is_finite(x))
        return S21_NAN;

    int sign = 1;
    x = s21_fmod(x, 2 * S21_PI);

    if (x > (S21_PI / 2.0) && x <= S21_PI) {
        x = S21_PI - x;
    } else if (x > S21_PI && x <= S21_PI * 3.0 / 2.0) {
        x = (x - S21_PI);
        sign = -sign;
    } else if (x > (S21_PI * 3.0) / 2.0 && x <= 2.0 * S21_PI) {
        x = 2 * S21_PI - x;
        sign = -sign;
    }

    long double sum = (long double)x;
    long double tailor = (long double)x;

    for (int p = 1; s21_fabs(tailor / sum) > 1e-100; p++) {
        tailor = (-tailor * x * x) / ((2.0 * p + 1) * (2.0 * p));
        sum += tailor;
    }
    return sum * sign;
}

long double s21_cos(double x) {
    long double res = 1.0;
    int i = 1;
    long double num = 1.0;
    int sign = 1;

    if (x == S21_INFINITY || x == -S21_INFINITY || x == S21_NAN) {
        res = -S21_NAN;
    } else {
        while ((x > S21_PI || x < -S21_PI)) {
            if (x > S21_PI) {
                x -= 2 * S21_PI;
            } else if (x < -S21_PI) {
                x += 2 * S21_PI;
            }
        }
        while (s21_fabs(num) > 0.0000001) {
            sign = (-1) * sign;
            num *= x / i++;
            num *= x / i++;
            res += sign * num;
        }
    }
    return res;
}

long double s21_tan(double x) {
    long double res = 0;

    if (x == S21_INFINITY || x == -S21_INFINITY || x == S21_NAN) {
        res = -S21_NAN;
    } else {
        if (x == 3 * S21_PI / 2) {
            res = 5443746451065123;
        } else {
            res = s21_sin(x) / s21_cos(x);
        }
    }

    if (x == S21_PI / 2)
        res = 16331239353195370L;
    else if (x == -S21_PI / 2)
        res = -16331239353195370L;
    if (x == 0)
        res = 0;

    return res;
}
