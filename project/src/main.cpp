#include <QtCore/QCoreApplication>
#include <QTextStream>
#include <QTextCodec>
#include <math.h>

// ----------------------------------------------
// Точка входа в программу
// ----------------------------------------------
int main(int argc, char *argv[])
{
    QTextStream cout(stdout);
    QCoreApplication a(argc, argv);

    int8_t a_ = 5, b_ = 5, c_ = 5;

    cout.setCodec("CP866");
    cout << QString::fromUtf8("ABC!\nАБВ!\n\n");
    cout << a_ + b_ + c_ << '\t' << a_ * b_ - c_ << '\t' << sqrt(a_) << endl << endl;

    for (int8_t i_ = 1; i_ <= 10; i_++) {
        cout << "2 x " << i_ << " = " << 2 * i_ << endl;
    }

    return 0;
}
