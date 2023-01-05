#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtGui>

#include "anotherwindow.h"
#include "anotherwindow2.h"


extern "C" {
    #include "../../s21_smart_calc.h"
}


QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


// ================
namespace Ui {
    class MainWindow;
};
// ================

class MainWindow : public QMainWindow {
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void drawGraph(bool notEmpty = 0); // функция, отвечающая за отрисовку графика
    double f1(double x);
    void recountPixels(); // в зависимости от точности (об этом позже) считаем количество пикселей на один условный сантиметр
    void getData(); // получаем значения границ графика и точности

private:
    Ui::MainWindow *ui; // форма

    double leftX,rightX; // границы по х
    double leftY,rightY; // границы по у
    int pictWidth,pictHeight; // ширина и высота картинки
    double step; // шаг (точность)
    double onePixelX,onePixelY; // количество пикселей на шаг
    double Ox,Oy; // координаты центра


    // second and third windows
    AnotherWindow *sWindow;
    AnotherWindow2 *tWindow;
;

private slots:
    void digits_numbers();
    void on_button_dot_clicked();
    void operations();
    void on_button_del_total_clicked();
    void on_button_eq_clicked();
    void math_operations();
    void math_operations2();

    void on_button_del_clicked();

//    void on_button_show_1_clicked();
//    void on_button_show_2_clicked();

    void on_draw_clicked();
    void on_clear_clicked();

    void on_actionGo_to_Credit_calc_triggered();

    void on_button_show_graph_clicked();
    void on_button_hide_graph_clicked();
};

#endif // MAINWINDOW_H
