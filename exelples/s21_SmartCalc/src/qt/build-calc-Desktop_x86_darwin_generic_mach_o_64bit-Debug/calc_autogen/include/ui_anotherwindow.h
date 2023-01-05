/********************************************************************************
** Form generated from reading UI file 'anotherwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANOTHERWINDOW_H
#define UI_ANOTHERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnotherWindow
{
public:
    QLabel *label_logo_name;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QSpinBox *credit_total_value;
    QSpinBox *credit_duration_value;
    QRadioButton *credit_type_annuity;
    QRadioButton *credit_type_diff;
    QPushButton *button_show_1;
    QPushButton *button_count;
    QComboBox *credit_duration;
    QLabel *result_month;
    QLabel *label_11;
    QLabel *result_percent;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *result_total;
    QDoubleSpinBox *credit_percent_value;

    void setupUi(QWidget *AnotherWindow)
    {
        if (AnotherWindow->objectName().isEmpty())
            AnotherWindow->setObjectName(QString::fromUtf8("AnotherWindow"));
        AnotherWindow->resize(741, 713);
        AnotherWindow->setStyleSheet(QString::fromUtf8("background-color: rgba(46, 47, 51, 204);"));
        label_logo_name = new QLabel(AnotherWindow);
        label_logo_name->setObjectName(QString::fromUtf8("label_logo_name"));
        label_logo_name->setGeometry(QRect(260, 30, 241, 61));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        font.setItalic(true);
        label_logo_name->setFont(font);
        label_logo_name->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  color: orange;\n"
"}\n"
""));
        label_logo_name->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(AnotherWindow);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(40, 130, 181, 41));
        QFont font1;
        font1.setPointSize(18);
        label_2->setFont(font1);
        label_2->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_3 = new QLabel(AnotherWindow);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(40, 180, 181, 41));
        label_3->setFont(font1);
        label_3->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_4 = new QLabel(AnotherWindow);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(40, 230, 181, 41));
        label_4->setFont(font1);
        label_4->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_5 = new QLabel(AnotherWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(40, 280, 241, 61));
        label_5->setFont(font1);
        label_5->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_5->setWordWrap(true);
        label_6 = new QLabel(AnotherWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(40, 500, 241, 41));
        label_6->setFont(font1);
        label_6->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_6->setWordWrap(true);
        label_7 = new QLabel(AnotherWindow);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(40, 550, 241, 41));
        label_7->setFont(font1);
        label_7->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_7->setWordWrap(true);
        label_8 = new QLabel(AnotherWindow);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(40, 600, 241, 41));
        label_8->setFont(font1);
        label_8->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color:white\n"
"}\n"
""));
        label_8->setWordWrap(true);
        label_9 = new QLabel(AnotherWindow);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(580, 230, 31, 41));
        label_9->setFont(font1);
        label_9->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_9->setWordWrap(true);
        label_10 = new QLabel(AnotherWindow);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(580, 130, 41, 41));
        label_10->setFont(font1);
        label_10->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_10->setWordWrap(true);
        credit_total_value = new QSpinBox(AnotherWindow);
        credit_total_value->setObjectName(QString::fromUtf8("credit_total_value"));
        credit_total_value->setGeometry(QRect(310, 130, 251, 41));
        credit_total_value->setFont(font1);
        credit_total_value->setStyleSheet(QString::fromUtf8("  background-color:white;\n"
"  color: black;\n"
"  border: 1px solid black;\n"
"  padding-left:4px;\n"
""));
        credit_total_value->setMaximum(1000000000);
        credit_duration_value = new QSpinBox(AnotherWindow);
        credit_duration_value->setObjectName(QString::fromUtf8("credit_duration_value"));
        credit_duration_value->setGeometry(QRect(310, 180, 251, 41));
        credit_duration_value->setFont(font1);
        credit_duration_value->setStyleSheet(QString::fromUtf8("  background-color:white;\n"
"  color: black;\n"
"  border: 1px solid black;\n"
"  padding-left:4px;\n"
""));
        credit_duration_value->setMaximum(50);
        credit_type_annuity = new QRadioButton(AnotherWindow);
        credit_type_annuity->setObjectName(QString::fromUtf8("credit_type_annuity"));
        credit_type_annuity->setGeometry(QRect(320, 290, 261, 31));
        credit_type_annuity->setFont(font1);
        credit_type_annuity->setStyleSheet(QString::fromUtf8("  background-color:rgba(255, 255, 255, 0);\n"
"  color: white;\n"
""));
        credit_type_annuity->setChecked(true);
        credit_type_diff = new QRadioButton(AnotherWindow);
        credit_type_diff->setObjectName(QString::fromUtf8("credit_type_diff"));
        credit_type_diff->setGeometry(QRect(320, 320, 261, 31));
        credit_type_diff->setFont(font1);
        credit_type_diff->setStyleSheet(QString::fromUtf8("  background-color:rgba(255, 255, 255, 0);\n"
"  color: white;\n"
""));
        button_show_1 = new QPushButton(AnotherWindow);
        button_show_1->setObjectName(QString::fromUtf8("button_show_1"));
        button_show_1->setGeometry(QRect(30, 30, 81, 41));
        button_show_1->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(77, 78, 84, 255));
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
        button_show_1->setPalette(palette);
        QFont font2;
        font2.setPointSize(18);
        font2.setBold(false);
        button_show_1->setFont(font2);
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
        button_count = new QPushButton(AnotherWindow);
        button_count->setObjectName(QString::fromUtf8("button_count"));
        button_count->setGeometry(QRect(320, 400, 231, 51));
        button_count->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush2(QColor(221, 153, 59, 255));
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
        button_count->setPalette(palette1);
        QFont font3;
        font3.setPointSize(18);
        font3.setBold(true);
        button_count->setFont(font3);
        button_count->setStyleSheet(QString::fromUtf8("QPushButton{\n"
"  background-color:rgb(221, 153, 59);\n"
"  color: rgb(255, 255, 255);\n"
"  border: 1px solid black;\n"
"}\n"
"QPushButton:pressed{\n"
"  background-color: qlineargradient(x1:0, y1:0, x2:1, y2:1, \n"
"													  stop:0 #dadbde, stop: 1 #f6f7fa );\n"
"}"));
        credit_duration = new QComboBox(AnotherWindow);
        credit_duration->addItem(QString());
        credit_duration->addItem(QString());
        credit_duration->setObjectName(QString::fromUtf8("credit_duration"));
        credit_duration->setGeometry(QRect(570, 180, 131, 41));
        credit_duration->setMinimumSize(QSize(0, 0));
        credit_duration->setFont(font1);
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
        result_month = new QLabel(AnotherWindow);
        result_month->setObjectName(QString::fromUtf8("result_month"));
        result_month->setGeometry(QRect(320, 500, 251, 41));
        result_month->setFont(font1);
        result_month->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;\n"
"padding-left:4px;"));
        result_month->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_11 = new QLabel(AnotherWindow);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(590, 500, 41, 41));
        label_11->setFont(font1);
        label_11->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_11->setWordWrap(true);
        result_percent = new QLabel(AnotherWindow);
        result_percent->setObjectName(QString::fromUtf8("result_percent"));
        result_percent->setGeometry(QRect(320, 550, 251, 41));
        result_percent->setFont(font1);
        result_percent->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;\n"
"padding-left:4px;"));
        result_percent->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_12 = new QLabel(AnotherWindow);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(590, 550, 41, 41));
        label_12->setFont(font1);
        label_12->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_12->setWordWrap(true);
        label_13 = new QLabel(AnotherWindow);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(590, 600, 41, 41));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("QLabel{\n"
"  background-color: rgba(255, 255, 255, 0);\n"
"  color: white\n"
"}\n"
""));
        label_13->setWordWrap(true);
        result_total = new QLabel(AnotherWindow);
        result_total->setObjectName(QString::fromUtf8("result_total"));
        result_total->setGeometry(QRect(320, 600, 251, 41));
        result_total->setFont(font1);
        result_total->setStyleSheet(QString::fromUtf8("border: 1px solid gray;\n"
"background-color: white;\n"
"padding-left:4px;"));
        result_total->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        credit_percent_value = new QDoubleSpinBox(AnotherWindow);
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

        retranslateUi(AnotherWindow);

        QMetaObject::connectSlotsByName(AnotherWindow);
    } // setupUi

    void retranslateUi(QWidget *AnotherWindow)
    {
        AnotherWindow->setWindowTitle(QCoreApplication::translate("AnotherWindow", "Form", nullptr));
        label_logo_name->setText(QCoreApplication::translate("AnotherWindow", "Credit calculator v.0.1", nullptr));
        label_2->setText(QCoreApplication::translate("AnotherWindow", "\320\241\321\203\320\274\320\274\320\260 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_3->setText(QCoreApplication::translate("AnotherWindow", "\320\241\321\200\320\276\320\272 \320\272\321\200\320\265\320\264\320\270\321\202\320\260", nullptr));
        label_4->setText(QCoreApplication::translate("AnotherWindow", "\320\237\321\200\320\276\321\206\320\265\320\275\321\202\320\275\320\260\321\217 \321\201\321\202\320\260\320\262\320\272\320\260", nullptr));
        label_5->setText(QCoreApplication::translate("AnotherWindow", "\320\242\320\270\320\277 \320\265\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\321\205 \320\277\320\273\320\260\321\202\320\265\320\266\320\265\320\271", nullptr));
        label_6->setText(QCoreApplication::translate("AnotherWindow", "\320\225\320\266\320\265\320\274\320\265\321\201\321\217\321\207\320\275\321\213\320\271 \320\277\320\273\320\260\321\202\320\265\320\266", nullptr));
        label_7->setText(QCoreApplication::translate("AnotherWindow", "\320\237\320\265\321\200\320\265\320\277\320\273\320\260\321\202\320\260 \320\277\320\276 \320\272\321\200\320\265\320\264\320\270\321\202\321\203", nullptr));
        label_8->setText(QCoreApplication::translate("AnotherWindow", "\320\236\320\261\321\211\320\260\321\217 \320\262\321\213\320\277\320\273\320\260\321\202\320\260", nullptr));
        label_9->setText(QCoreApplication::translate("AnotherWindow", "%", nullptr));
        label_10->setText(QCoreApplication::translate("AnotherWindow", "\321\200\321\203\320\261.", nullptr));
        credit_type_annuity->setText(QCoreApplication::translate("AnotherWindow", "\320\220\320\275\320\275\321\203\320\270\321\202\320\265\321\202\320\275\321\213\320\265", nullptr));
        credit_type_diff->setText(QCoreApplication::translate("AnotherWindow", "\320\224\320\270\321\204\321\204\320\265\321\200\320\265\320\275\321\206\320\270\321\200\320\276\320\262\320\260\320\275\320\275\321\213\320\265", nullptr));
        button_show_1->setText(QCoreApplication::translate("AnotherWindow", "Back", nullptr));
        button_count->setText(QCoreApplication::translate("AnotherWindow", "\320\240\320\220\320\241\320\241\320\247\320\230\320\242\320\220\320\242\320\254", nullptr));
        credit_duration->setItemText(0, QCoreApplication::translate("AnotherWindow", "\320\273\320\265\321\202", nullptr));
        credit_duration->setItemText(1, QCoreApplication::translate("AnotherWindow", "\320\274\320\265\321\201\321\217\321\206\320\265\320\262", nullptr));

        result_month->setText(QCoreApplication::translate("AnotherWindow", "0", nullptr));
        label_11->setText(QCoreApplication::translate("AnotherWindow", "\321\200\321\203\320\261.", nullptr));
        result_percent->setText(QCoreApplication::translate("AnotherWindow", "0", nullptr));
        label_12->setText(QCoreApplication::translate("AnotherWindow", "\321\200\321\203\320\261.", nullptr));
        label_13->setText(QCoreApplication::translate("AnotherWindow", "\321\200\321\203\320\261.", nullptr));
        result_total->setText(QCoreApplication::translate("AnotherWindow", "0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnotherWindow: public Ui_AnotherWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANOTHERWINDOW_H
