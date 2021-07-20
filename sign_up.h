#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>


namespace Ui {
class Sign_up;
}

class Sign_up : public QMainWindow
{
    Q_OBJECT

public:
    explicit Sign_up(QWidget *parent = nullptr);
    ~Sign_up();
private slots:
    void updateTime();
    void on_sign_up_clicked();

private:
    Ui::Sign_up *spui;
    QTimer *timer_1s;
    QSqlDatabase db1;
};

#endif // SIGN_UP_H
