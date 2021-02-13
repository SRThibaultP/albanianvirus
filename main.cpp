#include "albanianvirus.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    albanianVirus w;
    w.show();
    return a.exec();
}
