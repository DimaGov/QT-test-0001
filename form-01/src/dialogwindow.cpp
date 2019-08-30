/**
 * \file    dialogwindow.cpp
 * \brief   файл кода диалогового окна "О программе"
 * \author  DimaGov
 * \date    30.08.2019
 * \version 1.0
 */


#include "../include/dialogwindow.h"
#include "ui_dialogwindow.h"

// ----------------------------------------------
// Конструктор формы
// ----------------------------------------------
dialogWindow::dialogWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogWindow)
{
    ui->setupUi(this);
}

// ----------------------------------------------
// Деструктор формы
// ----------------------------------------------
dialogWindow::~dialogWindow()
{
    delete ui;
}
