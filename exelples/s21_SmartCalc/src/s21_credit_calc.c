#include "./s21_smart_calc.h"

/**
 * @brief function for calculating credit parameters
 * and return the monthly payment, interest and the entire amount
 * @param credit_sum
 * @param credit_duration_value
 * @param credit_duration_type
 * @param credit_percent
 * @param credit_type
 * @param m_1 monthly payment 1
 * @param m_2 monthly payment 1
 * @param p_1 interest
 * @param t_1 entire amount
 * @return double
 */
double s21_credit_calc(double credit_sum, double credit_duration_value,
                       double credit_duration_type, double credit_percent, double credit_type,
                       double *m_1, double *m_2, double *p_1, double *t_1) {
    double res_month_0 = 0;
    double res_month_1 = 0;
    double res_total = 0;
    double res_total_percent = 0;

    if (credit_type == 1) {
        if (credit_duration_type == 1) {
            credit_duration_value *= 12;
        }
        credit_percent /= 100 * 12;

        res_month_1 = credit_sum * (credit_percent / (1 - pow((1 + credit_percent), \
                                    credit_duration_value * -1)));
        res_month_1 = round(res_month_1 * 100) / 100;
        res_total = res_month_1 * credit_duration_value;
        res_total_percent = res_total - credit_sum;

    } else if (credit_type == 2) {
        if (credit_duration_type == 1) {
            credit_duration_value *= 12;
        }
        credit_percent /= 100;

        double res_tmp = credit_sum / credit_duration_value;
        res_month_1 = res_tmp + credit_sum * credit_percent / 12;
        res_month_0 = round(res_month_1 * 100) / 100;

        double credit_sum_tmp = credit_sum - res_tmp;
        res_total = 0;
        res_total += res_month_1;

        for (int i = 1; i < credit_duration_value; i++) {
            res_tmp = credit_sum_tmp / (credit_duration_value - i);
            res_month_1 = credit_sum / credit_duration_value + credit_sum_tmp * credit_percent / 12;
            credit_sum_tmp = credit_sum_tmp - res_tmp;
            res_total += res_month_1;
        }
        res_total_percent = res_total - credit_sum;
    }

    *m_1 = round(res_month_0 * 100) / 100;
    *m_2 = round(res_month_1 * 100) / 100;
    *p_1 = round(res_total_percent * 100) / 100;
    *t_1 = round(res_total * 100) / 100;

    return 33.0;
}





// double s21_deposit_calc(double credit_sum, double credit_duration_value,
//                         double credit_duration_type, double credit_percent, double credit_type,
//                         double *m_1, double *m_2, double *p_1, double *t_1) {
// // double s21_deposit_calc(char *input) {
// //     double credit_sum;
// //     double credit_duration_value;
// //     int credit_duration_type;
// //     double credit_percent;
// //     int credit_type;

//     double res_month_0 = 0;
//     double res_month_1 = 0;
//     double res_total = 0;
//     double res_total_percent = 0;

//     if (credit_type == 1) {
//         if (credit_duration_type == 1){
//             credit_duration_value *= 12;
//         }
//         credit_percent /= 100*12;

//         res_month_1 = credit_sum * (credit_percent /
//            (1 - pow((1 + credit_percent), credit_duration_value * -1)) );
//         res_month_1 = round(res_month_1 * 100) / 100;
//         res_total = res_month_1 * credit_duration_value;
//         res_total_percent = res_total - credit_sum;

//     } else if (credit_type == 2) {
//         if (credit_duration_type == 1){
//             credit_duration_value *= 12;
//         }
//         credit_percent /= 100;

//         double res_tmp = credit_sum / credit_duration_value;
//         res_month_1 = res_tmp + credit_sum * credit_percent / 12;
//         res_month_0 = round(res_month_1 * 100) / 100;

//         double credit_sum_tmp = credit_sum - res_tmp;
//         res_total = 0;
//         res_total += res_month_1;

//         for (int i = 1; i < credit_duration_value; i++) {
//             res_tmp = credit_sum_tmp / (credit_duration_value - i);
//             res_month_1 = credit_sum  / credit_duration_value + credit_sum_tmp * credit_percent / 12;
//             credit_sum_tmp = credit_sum_tmp - res_tmp;
//             res_total += res_month_1;
//         }
//         res_total_percent = res_total - credit_sum;
//     }

// // if (credit_type == 2) {
// //     printf("\nsum by month:      %.2f ... %.2f\n", res_month_0, res_month_1);
// // } else {
// //     printf("\nsum by month:      %.2f\n", res_month_1);
// // }
// // printf("total percent:     %.2f\n", res_total_percent);
// // printf("total sum after: %.2f\n", res_total);

//     *m_1 = round(res_month_0 * 100) / 100;
//     *m_2 = round(res_month_1 * 100) / 100;
//     *p_1 = round(res_total_percent * 100) / 100;
//     *t_1 = round(res_total * 100) / 100;

//     return 33.0;
// }

// int main() {
//     double credit_sum = 150500.0;
//     double credit_duration_value = 2.0;
//     int credit_duration_type = 2;
//     double credit_percent = 5.0;
//     int credit_type = 2;

// printf("-----====== credit calc ======-----\n\n");

//     s21_credit_calc(credit_sum, credit_duration_value, credit_duration_type, credit_percent, credit_type);

// printf("\n-----====== credit calc ======-----\n");
//     return 0;

// }
