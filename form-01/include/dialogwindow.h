/**
 * \file    dialogwindow.h
 * \brief   заголовочный файл диалогового окна "О программе"
 * \author  DimaGov
 * \date    30.08.2019
 * \version 1.0
 */

#ifndef DIALOGWINDOW_H
#define DIALOGWINDOW_H

#include <QDialog>

namespace Ui {
class dialogWindow;
}

class dialogWindow : public QDialog
{
    Q_OBJECT

public:
    explicit dialogWindow(QWidget *parent = nullptr);
    ~dialogWindow();

private:
    Ui::dialogWindow *ui;
};

#endif // DIALOGWINDOW_H
