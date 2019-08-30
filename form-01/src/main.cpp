/**
 * \file    main.cpp
 * \brief   основная форма, точка входа в программу
 * \author  DimaGov
 * \date    30.08.2019
 * \version 1.0
 */

#include "../include/testwindow.h"
#include <QApplication>

// ----------------------------------------------
// Точка входа в программу
// ----------------------------------------------
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    testWindow w;
    w.show();

    return a.exec();
}
