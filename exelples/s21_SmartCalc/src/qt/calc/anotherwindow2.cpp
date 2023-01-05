#include "anotherwindow2.h"
#include "ui_anotherwindow2.h"

AnotherWindow2::AnotherWindow2(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::AnotherWindow2) {
    ui->setupUi(this);

//===============
    model = new QStandardItemModel(1, 3, this);
    ui->tableView->setModel(model);
    QModelIndex index;
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            index = model->index(row, col);
            model->setData(index, row);
        }
    }
    model->setHeaderData(0, Qt::Horizontal, "x");
    model->setHeaderData(1, Qt::Horizontal, "y");
    model->setHeaderData(2, Qt::Horizontal, "z");
//===============

}

AnotherWindow2::~AnotherWindow2() {
    delete ui;
}


//void AnotherWindow::on_pushButton_clicked()
void AnotherWindow2::on_button_show_1_clicked() {
    this->close();
    emit firstWindow2();
}


void AnotherWindow2::on_button_count_clicked() {

    if (ui->credit_total_value->text() != '0' && ui->credit_duration_value->text() != '0' && ui->credit_percent_value->text() != '0') {
        double credit_type = 1;
//        if (ui->credit_type_diff->isChecked() == true) {
//            credit_type = 2;
//        }

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
    } /*else {
        ui->result_total->setText("nothing");
    }*/

}



void AnotherWindow2::on_add_1_clicked() {
//    QModelIndex index;
//    for (int row = 0; row < model->rowCount(); ++row) {
//        for (int col = 0; col < model->columnCount(); ++col) {
//            index = model->index(row, col);
//            double val = model->data( index ).toDouble();
//            model->setData(index, val * val);
//        }
//    }


    model = new QStandardItemModel(3, 3, this);
    ui->tableView->setModel(model);
    QModelIndex index;
    for (int row = 0; row < model->rowCount(); ++row) {
        for (int col = 0; col < model->columnCount(); ++col) {
            index = model->index(row, col);
            model->setData(index, row);
        }
    }
    model->setHeaderData(0, Qt::Horizontal, "x");
    model->setHeaderData(1, Qt::Horizontal, "y");
    model->setHeaderData(2, Qt::Horizontal, "z");




}

