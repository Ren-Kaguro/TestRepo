#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.setWindowTitle("Hello Github");
    w.show();
    w.resize(800,600);
    //Sziasztok nagyvilág mizuka van adjatok anekdotát csírááááák ye
    //kurvajogec xd
    return a.exec();
}
