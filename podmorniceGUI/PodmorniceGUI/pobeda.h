#ifndef POBEDA_H
#define POBEDA_H

#include <QDialog>

namespace Ui {
class Pobeda;
}

class Pobeda : public QDialog
{
    Q_OBJECT

public:
    explicit Pobeda(QWidget *parent = 0);
    ~Pobeda();

private:
    Ui::Pobeda *ui;
};

#endif // POBEDA_H
