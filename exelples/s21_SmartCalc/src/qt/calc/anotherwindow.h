#ifndef ANOTHERWINDOW_H
#define ANOTHERWINDOW_H


#include <QWidget>

extern "C" {
    #include "../../s21_smart_calc.h"
}


namespace Ui {
    class AnotherWindow;
}

class AnotherWindow : public QWidget {
    Q_OBJECT

public:
    explicit AnotherWindow(QWidget *parent = nullptr);
    ~AnotherWindow();

signals:
    void firstWindow();

private slots:
//    void on_pushButton_clicked();
    void on_button_show_1_clicked();

    void on_button_count_clicked();

private:
    Ui::AnotherWindow *ui;
};

#endif // ANOTHERWINDOW_H
