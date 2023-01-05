/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionGo_to_Credit_calc;
    QWidget *centralwidget;
    QPushButton *button_0;
    QLabel *result_show_full;
    QPushButton *button_1;
    QPushButton *button_2;
    QPushButton *button_3;
    QPushButton *button_4;
    QPushButton *button_5;
    QPushButton *button_6;
    QPushButton *button_7;
    QPushButton *button_8;
    QPushButton *button_9;
    QPushButton *button_dot;
    QPushButton *button_del;
    QPushButton *button_del_total;
    QPushButton *button_minus_un;
    QPushButton *button_exp;
    QPushButton *button_div;
    QPushButton *button_mul;
    QPushButton *button_minus;
    QPushButton *button_plus;
    QPushButton *button_eq;
    QPushButton *button_cos;
    QPushButton *button_sin;
    QPushButton *button_tan;
    QPushButton *button_acos;
    QPushButton *button_atan;
    QPushButton *button_asin;
    QPushButton *button_ln;
    QPushButton *button_log;
    QPushButton *button_sqrt;
    QPushButton *button_br_left;
    QPushButton *button_mod;
    QPushButton *button__br_right;
    QLabel *result_show;
    QSpinBox *inputLeftX;
    QSpinBox *inputRightX;
    QSpinBox *value_x;
    QLabel *label_x_max;
    QLabel *label_x_min;
    QLabel *label_logo_name;
    QLabel *label_y_max;
    QSpinBox *inputRightY;
    QSpinBox *inputLeftY;
    QLabel *label_y_min;
    QPushButton *button_x;
    QPushButton *button_show_graph;
    QPushButton *clear;
    QLabel *outputGraph;
    QPushButton *draw;
    QLabel *label_scale_x;
    QLabel *result_show_eq;
    QLabel *label;
    QPushButton *button_hide_graph;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(741, 490);
        MainWindow->setMinimumSize(QSize(741, 460));
        MainWindow->setMaximumSize(QSize(741, 1020));
        MainWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(46, 47, 51, 204);"));
        actionGo_to_Credit_calc = new QAction(MainWindow);
        actionGo_to_Credit_calc->setObjectName(QString::fromUtf8("actionGo_to_Credit_calc"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        button_0 = new QPushButton(centralwidget);
        button_0->setObjectName(QString::fromUtf8("button_0"));
        button_0->setGeometry(QRect(560, 370, 61, 61));
        button_0->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(120, 120, 128, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_0->setPalette(palette);
        QFont font;
        font.setPointSize(20);
        font.setBold(false);
        button_0->setFont(font);
        button_0->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        result_show_full = new QLabel(centralwidget);
        result_show_full->setObjectName(QString::fromUtf8("result_show_full"));
        result_show_full->setGeometry(QRect(0, 0, 741, 81));
        QFont font1;
        font1.setPointSize(24);
        result_show_full->setFont(font1);
        result_show_full->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;"));
        result_show_full->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        result_show_full->setWordWrap(true);
        result_show_full->setMargin(2);
        button_1 = new QPushButton(centralwidget);
        button_1->setObjectName(QString::fromUtf8("button_1"));
        button_1->setGeometry(QRect(500, 310, 61, 61));
        button_1->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_1->setPalette(palette1);
        button_1->setFont(font);
        button_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_2 = new QPushButton(centralwidget);
        button_2->setObjectName(QString::fromUtf8("button_2"));
        button_2->setGeometry(QRect(560, 310, 61, 61));
        button_2->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_2->setPalette(palette2);
        button_2->setFont(font);
        button_2->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_3 = new QPushButton(centralwidget);
        button_3->setObjectName(QString::fromUtf8("button_3"));
        button_3->setGeometry(QRect(620, 310, 61, 61));
        button_3->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Text, brush);
        palette3.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette3.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_3->setPalette(palette3);
        button_3->setFont(font);
        button_3->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_4 = new QPushButton(centralwidget);
        button_4->setObjectName(QString::fromUtf8("button_4"));
        button_4->setGeometry(QRect(500, 250, 61, 61));
        button_4->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Text, brush);
        palette4.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette4.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_4->setPalette(palette4);
        button_4->setFont(font);
        button_4->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_5 = new QPushButton(centralwidget);
        button_5->setObjectName(QString::fromUtf8("button_5"));
        button_5->setGeometry(QRect(560, 250, 61, 61));
        button_5->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Text, brush);
        palette5.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette5.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_5->setPalette(palette5);
        button_5->setFont(font);
        button_5->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_6 = new QPushButton(centralwidget);
        button_6->setObjectName(QString::fromUtf8("button_6"));
        button_6->setGeometry(QRect(620, 250, 61, 61));
        button_6->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Text, brush);
        palette6.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette6.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_6->setPalette(palette6);
        button_6->setFont(font);
        button_6->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_7 = new QPushButton(centralwidget);
        button_7->setObjectName(QString::fromUtf8("button_7"));
        button_7->setGeometry(QRect(500, 190, 61, 61));
        button_7->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Text, brush);
        palette7.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette7.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_7->setPalette(palette7);
        button_7->setFont(font);
        button_7->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_8 = new QPushButton(centralwidget);
        button_8->setObjectName(QString::fromUtf8("button_8"));
        button_8->setGeometry(QRect(560, 190, 61, 61));
        button_8->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Text, brush);
        palette8.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette8.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_8->setPalette(palette8);
        button_8->setFont(font);
        button_8->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_9 = new QPushButton(centralwidget);
        button_9->setObjectName(QString::fromUtf8("button_9"));
        button_9->setGeometry(QRect(620, 190, 61, 61));
        button_9->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Text, brush);
        palette9.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette9.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_9->setPalette(palette9);
        button_9->setFont(font);
        button_9->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_dot = new QPushButton(centralwidget);
        button_dot->setObjectName(QString::fromUtf8("button_dot"));
        button_dot->setGeometry(QRect(500, 370, 61, 61));
        button_dot->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Text, brush);
        palette10.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette10.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_dot->setPalette(palette10);
        QFont font2;
        font2.setPointSize(24);
        font2.setBold(false);
        button_dot->setFont(font2);
        button_dot->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_del = new QPushButton(centralwidget);
        button_del->setObjectName(QString::fromUtf8("button_del"));
        button_del->setGeometry(QRect(620, 370, 61, 61));
        button_del->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Text, brush);
        palette11.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush1);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette11.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_del->setPalette(palette11);
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        button_del->setFont(font3);
        button_del->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_del_total = new QPushButton(centralwidget);
        button_del_total->setObjectName(QString::fromUtf8("button_del_total"));
        button_del_total->setGeometry(QRect(500, 130, 61, 61));
        button_del_total->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(77, 78, 84, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Text, brush);
        palette12.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette12.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_del_total->setPalette(palette12);
        button_del_total->setFont(font);
        button_del_total->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_minus_un = new QPushButton(centralwidget);
        button_minus_un->setObjectName(QString::fromUtf8("button_minus_un"));
        button_minus_un->setGeometry(QRect(560, 130, 61, 61));
        button_minus_un->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Text, brush);
        palette13.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette13.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_minus_un->setPalette(palette13);
        QFont font4;
        font4.setPointSize(19);
        font4.setBold(false);
        button_minus_un->setFont(font4);
        button_minus_un->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_exp = new QPushButton(centralwidget);
        button_exp->setObjectName(QString::fromUtf8("button_exp"));
        button_exp->setGeometry(QRect(620, 130, 61, 61));
        button_exp->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Text, brush);
        palette14.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette14.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_exp->setPalette(palette14);
        button_exp->setFont(font2);
        button_exp->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_div = new QPushButton(centralwidget);
        button_div->setObjectName(QString::fromUtf8("button_div"));
        button_div->setGeometry(QRect(680, 130, 61, 61));
        button_div->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(221, 153, 59, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Text, brush);
        palette15.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette15.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_div->setPalette(palette15);
        button_div->setFont(font2);
        button_div->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(221, 153, 59);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_mul = new QPushButton(centralwidget);
        button_mul->setObjectName(QString::fromUtf8("button_mul"));
        button_mul->setGeometry(QRect(680, 190, 61, 61));
        button_mul->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Text, brush);
        palette16.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette16.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_mul->setPalette(palette16);
        button_mul->setFont(font2);
        button_mul->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(221, 153, 59);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_minus = new QPushButton(centralwidget);
        button_minus->setObjectName(QString::fromUtf8("button_minus"));
        button_minus->setGeometry(QRect(680, 250, 61, 61));
        button_minus->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Text, brush);
        palette17.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette17.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_minus->setPalette(palette17);
        button_minus->setFont(font2);
        button_minus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(221, 153, 59);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_plus = new QPushButton(centralwidget);
        button_plus->setObjectName(QString::fromUtf8("button_plus"));
        button_plus->setGeometry(QRect(680, 310, 61, 61));
        button_plus->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Text, brush);
        palette18.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette18.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_plus->setPalette(palette18);
        button_plus->setFont(font2);
        button_plus->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(221, 153, 59);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_eq = new QPushButton(centralwidget);
        button_eq->setObjectName(QString::fromUtf8("button_eq"));
        button_eq->setGeometry(QRect(680, 370, 61, 61));
        button_eq->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Text, brush);
        palette19.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette19.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_eq->setPalette(palette19);
        button_eq->setFont(font2);
        button_eq->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(221, 153, 59);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_cos = new QPushButton(centralwidget);
        button_cos->setObjectName(QString::fromUtf8("button_cos"));
        button_cos->setGeometry(QRect(340, 310, 81, 61));
        button_cos->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Text, brush);
        palette20.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette20.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_cos->setPalette(palette20);
        QFont font5;
        font5.setPointSize(16);
        font5.setBold(false);
        button_cos->setFont(font5);
        button_cos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_sin = new QPushButton(centralwidget);
        button_sin->setObjectName(QString::fromUtf8("button_sin"));
        button_sin->setGeometry(QRect(260, 310, 81, 61));
        button_sin->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Text, brush);
        palette21.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette21.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_sin->setPalette(palette21);
        button_sin->setFont(font5);
        button_sin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_tan = new QPushButton(centralwidget);
        button_tan->setObjectName(QString::fromUtf8("button_tan"));
        button_tan->setGeometry(QRect(420, 310, 81, 61));
        button_tan->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Text, brush);
        palette22.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette22.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_tan->setPalette(palette22);
        button_tan->setFont(font5);
        button_tan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_acos = new QPushButton(centralwidget);
        button_acos->setObjectName(QString::fromUtf8("button_acos"));
        button_acos->setGeometry(QRect(340, 370, 81, 61));
        button_acos->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Text, brush);
        palette23.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette23.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_acos->setPalette(palette23);
        button_acos->setFont(font5);
        button_acos->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_atan = new QPushButton(centralwidget);
        button_atan->setObjectName(QString::fromUtf8("button_atan"));
        button_atan->setGeometry(QRect(420, 370, 81, 61));
        button_atan->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Text, brush);
        palette24.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette24.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_atan->setPalette(palette24);
        button_atan->setFont(font5);
        button_atan->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_asin = new QPushButton(centralwidget);
        button_asin->setObjectName(QString::fromUtf8("button_asin"));
        button_asin->setGeometry(QRect(260, 370, 81, 61));
        button_asin->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette25;
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette25.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_asin->setPalette(palette25);
        button_asin->setFont(font5);
        button_asin->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_ln = new QPushButton(centralwidget);
        button_ln->setObjectName(QString::fromUtf8("button_ln"));
        button_ln->setGeometry(QRect(340, 250, 81, 61));
        button_ln->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Text, brush);
        palette26.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette26.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_ln->setPalette(palette26);
        button_ln->setFont(font5);
        button_ln->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_log = new QPushButton(centralwidget);
        button_log->setObjectName(QString::fromUtf8("button_log"));
        button_log->setGeometry(QRect(420, 250, 81, 61));
        button_log->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette27.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_log->setPalette(palette27);
        button_log->setFont(font5);
        button_log->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_sqrt = new QPushButton(centralwidget);
        button_sqrt->setObjectName(QString::fromUtf8("button_sqrt"));
        button_sqrt->setGeometry(QRect(260, 250, 81, 61));
        button_sqrt->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette28.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_sqrt->setPalette(palette28);
        QFont font6;
        font6.setPointSize(13);
        font6.setBold(false);
        button_sqrt->setFont(font6);
        button_sqrt->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_br_left = new QPushButton(centralwidget);
        button_br_left->setObjectName(QString::fromUtf8("button_br_left"));
        button_br_left->setGeometry(QRect(260, 190, 81, 61));
        button_br_left->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush);
        palette29.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette29.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_br_left->setPalette(palette29);
        button_br_left->setFont(font);
        button_br_left->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button_mod = new QPushButton(centralwidget);
        button_mod->setObjectName(QString::fromUtf8("button_mod"));
        button_mod->setGeometry(QRect(420, 190, 81, 61));
        button_mod->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette30.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_mod->setPalette(palette30);
        button_mod->setFont(font5);
        button_mod->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        button__br_right = new QPushButton(centralwidget);
        button__br_right->setObjectName(QString::fromUtf8("button__br_right"));
        button__br_right->setGeometry(QRect(340, 190, 81, 61));
        button__br_right->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette31;
        palette31.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette31.setBrush(QPalette::Active, QPalette::Text, brush);
        palette31.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette31.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette31.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette31.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette31.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette31.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette31.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette31.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette31.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette31.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button__br_right->setPalette(palette31);
        button__br_right->setFont(font);
        button__br_right->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        result_show = new QLabel(centralwidget);
        result_show->setObjectName(QString::fromUtf8("result_show"));
        result_show->setGeometry(QRect(30, 80, 710, 41));
        QFont font7;
        font7.setPointSize(20);
        font7.setItalic(false);
        result_show->setFont(font7);
        result_show->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: gray;\n"
