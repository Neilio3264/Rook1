#include "blackstone.h"

#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Blackstone w;
    w.addUser("kendal", "password");
    //QPushButton q;
    w.show();
    //w.show();


    return a.exec();
}
