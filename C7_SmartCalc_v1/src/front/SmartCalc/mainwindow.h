#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QWidget>
#include <QtGui>

extern "C" {
    #include "../../s21_smart_calc.h"
}

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void drawGraph(
        bool notEmpty = 0);  // функция, отвечающая за отрисовку графика
    void recountPixels();  // в зависимости от точности (об этом позже) считаем количество пикселей на один условный сантиметр
    void getData();  // получаем значения границ графика и точности

private:
    Ui::MainWindow *ui;         // форма
    double leftX, rightX;       // границы по х
    double leftY, rightY;       // границы по у
    int pictWidth, pictHeight;  // ширина и высота картинки
    double step;                // шаг (точность)
    double onePixelX, onePixelY;  // количество пикселей на шаг
    double Ox, Oy;                // координаты центра

private slots:
    void dig_num();
//    void on_pushButton_dot_clicked();
//    void operations();
    void on_eq_clicked();
//    void on_pushButton_X_clicked();
//    void on_pushButton_plus_clicked();
//    void math_operations();
    void on_pow_clicked();
    void on_pushButton_clear_clicked();
//    void on_pushButton_sin_clicked();
    void on_pushButton_draw_clicked();
};
#endif // MAINWINDOW_H