"color: white"));
        result_show->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        inputLeftX = new QSpinBox(centralwidget);
        inputLeftX->setObjectName(QString::fromUtf8("inputLeftX"));
        inputLeftX->setGeometry(QRect(140, 190, 121, 61));
        QFont font8;
        font8.setPointSize(20);
        font8.setKerning(true);
        inputLeftX->setFont(font8);
        inputLeftX->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        inputLeftX->setFrame(true);
        inputLeftX->setAlignment(Qt::AlignCenter);
        inputLeftX->setMinimum(-1000000);
        inputLeftX->setMaximum(1000000);
        inputLeftX->setStepType(QAbstractSpinBox::DefaultStepType);
        inputLeftX->setValue(0);
        inputRightX = new QSpinBox(centralwidget);
        inputRightX->setObjectName(QString::fromUtf8("inputRightX"));
        inputRightX->setGeometry(QRect(140, 250, 121, 61));
        inputRightX->setFont(font8);
        inputRightX->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        inputRightX->setFrame(true);
        inputRightX->setAlignment(Qt::AlignCenter);
        inputRightX->setMinimum(-1000000);
        inputRightX->setMaximum(1000000);
        inputRightX->setStepType(QAbstractSpinBox::DefaultStepType);
        value_x = new QSpinBox(centralwidget);
        value_x->setObjectName(QString::fromUtf8("value_x"));
        value_x->setGeometry(QRect(140, 130, 121, 61));
        value_x->setFont(font8);
        value_x->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        value_x->setFrame(true);
        value_x->setAlignment(Qt::AlignCenter);
        value_x->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        value_x->setAccelerated(false);
        value_x->setKeyboardTracking(true);
        value_x->setProperty("showGroupSeparator", QVariant(false));
        value_x->setMinimum(-1000000);
        value_x->setMaximum(1000000);
        value_x->setStepType(QAbstractSpinBox::DefaultStepType);
        value_x->setValue(0);
        label_x_max = new QLabel(centralwidget);
        label_x_max->setObjectName(QString::fromUtf8("label_x_max"));
        label_x_max->setGeometry(QRect(60, 250, 81, 61));
        QFont font9;
        font9.setPointSize(16);
        label_x_max->setFont(font9);
        label_x_max->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        label_x_max->setAlignment(Qt::AlignCenter);
        label_x_min = new QLabel(centralwidget);
        label_x_min->setObjectName(QString::fromUtf8("label_x_min"));
        label_x_min->setGeometry(QRect(60, 190, 81, 61));
        label_x_min->setFont(font9);
        label_x_min->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        label_x_min->setAlignment(Qt::AlignCenter);
        label_logo_name = new QLabel(centralwidget);
        label_logo_name->setObjectName(QString::fromUtf8("label_logo_name"));
        label_logo_name->setGeometry(QRect(260, 130, 241, 61));
        QFont font10;
        font10.setPointSize(14);
        font10.setBold(true);
        font10.setItalic(true);
        label_logo_name->setFont(font10);
        label_logo_name->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  color: orange;\n"
