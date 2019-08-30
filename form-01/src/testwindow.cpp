/**
 * \file    testwindow.cpp
 * \brief   основная форма(программа рассчета относительности промежутков времени)
 * \author  DimaGov
 * \date    30.08.2019
 * \version 1.0
 */

#include "../include/testwindow.h"
#include "ui_testwindow.h"

// ----------------------------------------------
// Конструктор формы
// ----------------------------------------------
testWindow::testWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::testWindow)
{
    ui->setupUi(this);
    ui->pBtn_push->setText("Рассчитать");
    ui->lbl_time->setText("Время");
    ui->lbl_speed->setText("Скорость");

    connect(ui->pBtn_push, SIGNAL(clicked()), this, SLOT(pBtn_push_click()));
}

// ----------------------------------------------
// Деструктор формы
// ----------------------------------------------
testWindow::~testWindow()
{
    delete ui;
}

// ----------------------------------------------
// Событие нажатия на кнопку "Рассчитать"
// ----------------------------------------------
void testWindow::pBtn_push_click() {
    double speed  = ui->dblSpinBox_speed->value();
    double time   = ui->dblSpinBox_time ->value();

    qint32 c = SPEED_OF_LIGHT;

    double result = time / (sqrt(1 - (speed * speed) / (c * c)));

    ui->txtEdit_result->setText(QString::number(result));
}

// ----------------------------------------------
// Событие нажатия на кнопку "О программе"
// ----------------------------------------------
void testWindow::on_action_triggered() {
    dialogWindow myDialog(this);
    myDialog.setModal(true);
    myDialog.exec();
}
