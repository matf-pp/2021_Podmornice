#include "podmornicegui.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PodmorniceGUI w;
    w.show();

    return a.exec();
}
