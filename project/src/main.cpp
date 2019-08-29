/**
 * \file    main.h
 * \brief   основной файл программы(точка входа в программу)
 * \author  DimaGov
 * \date    29.08.2019
 * \version 1.0
 */


#include <QtCore/QCoreApplication>
#include <QTextStream>

#include "../include/mulTable.h"

// ----------------------------------------------
// Точка входа в программу
// ----------------------------------------------
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    displayTable();

    return a.exec();
}
