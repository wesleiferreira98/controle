#include "mainwindow.h"
#include <QApplication>
#include<QSplashScreen>
#include<QTimer>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplashScreen *telaSplash=new QSplashScreen;
    telaSplash-> setPixmap(QPixmap(":/splash/992c7b3ff0fb650c536a965d11b0e927.jpg"));
    telaSplash ->show();

    MainWindow w;
    QTimer::singleShot(2000,telaSplash,SLOT(close()));
    QTimer::singleShot(2000,&w,SLOT(show()));
    //w.show();

    return a.exec();
}
