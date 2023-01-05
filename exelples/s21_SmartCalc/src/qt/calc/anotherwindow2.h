#ifndef ANOTHERWINDOW2_H
#define ANOTHERWINDOW2_H


#include <QWidget>
#include <QStandardItemModel>

extern "C" {
    #include "../../s21_smart_calc.h"
}


namespace Ui {
class AnotherWindow2;
}

class AnotherWindow2 : public QWidget
{
    Q_OBJECT

public:
    explicit AnotherWindow2(QWidget *parent = nullptr);
    ~AnotherWindow2();

signals:
    void firstWindow2();

private slots:
//    void on_pushButton_clicked();
    void on_button_show_1_clicked();

    void on_button_count_clicked();


    void on_add_1_clicked();

private:
    Ui::AnotherWindow2 *ui;
    QStandardItemModel *model;
};

#endif // ANOTHERWINDOW2_H