"}\n"
""));
        label_logo_name->setAlignment(Qt::AlignCenter);
        label_y_max = new QLabel(centralwidget);
        label_y_max->setObjectName(QString::fromUtf8("label_y_max"));
        label_y_max->setGeometry(QRect(60, 370, 81, 61));
        label_y_max->setFont(font9);
        label_y_max->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        label_y_max->setAlignment(Qt::AlignCenter);
        inputRightY = new QSpinBox(centralwidget);
        inputRightY->setObjectName(QString::fromUtf8("inputRightY"));
        inputRightY->setGeometry(QRect(140, 370, 121, 61));
        inputRightY->setFont(font8);
        inputRightY->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        inputRightY->setFrame(true);
        inputRightY->setAlignment(Qt::AlignCenter);
        inputRightY->setMinimum(-1000000);
        inputRightY->setMaximum(1000000);
        inputRightY->setStepType(QAbstractSpinBox::DefaultStepType);
        inputLeftY = new QSpinBox(centralwidget);
        inputLeftY->setObjectName(QString::fromUtf8("inputLeftY"));
        inputLeftY->setGeometry(QRect(140, 310, 121, 61));
        inputLeftY->setFont(font8);
        inputLeftY->setStyleSheet(QString::fromUtf8("QSpinBox{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        inputLeftY->setFrame(true);
        inputLeftY->setAlignment(Qt::AlignCenter);
        inputLeftY->setMinimum(-1000000);
        inputLeftY->setMaximum(1000000);
        inputLeftY->setStepType(QAbstractSpinBox::DefaultStepType);
        label_y_min = new QLabel(centralwidget);
        label_y_min->setObjectName(QString::fromUtf8("label_y_min"));
        label_y_min->setGeometry(QRect(60, 310, 81, 61));
        label_y_min->setFont(font9);
        label_y_min->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
""));
        label_y_min->setAlignment(Qt::AlignCenter);
        button_x = new QPushButton(centralwidget);
        button_x->setObjectName(QString::fromUtf8("button_x"));
        button_x->setGeometry(QRect(60, 130, 81, 61));
        button_x->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette32;
        palette32.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette32.setBrush(QPalette::Active, QPalette::Text, brush);
        palette32.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette32.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette32.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette32.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette32.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette32.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette32.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette32.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette32.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette32.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_x->setPalette(palette32);
        QFont font11;
        font11.setPointSize(22);
        font11.setBold(false);
        button_x->setFont(font11);
        button_x->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}\n"
