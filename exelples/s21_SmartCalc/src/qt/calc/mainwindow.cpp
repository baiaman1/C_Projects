#include "mainwindow.h"
#include "./ui_mainwindow.h"

double num_first;
double line_len = 15;
QString full_operation;
double equal_operation_pressed = 0;

double width_w = 710;
double height_w = 550;

int total_str = 0;

int is_it_time();

MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow){
    ui->setupUi(this);

    connect(ui->button_0,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_1,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_2,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_3,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_4,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_5,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_6,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_7,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_8,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_9,SIGNAL(clicked()),this,SLOT(digits_numbers()));
    connect(ui->button_x,SIGNAL(clicked()),this,SLOT(digits_numbers()));

    connect(ui->button_minus_un,SIGNAL(clicked()),this,SLOT(operations()));

    connect(ui->button_plus,SIGNAL(clicked()),this,SLOT(math_operations2()));
    connect(ui->button_minus,SIGNAL(clicked()),this,SLOT(math_operations2()));
    connect(ui->button_mul,SIGNAL(clicked()),this,SLOT(math_operations2()));
    connect(ui->button_div,SIGNAL(clicked()),this,SLOT(math_operations2()));
    connect(ui->button_exp,SIGNAL(clicked()),this,SLOT(math_operations2()));
    connect(ui->button_mod,SIGNAL(clicked()),this,SLOT(math_operations2()));

    connect(ui->button_sqrt,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_ln,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_log,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_sin,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_cos,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_tan,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_asin,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_acos,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_atan,SIGNAL(clicked()),this,SLOT(math_operations()));
    connect(ui->button_br_left,SIGNAL(clicked()),this,SLOT(math_operations2()));
    connect(ui->button__br_right,SIGNAL(clicked()),this,SLOT(math_operations2()));


  //==================
    pictHeight = height_w;
    pictWidth = width_w;
    step = 0.1;
    leftX = -10; rightX = 10;
    leftY = -10; rightY = 10;
    drawGraph();
  //==================

        ui->label_scale_x->setText("");

  // ====================

  // Initialize the second window
    sWindow = new AnotherWindow();
  // connected to the slot start the main window on the button in the second window
    connect(sWindow, &AnotherWindow::firstWindow, this, &MainWindow::show);

  // Initialize the second window
    tWindow = new AnotherWindow2();
  // connected to the slot start the main window on the button in the second window
    connect(tWindow, &AnotherWindow2::firstWindow2, this, &MainWindow::show);

  // ====================


}

MainWindow::~MainWindow(){
    delete ui;
}



//==================
double MainWindow::f1(double x) {
    QByteArray str = ui->result_show_full->text().toLocal8Bit();
    char buffer[256] = {0};
    strcpy(buffer, str.data());
    double res = s21_calculateResult(buffer, x);
    return res*(-1);
}

// вычисляем середину экрана и количество пикселей на шаг
void MainWindow::recountPixels() {
    onePixelX = width_w/(rightX-leftX);
    onePixelY = height_w/(rightY-leftY);
    Ox = fabs(leftX); Oy = rightY;
}

void MainWindow::getData() {
    leftX = ui->inputLeftX->text().toDouble();
    rightX = ui->inputRightX->text().toDouble();
    leftY = ui->inputLeftY->text().toDouble();
    rightY = ui->inputRightY->text().toDouble();
    step = 10.0/1000.0; // и шаг
}

void MainWindow::drawGraph(bool notEmpty) {
    QPixmap graph(width_w, height_w); // создаем саму картинку
    QPainter paint;

    paint.begin(&graph);
    paint.eraseRect(0, 0, width_w, height_w);
    paint.drawLine(Ox*onePixelX, 0, Ox*onePixelX, pictHeight); // и рисуем координатные оси
    paint.drawLine(0, Oy*onePixelY, pictWidth, Oy*onePixelY);

    double scale_x = (fabs(rightX) + fabs(leftX)) / 2;
    double scale_y = (fabs(rightY) + fabs(leftY)) / 2;
    QString new_x_tmp = QString::number(scale_y, 'g', line_len);
    if (scale_x >= scale_y) {
        new_x_tmp = QString::number(scale_x, 'g', line_len);
    }
    if ((rightX || leftX) && (rightY || leftY)) {
        ui->label_scale_x->setText("Scale 1 : " + new_x_tmp);
    }

    paint.setPen(QPen(Qt::black, 3));
    for(double i = leftX; i <= rightX; i += 1.0) // рисуем черточки на координатой оси
        paint.drawPoint((i + Ox)*onePixelX, Oy*onePixelY);

    for(double i = leftY; i <= rightY; i += 1.0)
        paint.drawPoint(Ox*onePixelX, (i+Oy)*onePixelY);

    // отображаем координатную ось
    if(!notEmpty) {
        paint.end();
        ui->outputGraph->setPixmap(graph);
        return;
    }

    paint.setPen(QPen(Qt::green, 1, Qt::SolidLine));
    paint.setRenderHint(QPainter::Antialiasing, true); // задаем параметры рендеринга
    QPainterPath path,p[3]; // QPainterPath означаем, что мы вначале занесем все необходимые точки, а затем соединим их
    bool first[4] = {1, 1, 1, 1}; // узнаем первая ли точка, или надо сдвигаться


    // проходимся по всем точкам графика, проверяем, существует ли функция в данной точке, и если существует -- заносим точку в массив отрисовки
    for(double i = (double)leftX + step; i <= (double)rightX; i += step) {
        if(!isnan(f1(i))) {
            if(first[1]) {
                p[0].moveTo((i+Ox)*onePixelX, (f1(i)+Oy)*onePixelY);
                first[1] = false;
            } else {
                p[0].lineTo((i+Ox)*onePixelX, (f1(i)+Oy)*onePixelY);
            }
            paint.setPen(QPen(Qt::red, 2));
            paint.drawPoint((i+Ox)*onePixelX, (f1(i)+Oy)*onePixelY);
        }
        else {
            first[1] = true;
        }
    }


//    // задаем нужный цвет и отрисовываем с помощью функции drawPath()
//    paint.setPen(QPen(Qt::red, 1.5, Qt::SolidLine));
//    paint.drawPath(p[0]);

    paint.end();
    ui->outputGraph->setPixmap(graph);
    return;
}

