#include <QApplication>
#include "drawgrafic.h"


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    DrawGrafic d;
    d.resize(800, 700);
    d.show();

    return a.exec();
}
