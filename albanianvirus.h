#ifndef ALBANIANVIRUS_H
#define ALBANIANVIRUS_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class albanianVirus; }
QT_END_NAMESPACE

class albanianVirus : public QMainWindow
{
    Q_OBJECT

public:
    albanianVirus(QWidget *parent = nullptr);
    ~albanianVirus();

private:
    Ui::albanianVirus *ui;
};
#endif // ALBANIANVIRUS_H
