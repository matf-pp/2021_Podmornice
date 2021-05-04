#ifndef GUBITAK_H
#define GUBITAK_H

#include <QDialog>

namespace Ui {
class Gubitak;
}

class Gubitak : public QDialog
{
    Q_OBJECT

public:
    explicit Gubitak(QWidget *parent = 0);
    ~Gubitak();

private:
    Ui::Gubitak *ui;
};

#endif // GUBITAK_H
