#ifndef MAINPROGRAM_H
#define MAINPROGRAM_H
#include<QSqlDatabase>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>

#include <QMainWindow>

namespace Ui {
class MainProgram;
}

class MainProgram : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainProgram(QWidget *parent = nullptr);
    ~MainProgram();

private:
    Ui::MainProgram *main_ui;
    QTimer *timer_1s;
    QSqlDatabase db1;
};

#endif // MAINPROGRAM_H