"\n"
""));
        button_show_graph = new QPushButton(centralwidget);
        button_show_graph->setObjectName(QString::fromUtf8("button_show_graph"));
        button_show_graph->setGeometry(QRect(0, 130, 61, 301));
        button_show_graph->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette33;
        palette33.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette33.setBrush(QPalette::Active, QPalette::Text, brush);
        palette33.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette33.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette33.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette33.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette33.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette33.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette33.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette33.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette33.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette33.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette33.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette33.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_show_graph->setPalette(palette33);
        button_show_graph->setFont(font);
        button_show_graph->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}\n"
"\n"
""));
        clear = new QPushButton(centralwidget);
        clear->setObjectName(QString::fromUtf8("clear"));
        clear->setGeometry(QRect(630, 440, 100, 32));
        clear->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        outputGraph = new QLabel(centralwidget);
        outputGraph->setObjectName(QString::fromUtf8("outputGraph"));
        outputGraph->setGeometry(QRect(15, 480, 710, 500));
        draw = new QPushButton(centralwidget);
        draw->setObjectName(QString::fromUtf8("draw"));
        draw->setGeometry(QRect(520, 440, 100, 32));
        draw->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(120, 120, 128);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        label_scale_x = new QLabel(centralwidget);
        label_scale_x->setObjectName(QString::fromUtf8("label_scale_x"));
        label_scale_x->setGeometry(QRect(30, 500, 111, 21));
        label_scale_x->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: rgb(0, 0, 0);\n"
