/**
 * \file    mulTable.h
 * \brief   вывод на экран таблицы умножения
 * \author  DimaGov
 * \date    29.08.2019
 * \version 1.0
 */

#ifndef MULTABLE_H
#define MULTABLE_H

#include <QTextStream>
#include <QtDebug>

/// Первое число таблицы умножения
#define FIRST_NUM   1

/// Последнее число таблицы умножения
#define LAST_NUM    10

/// Вывод на экран консоли таблицы умножения
void displayTable();

#endif  /// mulTable.h
