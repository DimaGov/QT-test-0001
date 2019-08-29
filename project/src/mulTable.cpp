/**
 * \file    mulTable.cpp
 * \brief   вывод на экран таблицы умножения
 * \author  DimaGov
 * \date    29.08.2019
 * \version 1.0
 */

#include "../include/mulTable.h"

// ----------------------------------------------
// Вывод таблицы умножения на экран консоли
// ----------------------------------------------
void displayTable() {
    for(int8_t i_ = FIRST_NUM; i_ <= LAST_NUM; ++i_) {
        for(int8_t j_ = FIRST_NUM; j_ <= LAST_NUM; ++j_) {
            qDebug() << i_ << "*" << j_ << "=" << i_ * j_;
        }
        qDebug() << "// ----------------- //";
    }
}
