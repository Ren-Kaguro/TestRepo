#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Hello Github");
    w.show();
    w.resize(800,600);
    return a.exec();
}
