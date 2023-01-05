/********************************************************************************
** Form generated from reading UI file 'anotherwindow2.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERWINDOW2_H
#define UI_ANOTHERWINDOW2_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnotherWindow2
{
public:
    QComboBox *credit_duration;
    QLabel *label_3;
    QLabel *label_13;
    QLabel *label_2;
    QPushButton *button_count;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_8;
    QLabel *label_logo_name;
    QLabel *label_9;
    QLabel *label_7;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *result_total;
    QLabel *result_percent;
    QLabel *result_month;
    QPushButton *button_show_1;
    QSpinBox *credit_total_value;
    QSpinBox *credit_duration_value;
    QDoubleSpinBox *credit_percent_value;
    QDoubleSpinBox *deposit_tax_value;
    QComboBox *deposit_payment_frequency;
    QCheckBox *deposit_interest_capitalization;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QComboBox *credit_duration_2;
    QTableView *tableView;
    QPushButton *add_1;

    void setupUi(QWidget *AnotherWindow2)
    {
        if (AnotherWindow2->objectName().isEmpty())
            AnotherWindow2->setObjectName(QString::fromUtf8("AnotherWindow2"));
        AnotherWindow2->resize(741, 923);
        AnotherWindow2->setStyleSheet(QString::fromUtf8("background-color: rgba(46, 47, 51, 204);"));
        credit_duration = new QComboBox(AnotherWindow2);
        credit_duration->addItem(QString());
        credit_duration->addItem(QString());
        credit_duration->setObjectName(QString::fromUtf8("credit_duration"));
        credit_duration->setGeometry(QRect(570, 180, 131, 41));
        credit_duration->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setPointSize(18);
        credit_duration->setFont(font);
        credit_duration->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  background-color:white;\n"
"  color: black;\n"
"  border: 1px solid black;\n"
"}\n"
"\n"
"QComboBox::item:!selected {\n"
"    color:white;\n"
"}"));
        credit_duration->setMaxVisibleItems(10);
        credit_duration->setFrame(true);
        label_3 = new QLabel(AnotherWindow2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 180, 181, 41));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_13 = new QLabel(AnotherWindow2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(590, 840, 41, 41));
        label_13->setFont(font);
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_13->setWordWrap(true);
        label_2 = new QLabel(AnotherWindow2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 181, 41));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        button_count = new QPushButton(AnotherWindow2);
        button_count->setObjectName(QString::fromUtf8("button_count"));
        button_count->setGeometry(QRect(320, 660, 231, 51));
        button_count->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(221, 153, 59, 255));
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
        button_count->setPalette(palette);
        QFont font1;
        font1.setPointSize(18);
        font1.setBold(true);
        button_count->setFont(font1);
        button_count->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(221, 153, 59);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        label_6 = new QLabel(AnotherWindow2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 740, 241, 41));
        label_6->setFont(font);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_6->setWordWrap(true);
        label_4 = new QLabel(AnotherWindow2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 230, 181, 41));
        label_4->setFont(font);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_8 = new QLabel(AnotherWindow2);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 840, 241, 41));
        label_8->setFont(font);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_8->setWordWrap(true);
        label_logo_name = new QLabel(AnotherWindow2);
        label_logo_name->setObjectName(QString::fromUtf8("label_logo_name"));
        label_logo_name->setGeometry(QRect(260, 30, 241, 61));
        QFont font2;
        font2.setPointSize(14);
        font2.setBold(true);
        font2.setItalic(true);
        label_logo_name->setFont(font2);
        label_logo_name->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  color: orange;\n"
"}\n"
""));
        label_logo_name->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(AnotherWindow2);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(580, 230, 31, 41));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_9->setWordWrap(true);
        label_7 = new QLabel(AnotherWindow2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 790, 241, 41));
        label_7->setFont(font);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_7->setWordWrap(true);
        label_10 = new QLabel(AnotherWindow2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(580, 130, 41, 41));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_10->setWordWrap(true);
        label_11 = new QLabel(AnotherWindow2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(590, 740, 41, 41));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_11->setWordWrap(true);
        label_12 = new QLabel(AnotherWindow2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(590, 790, 41, 41));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_12->setWordWrap(true);
        result_total = new QLabel(AnotherWindow2);
        result_total->setObjectName(QString::fromUtf8("result_total"));
        result_total->setGeometry(QRect(320, 840, 251, 41));
        result_total->setFont(font);
        result_total->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;\n"
"padding-left:4px;"));
        result_total->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        result_percent = new QLabel(AnotherWindow2);
        result_percent->setObjectName(QString::fromUtf8("result_percent"));
        result_percent->setGeometry(QRect(320, 790, 251, 41));
        result_percent->setFont(font);
        result_percent->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;\n"
"padding-left:4px;"));
        result_percent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        result_month = new QLabel(AnotherWindow2);
        result_month->setObjectName(QString::fromUtf8("result_month"));
        result_month->setGeometry(QRect(320, 740, 251, 41));
        result_month->setFont(font);
        result_month->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;\n"
"padding-left:4px;"));
        result_month->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        button_show_1 = new QPushButton(AnotherWindow2);
        button_show_1->setObjectName(QString::fromUtf8("button_show_1"));
        button_show_1->setGeometry(QRect(30, 30, 81, 41));
        button_show_1->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(77, 78, 84, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        button_show_1->setPalette(palette1);
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(false);
        button_show_1->setFont(font3);
        button_show_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
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
        credit_total_value = new QSpinBox(AnotherWindow2);
        credit_total_value->setObjectName(QString::fromUtf8("credit_total_value"));
        credit_total_value->setGeometry(QRect(310, 130, 251, 41));
        credit_total_value->setFont(font);
        credit_total_value->setStyleSheet(QString::fromUtf8("  background-color:white;\n"
"  color: black;\n"
"  border: 1px solid black;\n"
"  padding-left:4px;\n"
""));
        credit_total_value->setMaximum(1000000000);
        credit_duration_value = new QSpinBox(AnotherWindow2);
        credit_duration_value->setObjectName(QString::fromUtf8("credit_duration_value"));
        credit_duration_value->setGeometry(QRect(310, 180, 251, 41));
        credit_duration_value->setFont(font);
        credit_duration_value->setStyleSheet(QString::fromUtf8("  background-color:white;\n"
"  color: black;\n"
"  border: 1px solid black;\n"
"  padding-left:4px;\n"
""));
        credit_duration_value->setMaximum(50);
        credit_percent_value = new QDoubleSpinBox(AnotherWindow2);
        credit_percent_value->setObjectName(QString::fromUtf8("credit_percent_value"));
        credit_percent_value->setGeometry(QRect(310, 230, 251, 41));
        QFont font4;
        font4.setPointSize(20);
        credit_percent_value->setFont(font4);
        credit_percent_value->setStyleSheet(QString::fromUtf8("\n"
"background-color:white;\n"
"color: black;\n"
"border: 1px solid black;\n"
"padding-left:4px;"));
        credit_percent_value->setDecimals(2);
        credit_percent_value->setMaximum(999.000000000000000);
        deposit_tax_value = new QDoubleSpinBox(AnotherWindow2);
        deposit_tax_value->setObjectName(QString::fromUtf8("deposit_tax_value"));
        deposit_tax_value->setGeometry(QRect(310, 280, 131, 41));
        deposit_tax_value->setFont(font4);
        deposit_tax_value->setStyleSheet(QString::fromUtf8("\n"
"background-color:white;\n"
"color: black;\n"
"border: 1px solid black;\n"
"padding-left:4px;"));
        deposit_tax_value->setDecimals(2);
        deposit_tax_value->setMaximum(999.000000000000000);
        deposit_payment_frequency = new QComboBox(AnotherWindow2);
        deposit_payment_frequency->addItem(QString());
        deposit_payment_frequency->addItem(QString());
        deposit_payment_frequency->setObjectName(QString::fromUtf8("deposit_payment_frequency"));
        deposit_payment_frequency->setGeometry(QRect(310, 330, 251, 41));
        deposit_payment_frequency->setMinimumSize(QSize(0, 0));
        deposit_payment_frequency->setFont(font);
        deposit_payment_frequency->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  background-color:white;\n"
"  color: black;\n"
"  border: 1px solid black;\n"
"}\n"
"\n"
"QComboBox::item:!selected {\n"
"    color:white;\n"
"}"));
        deposit_payment_frequency->setMaxVisibleItems(10);
        deposit_payment_frequency->setFrame(true);
        deposit_interest_capitalization = new QCheckBox(AnotherWindow2);
        deposit_interest_capitalization->setObjectName(QString::fromUtf8("deposit_interest_capitalization"));
        deposit_interest_capitalization->setGeometry(QRect(320, 390, 281, 31));
        deposit_interest_capitalization->setFont(font4);
        deposit_interest_capitalization->setStyleSheet(QString::fromUtf8("  background-color:rgba(255, 255, 255, 0);\n"
"  color: white;\n"
""));
        label_14 = new QLabel(AnotherWindow2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(40, 270, 241, 61));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_14->setWordWrap(true);
        label_15 = new QLabel(AnotherWindow2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(450, 280, 31, 41));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_15->setWordWrap(true);
        label_16 = new QLabel(AnotherWindow2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(40, 320, 241, 61));
        label_16->setFont(font);
        label_16->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_16->setWordWrap(true);
        credit_duration_2 = new QComboBox(AnotherWindow2);
        credit_duration_2->addItem(QString());
        credit_duration_2->addItem(QString());
        credit_duration_2->addItem(QString());
        credit_duration_2->setObjectName(QString::fromUtf8("credit_duration_2"));
        credit_duration_2->setGeometry(QRect(480, 280, 221, 41));
        credit_duration_2->setMinimumSize(QSize(0, 0));
        credit_duration_2->setFont(font);
        credit_duration_2->setStyleSheet(QString::fromUtf8("QComboBox {\n"
"  background-color:white;\n"
"  color: black;\n"
"  border: 1px solid black;\n"
"}\n"
"\n"
"QComboBox::item:!selected {\n"
"    color:white;\n"
"}"));
        credit_duration_2->setMaxVisibleItems(10);
        credit_duration_2->setFrame(true);
        tableView = new QTableView(AnotherWindow2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 450, 661, 181));
        add_1 = new QPushButton(AnotherWindow2);
        add_1->setObjectName(QString::fromUtf8("add_1"));
        add_1->setGeometry(QRect(50, 640, 121, 31));
        add_1->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush3(QColor(255, 255, 255, 0));
        brush3.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush);
        palette2.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush);
#endif
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush3);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush);
#endif
        add_1->setPalette(palette2);
        add_1->setFont(font3);
        add_1->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"   background-color: rgba(255, 255, 255, 0);\n"
"  color: rgb(255, 255, 255);\n"
"  border:0px solid black;\n"
"}"));

        retranslateUi(AnotherWindow2);

        QMetaObject::connectSlotsByName(AnotherWindow2);
    } // setupUi

    void retranslateUi(QWidget *AnotherWindow2)
    {
        AnotherWindow2->setWindowTitle(QCoreApplication::translate("AnotherWindow2", "Form", nullptr));
        credit_duration->setItemText(0, QCoreApplication::translate("AnotherWindow2", "\320\273\320\265\321\202", nullptr));
        credit_duration->setItemText(1, QCoreApplication::translate("AnotherWindow2", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        label_3->setText(QCoreApplication::translate("AnotherWindow2", "\320\241\321\200\320\276\320\272 \321\200\320\260\320\267\320\274\320\265\321\211\320\265\320\275\320\270\321\217", nullptr));
        label_13->setText(QCoreApplication::translate("AnotherWindow2", "\321\200\321\203\320\261.", nullptr));
        label_2->setText(QCoreApplication::translate("AnotherWindow2", "\320\241\321\203\320\274\320\274\320\260 \320\262\320\272\320\273\320\260\320\264\320\260", nullptr));
        button_count->setText(QCoreApplication::translate("AnotherWindow2", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        label_6->setText(QCoreApplication::translate("AnotherWindow2", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_4->setText(QCoreApplication::translate("AnotherWindow2", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_8->setText(QCoreApplication::translate("AnotherWindow2", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        label_logo_name->setText(QCoreApplication::translate("AnotherWindow2", "Deposit calculator v.0.1", nullptr));
        label_9->setText(QCoreApplication::translate("AnotherWindow2", "%", nullptr));
        label_7->setText(QCoreApplication::translate("AnotherWindow2", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_10->setText(QCoreApplication::translate("AnotherWindow2", "\321\200\321\203\320\261.", nullptr));
        label_11->setText(QCoreApplication::translate("AnotherWindow2", "\321\200\321\203\320\261.", nullptr));
        label_12->setText(QCoreApplication::translate("AnotherWindow2", "\321\200\321\203\320\261.", nullptr));
        result_total->setText(QCoreApplication::translate("AnotherWindow2", "0", nullptr));
        result_percent->setText(QCoreApplication::translate("AnotherWindow2", "0", nullptr));
        result_month->setText(QCoreApplication::translate("AnotherWindow2", "0", nullptr));
        button_show_1->setText(QCoreApplication::translate("AnotherWindow2", "Back", nullptr));
        deposit_payment_frequency->setItemText(0, QCoreApplication::translate("AnotherWindow2", "\320\273\320\265\321\202", nullptr));
        deposit_payment_frequency->setItemText(1, QCoreApplication::translate("AnotherWindow2", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        deposit_interest_capitalization->setText(QCoreApplication::translate("AnotherWindow2", "\320\232\320\260\320\277\320\270\321\202\320\260\320\273\320\270\320\267\320\260\321\206\320\270\321\217 \320\277\321\200\320\276\321\206\320\265\320\275\321\202\320\276\320\262", nullptr));
        label_14->setText(QCoreApplication::translate("AnotherWindow2", "\320\235\320\260\320\273\320\276\320\263\320\276\320\262\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_15->setText(QCoreApplication::translate("AnotherWindow2", "%", nullptr));
        label_16->setText(QCoreApplication::translate("AnotherWindow2", "\320\237\320\265\321\200\320\270\320\276\320\264\320\270\321\207\320\275\320\276\321\201\321\202\321\214 \320\262\321\213\320\277\320\273\320\260\321\202", nullptr));
        credit_duration_2->setItemText(0, QCoreApplication::translate("AnotherWindow2", "\320\244\320\270\320\272\321\201\320\270\321\200\320\276\320\262\320\260\320\275\320\275\320\260\321\217", nullptr));
        credit_duration_2->setItemText(1, QCoreApplication::translate("AnotherWindow2", "\320\227\320\260\320\262\320\270\321\201\320\270\321\202 \320\276\321\202 \321\201\321\203\320\274\320\274\321\213", nullptr));
        credit_duration_2->setItemText(2, QCoreApplication::translate("AnotherWindow2", "\320\227\320\260\320\262\320\270\321\201\320\270\321\202 \320\276\321\202 \321\201\321\200\320\276\320\272\320\260", nullptr));

        add_1->setText(QCoreApplication::translate("AnotherWindow2", "+  \320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnotherWindow2: public Ui_AnotherWindow2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERWINDOW2_H
