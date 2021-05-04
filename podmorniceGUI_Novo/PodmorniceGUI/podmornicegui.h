#ifndef PODMORNICEGUI_H
#define PODMORNICEGUI_H

#include <QMainWindow>


namespace Ui {
class PodmorniceGUI;
}

class PodmorniceGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit PodmorniceGUI(QWidget *parent = 0);
    ~PodmorniceGUI();



private slots:
    void on_postavi_clicked();

private:
    Ui::PodmorniceGUI *ui;
};


#endif // PODMORNICEGUI_H
