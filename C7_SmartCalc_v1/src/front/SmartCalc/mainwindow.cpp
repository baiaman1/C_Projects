#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <iostream>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    pictHeight = 281;
    pictWidth = 381;
    step = 0.1;
    leftX = -100;
    rightX = 100;
    leftY = -100;
    rightY = 100;
    drawGraph();

    connect(ui->pushButton_0,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_1,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_2,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_3,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_4,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_5,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_6,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_7,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_8,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_9,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_minPlus,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_plus,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_minus,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_mult,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_mod,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_dot,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->del,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->bracket_open,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->bracket_close,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_sin,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_cos,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_tan,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_asin,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_acos,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_atan,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_ln,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_log,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->pushButton_sqrt,SIGNAL(clicked()), this, SLOT(dig_num()));

    connect(ui->value_x,SIGNAL(clicked()), this, SLOT(dig_num()));
    connect(ui->xSpinBox, SIGNAL(clicked()), this, SLOT(on_eq_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::dig_num()
{
    QPushButton *button = (QPushButton*)sender();
    QString text_label = (ui->res_label->text());
    QString new_label = (text_label + button->text());
    if (text_label != "ERROR!") {
        if (button->text() == "sin()") {
            new_label = (text_label + "sin(");
        } else if (button->text() == "cos()") {
            new_label = (text_label + "cos(");
        } else if (button->text() == "tan()") {
            new_label = (text_label + "tan(");
        } else if (button->text() == "asin()") {
            new_label = (text_label + "asin(");
        } else if (button->text() == "acos()") {
            new_label = (text_label + "acos(");
        } else if (button->text() == "atan()") {
            new_label = (text_label + "atan(");
        } else if (button->text() == "log()") {
            new_label = (text_label + "log(");
        } else if (button->text() == "ln()") {
            new_label = (text_label + "ln(");
        } else if (button->text() == "sqrt()") {
            new_label = (text_label + "sqrt(");
        } else if (button->text() == "×") {
            new_label = (text_label + "*");
        }
       else if (button->text() == "+/-") {
            if(text_label != ""){
                std::string str = text_label.toStdString();
                char* cstr = new char[str.length() + 1];
                strcpy(cstr, str.c_str());
                char* new_cstr = unary(cstr);
                std::string res_str(new_cstr);
                QString label = QString::fromStdString(res_str);
                new_label = label;
                free(new_cstr);
                delete[] cstr;
            } else {
                new_label = (text_label + "");
            }

       }

        ui->res_label->setText(new_label);
    } else {
        on_pushButton_clear_clicked();
        dig_num();
    }
}

void MainWindow::on_eq_clicked()
{
    // std::cout << "111\n";
    QString input = ui->res_label->text();
    std::string str = input.toStdString();
    char* cstr = new char[str.length() + 1];
    strcpy(cstr, str.c_str());
    QByteArray strx = ui->xSpinBox->text().toLocal8Bit();
    char* x_val = strx.data();
    // std::cout << "118\n";
    char* new_cstr = replace_x(cstr, x_val);
    // std::cout << "120\n";
    calculate(new_cstr);
    // std::cout << "122\n";
    std::string res_str(new_cstr);
    QString label = QString::fromStdString(res_str);
    ui->res_label->setText(label);
    free(new_cstr);
    delete[] cstr;
}

void MainWindow::on_pow_clicked()
{
    ui->res_label->setText(ui->res_label->text() + "^");
}

void MainWindow::on_pushButton_clear_clicked()
{
    ui->res_label->setText(ui->res_label->text() = "");
}

// -------DRAWWWWW-GRAFFFFFFFFFF-------------------------------------
void MainWindow::on_pushButton_draw_clicked()
{
    getData();
    recountPixels();
    drawGraph(1);
}

void MainWindow::getData() {
    leftX = ui->xMin->value();
    rightX = ui->xMax->value();
    leftY = ui->yMin->value();
    rightY = ui->yMax->value();
    if (leftX >= rightX) {
        leftX = -10;
        rightX = 10;
        ui->xMin->setValue(-10);
        ui->xMax->setValue(-10);
    }
    if (leftY >= rightY) {
        leftY = -10;
        rightY = 10;
        ui->yMin->setValue(-10);
        ui->yMax->setValue(-10);
    }
}

void MainWindow::recountPixels() {
  onePixelX = 381.0 / (rightX - leftX);
  onePixelY = 281.0 / (rightY - leftY);
  Ox = fabs(leftX);
  Oy = rightY;
}

void MainWindow::drawGraph(bool notEmpty) {
  char c_str2[256] = {0};
  pictHeight = 281;
  pictWidth = 381;
  QPixmap graph(381, 281);
  QPainter paint;
  paint.begin(&graph);
  paint.eraseRect(0, 0, 381, 281);
  paint.drawLine(Ox * onePixelX, 0, Ox * onePixelX,
                 pictHeight);
  paint.drawLine(0, Oy * onePixelY, pictWidth, Oy * onePixelY);
  paint.setPen(QPen(Qt::black,3));

  for(double i = leftX;i<=rightX;i+=10.0)
      paint.drawPoint((i+Ox)*onePixelX,Oy*onePixelY);
  for(double i = leftY;i<=rightY;i+=10.0)
      paint.drawPoint(Ox*onePixelX,(i+Oy)*onePixelY);
  QPainterPath path;
  double step = (rightX - leftX) * 0.001;
  for (double x = leftX; x <= rightX; x += step) {
      QByteArray ba = ui->res_label->text().toLocal8Bit();
      char* c_str = ba.data();
      sprintf(c_str2, "%.3f", x);
      char* result = replace_x(c_str, c_str2);
      calculate(result);
      double y = atof(result);
      y = y * (-1.0);
      paint.drawPoint((x + Ox) * onePixelX, (y + Oy) * onePixelY );
      paint.setPen(QPen(Qt::blue,2, Qt::SolidLine));
      paint.drawPath(path);
  }
  paint.end();
  ui->drawing_field->setPixmap(graph);

  return;
}