"}\n"
""));
        result_show_eq = new QLabel(centralwidget);
        result_show_eq->setObjectName(QString::fromUtf8("result_show_eq"));
        result_show_eq->setGeometry(QRect(30, 80, 710, 41));
        result_show_eq->setFont(font7);
        result_show_eq->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: gray;\n"
"color: white"));
        result_show_eq->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 90, 16, 21));
        QFont font12;
        font12.setPointSize(18);
        label->setFont(font12);
        label->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white;\n"
"}\n"
""));
        button_hide_graph = new QPushButton(centralwidget);
        button_hide_graph->setObjectName(QString::fromUtf8("button_hide_graph"));
        button_hide_graph->setGeometry(QRect(0, 130, 61, 301));
        button_hide_graph->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette34;
        palette34.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette34.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette34.setBrush(QPalette::Active, QPalette::Text, brush);
        palette34.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette34.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette34.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette34.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette34.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette34.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette34.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette34.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette34.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette34.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette34.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette34.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_hide_graph->setPalette(palette34);
        button_hide_graph->setFont(font);
        button_hide_graph->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(77, 78, 84);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}\n"
"\n"
""));
        MainWindow->setCentralWidget(centralwidget);
        button_hide_graph->raise();
        result_show->raise();
        button_0->raise();
        button_1->raise();
        button_2->raise();
        button_3->raise();
        button_4->raise();
        button_5->raise();
        button_6->raise();
        button_7->raise();
        button_8->raise();
        button_9->raise();
        button_dot->raise();
        button_del->raise();
        button_del_total->raise();
        button_minus_un->raise();
        button_exp->raise();
        button_div->raise();
        button_mul->raise();
        button_minus->raise();
        button_plus->raise();
        button_eq->raise();
        button_cos->raise();
        button_sin->raise();
        button_tan->raise();
        button_acos->raise();
        button_atan->raise();
        button_asin->raise();
        button_ln->raise();
        button_log->raise();
        button_sqrt->raise();
        button_br_left->raise();
        button_mod->raise();
        button__br_right->raise();
        inputLeftX->raise();
        inputRightX->raise();
        value_x->raise();
        label_x_max->raise();
        label_x_min->raise();
        label_logo_name->raise();
        label_y_max->raise();
        inputRightY->raise();
        inputLeftY->raise();
        label_y_min->raise();
        button_x->raise();
        button_show_graph->raise();
        clear->raise();
        outputGraph->raise();
        draw->raise();
        label_scale_x->raise();
        result_show_eq->raise();
        label->raise();
        result_show_full->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 741, 24));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(actionGo_to_Credit_calc);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionGo_to_Credit_calc->setText(QCoreApplication::translate("MainWindow", "Go to Credit Calc", nullptr));
        button_0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        result_show_full->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        button_1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        button_2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        button_3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        button_4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        button_5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        button_6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        button_7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        button_8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        button_9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        button_dot->setText(QCoreApplication::translate("MainWindow", ".", nullptr));
        button_del->setText(QCoreApplication::translate("MainWindow", "del", nullptr));
        button_del_total->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        button_minus_un->setText(QCoreApplication::translate("MainWindow", "+/-", nullptr));
        button_exp->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        button_div->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        button_mul->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        button_minus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        button_plus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        button_eq->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_cos->setText(QCoreApplication::translate("MainWindow", "cos", nullptr));
        button_sin->setText(QCoreApplication::translate("MainWindow", "sin", nullptr));
        button_tan->setText(QCoreApplication::translate("MainWindow", "tan", nullptr));
        button_acos->setText(QCoreApplication::translate("MainWindow", "acos", nullptr));
        button_atan->setText(QCoreApplication::translate("MainWindow", "atan", nullptr));
        button_asin->setText(QCoreApplication::translate("MainWindow", "asin", nullptr));
        button_ln->setText(QCoreApplication::translate("MainWindow", "ln", nullptr));
        button_log->setText(QCoreApplication::translate("MainWindow", "log", nullptr));
        button_sqrt->setText(QCoreApplication::translate("MainWindow", "sqrt", nullptr));
        button_br_left->setText(QCoreApplication::translate("MainWindow", "(", nullptr));
        button_mod->setText(QCoreApplication::translate("MainWindow", "mod", nullptr));
        button__br_right->setText(QCoreApplication::translate("MainWindow", ")", nullptr));
        result_show->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label_x_max->setText(QCoreApplication::translate("MainWindow", "X-max", nullptr));
        label_x_min->setText(QCoreApplication::translate("MainWindow", "X-min", nullptr));
        label_logo_name->setText(QCoreApplication::translate("MainWindow", "     Inteligente v.0.1", nullptr));
        label_y_max->setText(QCoreApplication::translate("MainWindow", "Y-max", nullptr));
        label_y_min->setText(QCoreApplication::translate("MainWindow", "Y-min", nullptr));
        button_x->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        button_show_graph->setText(QCoreApplication::translate("MainWindow", "S\n"
"h\n"
"o\n"
"w\n"
"\n"
"g\n"
"r\n"
"a\n"
"p\n"
"h", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "Clear", nullptr));
        outputGraph->setText(QString());
        draw->setText(QCoreApplication::translate("MainWindow", "Draw", nullptr));
        label_scale_x->setText(QString());
        result_show_eq->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        button_hide_graph->setText(QCoreApplication::translate("MainWindow", "H\n"
"i\n"
"d\n"
"e\n"
"\n"
"g\n"
"r\n"
"a\n"
"p\n"
"h", nullptr));
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
