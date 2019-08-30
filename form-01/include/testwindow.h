/**
 * \file    testwindow.h
 * \brief   основная форма, заголовочный файл
 * \author  DimaGov
 * \date    30.08.2019
 * \version 1.0
 */

#ifndef TESTWINDOW_H
#define TESTWINDOW_H

#include <QMainWindow>
#include <math.h>

/// Скорость света [м/с]
#define SPEED_OF_LIGHT 299792458;

// ----------------------------------------------
// Класс для GUI формы
// ----------------------------------------------
namespace Ui {
    class testWindow;
}

// ----------------------------------------------
// Класс формы, типа QMainWindow
// ----------------------------------------------
class testWindow : public QMainWindow {
    Q_OBJECT

public:
    explicit testWindow(QWidget *parent = nullptr);
    ~testWindow();

public slots:
    /// Подпрограмма для события нажатия на кнопку "Рассчитать"
    void pBtn_push_click();

private:
    Ui::testWindow *ui;
};

#endif // TESTWINDOW_H
