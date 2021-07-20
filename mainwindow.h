#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "sign_up.h"
#include "mainprogram.h"
#include <QMainWindow>
#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
//---------------------------------
#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QPieSeries>
#include <QPieSlice>
#include <QLineSeries>
//---------------------------------

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE
struct Date{int d, m, y;};
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


    const int monthDays[12] = {31, 28, 31, 30, 31, 30,
                               31, 31, 30, 31, 30, 31};
    int countLeapYears(Date d){
        int years = d.y;
            // Check if the current year needs to be
            // considered for the count of leap years
            // or not
            if (d.m <= 2)
                years--;

            //  An year is a leap year if it
            //  is a multiple of 4,
            //  multiple of 400 and not a
            //  multiple of 100.
            return years / 4 - years / 100 + years / 400;
    }


    int getDifference(Date dt1, Date dt2){
        // COUNT TOTAL NUMBER OF DAYS
            // BEFORE FIRST DATE 'dt1'

            // initialize count using years and day
            long int n1 = dt1.y * 365 + dt1.d;

            // Add days for months in given date
            for (int i = 0; i < dt1.m - 1; i++)
                n1 += monthDays[i];

            // Since every leap year is of 366 days,
            // Add a day for every leap year
            n1 += countLeapYears(dt1);

            // SIMILARLY, COUNT TOTAL NUMBER OF
            // DAYS BEFORE 'dt2'

            long int n2 = dt2.y * 365 + dt2.d;
            for (int i = 0; i < dt2.m - 1; i++)
                n2 += monthDays[i];
            n2 += countLeapYears(dt2);

            // return difference between two counts
            return (n2 - n1);
    }

    static int no_of_task;
    static float time_available_daily ;
    static int avg_no_of_time_slots_availalble_daily;
    static QString timings[];
    static void initialize_requirements();
    static QString name[];
    static QString deadline[];
    static Date todays_date;
    static void do_all_daily(int no_of_task, float time_available);
    static void not_all_daily();
    static int interest[], priority[], total_no_of_hrs[], no_of_days[];
    static int no_of_hrs_per_day[];
    static Date date[];
    static float count1;
    static void initialize_task_list();
    static void select();
    static int add_count;
    static int count;
    static int count_task;
    static int count2;
    static int count_time;
    static int max_element(int a[],int size);
private slots:
    void updateTime();
    void on_loginButton_clicked();

    void on_Sign_up_clicked();

    void on_sign_in_clicked();

    void on_start_time_clicked();


    void on_add_slot_clicked();

    void on_proceed_btn_clicked();

    void on_next_task_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QTimer *timer_1s;
    QChartView *chartViewBar;
    QChartView *chartViewPie;
    QChartView *chartViewLine;
    QChartView *chartViewLine_1;
    QChartView *chartViewLine_2;
    QChartView *chartViewLine_3;
protected:
    void resizeEvent(QResizeEvent* event);
};


#endif // MAINWINDOW_H
