#include "mainwindow.h"
#include <QFile>
#include <QStyle>
#include <QApplication>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QFile file("C:/Users/dell/Downloads/SyNet/SyNet.qss");
    file.open(QFile::ReadOnly);

    QString styleSheet { QLatin1String(file.readAll()) };

        //Settingup stylesheet object
    a.setStyleSheet(styleSheet);
    w.show();
    return a.exec();
}
