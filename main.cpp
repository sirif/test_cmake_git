#include <iostream>
#include <QtCore>
#include <QDebug>
#include <QApplication>
#include "main_widget/mainwidget.h"

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);
    //cout << "Hello World!" << endl;
//    qDebug() << "fake";
    MainWidget mw;
    mw.show();
    return a.exec();
}
