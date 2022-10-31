#include "sign_up.h"
#include "ui_sign_up.h"
#include <QTime>
#include <QTimer>

Sign_up::Sign_up(QWidget *parent) :
    QMainWindow(parent),
    spui(new Ui::Sign_up)
{
    spui->setupUi(this);
    db1 = QSqlDatabase::addDatabase("QMYSQL");
    db1.setHostName("127.0.0.1");
    db1.setPort(3306);
    db1.setDatabaseName("time management");
    db1.setUserName("root");
    db1.setPassword("");

    // checking for successful signup
    if(db1.open())
    {
        qDebug()<<"Sign up Connected";
    }
    else
    {
        qDebug()<<"Sign up Failed to connect";
    }
    timer_1s = new QTimer(this);
    QObject::connect(timer_1s, SIGNAL(timeout()),this,SLOT(updateTime()));
        
    // Adding a delay of 1 second
    timer_1s->start(1000);
}

void Sign_up::updateTime(){
    spui->lbl_time->setText(QTime::currentTime().toString("hh : mm : ss"));
}
Sign_up::~Sign_up()
{
    delete spui;
}

