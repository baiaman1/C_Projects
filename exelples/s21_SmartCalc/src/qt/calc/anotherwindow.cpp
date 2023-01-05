#include "anotherwindow.h"
#include "ui_anotherwindow.h"

#include <QStatusBar>

double line_len_0 = 256;

AnotherWindow::AnotherWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnotherWindow) {
    ui->setupUi(this);
}

AnotherWindow::~AnotherWindow() {
    delete ui;
}


//void AnotherWindow::on_pushButton_clicked()
void AnotherWindow::on_button_show_1_clicked() {
    this->close();
    emit firstWindow();
}


void AnotherWindow::on_button_count_clicked() {

    if (ui->credit_total_value->text() != '0' && ui->credit_duration_value->text() != '0' && ui->credit_percent_value->text() != '0') {
        double credit_type = 1;
        if (ui->credit_type_diff->isChecked() == true) {
            credit_type = 2;
        }

        double dur_type = 1;
        if (ui->credit_duration->currentText() == "месяцев") {
            dur_type = 2;
        }

        double m_0, m_1, p_1, t_1;
        double new_res_0 = s21_credit_calc(ui->credit_total_value->text().toDouble(), ui->credit_duration_value->text().toDouble(), \
                            dur_type, ui->credit_percent_value->text().toDouble(), credit_type, &m_0, &m_1, &p_1, &t_1);

        char new_tmp1[256];
        char new_tmp2[256];
        char new_tmp3[256];
        char new_tmp4[256];
        sprintf(new_tmp1,"%.2f", m_1);
        sprintf(new_tmp2,"%.2f ... %.2f", m_0, m_1);
        sprintf(new_tmp3,"%.2f", p_1);
        sprintf(new_tmp4,"%.2f", t_1);

        if (credit_type == 1) {
            ui->result_month->setText(new_tmp1);
        } else {
            ui->result_month->setText(new_tmp2);
        }
        ui->result_percent->setText(new_tmp3);
        ui->result_total->setText(new_tmp4);


    } else {
        ui->result_total->setText("nothing");
    }

}