void MainWindow::on_clear_clicked() {
    recountPixels();
    drawGraph();
    ui->label_scale_x->setText("");
}

void MainWindow::on_draw_clicked() {
    getData();
    recountPixels();
    drawGraph(1);
}
//==================


void MainWindow::digits_numbers(){
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_res;

    if(equal_operation_pressed){
        ui->result_show->setText("0");
        equal_operation_pressed = 0;
    }

    if(ui->result_show->text().contains(".") && button->text() == "0") {
        new_res = ui->result_show->text() + button->text();
    } else {
        all_numbers = (ui->result_show->text() + button->text()).toDouble();
        new_res = QString::number(all_numbers, 'g', line_len);
    }

    ui->result_show->setText(new_res);


    total_str = ui->result_show_full->text().size();
    is_it_time();


    full_operation += button->text();
    ui->result_show_full->setText(full_operation);
}

void MainWindow::on_button_dot_clicked(){
    if(equal_operation_pressed){
        ui->result_show->setText("0");
        equal_operation_pressed = 0;
    }

    if(!(ui->result_show->text().contains('.'))) {
        ui->result_show->setText(ui->result_show->text() + '.');

        full_operation = ui->result_show_full->text() + '.';
        ui->result_show_full->setText(full_operation);
    }
}

void MainWindow::operations(){
    QPushButton *button = (QPushButton *)sender();
    double all_numbers;
    QString new_res;

    if(button->text() == "+/-"){
        double num_len_before = ui->result_show->text().size();
        all_numbers = (ui->result_show->text()).toDouble();
        if (all_numbers < 0) {
            new_res = '(' + new_res + ')';
            num_len_before += 2;
        }

        all_numbers = all_numbers * -1;
        new_res = QString::number(all_numbers, 'g', line_len);
        ui->result_show->setText(new_res);

        QString last_str_1 = ui->result_show_full->text();
        last_str_1.resize(last_str_1.size() - num_len_before);

        full_operation = last_str_1;
        ui->result_show_full->setText(full_operation);

        if (all_numbers < 0) {
            new_res = '(' + new_res + ')';
        }

        total_str = ui->result_show_full->text().size();
        is_it_time();

        full_operation += new_res;
        ui->result_show_full->setText(full_operation);
    }

}

void MainWindow::math_operations(){
    QPushButton *button = (QPushButton *)sender();

    num_first = ui->result_show->text().toDouble();
    ui->result_show->setText("");
    button->setChecked(true);

    total_str = ui->result_show_full->text().size();
    is_it_time();


    full_operation += button->text() + '(';
    ui->result_show_full->setText(full_operation);

}

void MainWindow::math_operations2(){
    QPushButton *button = (QPushButton *)sender();

    num_first = ui->result_show->text().toDouble();
    ui->result_show->setText("");
    button->setChecked(true);

    total_str = ui->result_show_full->text().size();
    is_it_time();

    full_operation += button->text();
    ui->result_show_full->setText(full_operation);
}

void MainWindow::on_button_del_total_clicked(){
    ui->result_show->setText("0");
    ui->result_show_full->setText("0");
    full_operation = "";
}

void MainWindow::on_button_del_clicked() {
    QString last_str = ui->result_show->text();
    last_str.resize(last_str.size()-1);
    ui->result_show->setText(last_str);


    QString last_str_1 = ui->result_show_full->text();
    last_str_1.resize(last_str_1.size()-1);
    full_operation = last_str_1;
    ui->result_show_full->setText(full_operation);
}

void MainWindow::on_button_eq_clicked(){
    double labelNumber, num_second;
    QString new_res;
    QString new_tmp;

    QByteArray str = ui->result_show_full->text().toLocal8Bit();
    char buffer[256] = {0};
    strcpy(buffer, str.data());

    double err_inp = s21_validate(buffer);
    if (err_inp == 0) {
        double res = s21_calculateResult(buffer, ui->value_x->value());
        new_tmp = QString::number(res, 'g', line_len);
    } else {
        new_tmp = "Error";
    }

    ui->result_show_eq->setText(new_tmp);
    num_first = 0;

    equal_operation_pressed = 1;
}



//void MainWindow::on_button_show_1_clicked() {
//    statusBar()->showMessage("show");

//    sWindow->show();  // Show a second window
//    this->close();    // Close the main window
//}

//void MainWindow::on_button_show_2_clicked() {
//    tWindow->show();  // Show a third window
//    this->close();    // Close the main window
//}

void MainWindow::on_actionGo_to_Credit_calc_triggered() {
    sWindow->show();  // Show a second window
    this->close();    // Close the main window
}

void MainWindow::on_button_show_graph_clicked() {
    ui->button_show_graph->hide();
    this->setGeometry(this->geometry().x(), this->geometry().y(), this->maximumWidth(), this->maximumHeight());
}

void MainWindow::on_button_hide_graph_clicked() {
    ui->button_show_graph->show();
    this->setGeometry(this->geometry().x(), this->geometry().y(), this->maximumWidth(), this->minimumHeight());
}

int is_it_time(){
    int res = 0;
    if ((total_str % 50) == 0) {
        res = 1;
        full_operation += " ";
    }
    return res;
}
