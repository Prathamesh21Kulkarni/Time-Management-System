#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTime>
#include <QTimer>
#include <QPixmap>
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QMessageBox>
#include <QDebug>
#include <QDateTime>
#include <iostream>
#include <QTableWidget>
float MainWindow::time_available_daily = 0;
int MainWindow::no_of_task = 0;
int MainWindow::avg_no_of_time_slots_availalble_daily = 0;
QString MainWindow::timings[20];
QString MainWindow::name[20];
QString MainWindow::deadline[20];
//Date MainWindow::todays_date = {1, 1, 2001};
int MainWindow::interest[20];
int MainWindow::no_of_hrs_per_day[20];
Date MainWindow::date[20];
float MainWindow::count1 = 0;
int MainWindow::no_of_days[20];
void MainWindow::initialize_requirements()
{
}
void MainWindow::resizeEvent(QResizeEvent *event)
{
    QMainWindow::resizeEvent(event);

    chartViewBar->resize(chartViewBar->parentWidget()->size());
    chartViewPie->resize(chartViewPie->parentWidget()->size());
    chartViewLine->resize(chartViewLine->parentWidget()->size());
    chartViewLine_1->resize(chartViewLine_1->parentWidget()->size());
    chartViewLine_2->resize(chartViewLine_2->parentWidget()->size());
    chartViewLine_3->resize(chartViewLine_3->parentWidget()->size());
}
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    MainWindow::setWindowState(Qt::WindowMaximized);
    ui->setupUi(this);
    //        ui->stackedWidget->setCurrentWidget(ui->login);
    ui->stackedWidget->setCurrentWidget(ui->main_app);
    db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    db.setDatabaseName("time management");
    db.setUserName("root");
    db.setPassword("");
    if (db.open())
    {
        qDebug() << "Connected";
    }
    else
    {
        qDebug() << "Failed to connect";
    }
    timer_1s = new QTimer(this);
    QObject::connect(timer_1s, SIGNAL(timeout()), this, SLOT(updateTime()));
    timer_1s->start(1000);

    ui->display_available_time->setVisible(false);
    ui->task_detail_widget->setVisible(false);
    ui->current_task->setVisible(false);
    ui->start_time->setDisabled(true);
    //----------------------------Charts---------------------------------//
    //---------Bar Chart------------------//
    QBarSet *set0 = new QBarSet("Task1");
    QBarSet *set1 = new QBarSet("Task2");
    QBarSet *set2 = new QBarSet("Task3");
    QBarSet *set3 = new QBarSet("Task4");
    QBarSet *set4 = new QBarSet("Task5");
    *set0 << 10 << 20 << 30 << 40 << 50 << 60;
    *set1 << 50 << 70 << 40 << 45 << 80 << 70;
    *set2 << 30 << 50 << 80 << 13 << 80 << 50;
    *set3 << 50 << 60 << 70 << 30 << 40 << 25;
    *set4 << 90 << 70 << 50 << 30 << 16 << 42;
    QBarSeries *seriesBar = new QBarSeries();
    seriesBar->append(set0);
    seriesBar->append(set1);
    seriesBar->append(set2);
    seriesBar->append(set3);
    seriesBar->append(set4);

    QChart *chartBar = new QChart();
    chartBar->addSeries(seriesBar);
    chartBar->setTitle("Your Performance");
    chartBar->setAnimationOptions(QChart::SeriesAnimations);

    QStringList categories;
    categories << "Week1"
               << "Week2"
               << "Week3"
               << "Week4"
               << "Week5"
               << "Week6";
    QBarCategoryAxis *axis = new QBarCategoryAxis();
    axis->append(categories);
    chartBar->createDefaultAxes();

    chartBar->setAxisX(axis, seriesBar);
    chartViewBar = new QChartView(chartBar);
    chartViewBar->setRenderHint(QPainter::Antialiasing);
    chartViewBar->setParent(ui->chart1);
    //--------------Pie Chart------------------//
    QPieSeries *seriesPie = new QPieSeries();
    seriesPie->append("Task1", 10);
    seriesPie->append("Task2", 20);
    seriesPie->append("Task3", 30);
    seriesPie->append("Task4", 40);
    seriesPie->append("Task5", 50);

    QPieSlice *slice = seriesPie->slices().at(1);
    slice->setExploded();
    slice->setLabelVisible();
    slice->setPen(QPen(Qt::darkGreen, 2));
    slice->setBrush(Qt::green);

    QChart *chartPie = new QChart();
    chartPie->addSeries(seriesPie);
    chartPie->setTitle("Your Performance");
    chartViewPie = new QChartView(chartPie);
    chartViewPie->setRenderHint(QPainter::Antialiasing);
    chartViewPie->setParent(ui->chart2);
    //---------Line Chart------------------//
    QLineSeries *seriesLine = new QLineSeries();
    seriesLine->append(0, 26);
    seriesLine->append(20, 40);
    seriesLine->append(30, 50);
    seriesLine->append(70, 60);
    seriesLine->append(80, 90);

    QChart *chartLine = new QChart();
    chartLine->addSeries(seriesLine);
    chartLine->createDefaultAxes();
    chartLine->setTitle("Task 1");

    chartViewLine = new QChartView(chartLine);
    chartViewLine->setRenderHint(QPainter::Antialiasing);
    chartViewLine->setParent(ui->chart3);

    QLineSeries *seriesLine_1 = new QLineSeries();
    seriesLine_1->append(0, 10);
    seriesLine_1->append(40, 30);
    seriesLine_1->append(30, 60);
    seriesLine_1->append(70, 80);
    seriesLine_1->append(80, 90);

    QChart *chartLine_1 = new QChart();
    chartLine_1->addSeries(seriesLine_1);
    chartLine_1->createDefaultAxes();
    chartLine_1->setTitle("Task 2");

    chartViewLine_1 = new QChartView(chartLine_1);
    chartViewLine_1->setRenderHint(QPainter::Antialiasing);
    chartViewLine_1->setParent(ui->chart4);

    QLineSeries *seriesLine_2 = new QLineSeries();
    seriesLine_2->append(0, 5);
    seriesLine_2->append(10, 20);
    seriesLine_2->append(30, 50);
    seriesLine_2->append(50, 40);
    seriesLine_2->append(40, 90);

    QChart *chartLine_2 = new QChart();
    chartLine_2->addSeries(seriesLine_2);
    chartLine_2->createDefaultAxes();
    chartLine_2->setTitle("Task 3");

    chartViewLine_2 = new QChartView(chartLine_2);
    chartViewLine_2->setRenderHint(QPainter::Antialiasing);
    chartViewLine_2->setParent(ui->chart5);

    QLineSeries *seriesLine_3 = new QLineSeries();
    seriesLine_3->append(0, 20);
    seriesLine_3->append(20, 60);
    seriesLine_3->append(60, 80);
    seriesLine_3->append(80, 100);
    //            seriesLine->append (80, 90) ;

    QChart *chartLine_3 = new QChart();
    chartLine_3->addSeries(seriesLine_3);
    chartLine_3->createDefaultAxes();
    chartLine_3->setTitle("Task 4");

    chartViewLine_3 = new QChartView(chartLine_3);
    chartViewLine_3->setRenderHint(QPainter::Antialiasing);
    chartViewLine_3->setParent(ui->chart6);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::updateTime()
{
    ui->lbl_time->setText(QTime::currentTime().toString("hh : mm : ss"));
    ui->lbl_time_4->setText(QTime::currentTime().toString("hh : mm : ss"));
    ui->time->setText(QTime::currentTime().toString("hh : mm : ss"));
}

void MainWindow::on_loginButton_clicked() //when clicked login button
{
    QString username = ui->username->text(); //to get username
    QString password = ui->password->text(); //to get password
    qDebug() << username << password;

    QString command = "SELECT * FROM user_login WHERE password = '" + password + "'AND username = '" + username + "'";
    QSqlQuery query(db);
    if (query.exec(command))
    {
        if (query.size() > 0)
        {
            QMessageBox::information(this, "Login Successful", "You have Successfully logged in!");
            ui->username->clear();
            ui->password->clear();
            ui->stackedWidget->setCurrentWidget(ui->main_app);
        }
        else
        {
            QMessageBox::information(this, "Login Failed", "Login Failed please try again..");
            ui->username->clear();
            ui->password->clear();
        }
    }
}

void MainWindow::on_Sign_up_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->page_4); //in order to hide the window
    //    close(); Don't use close it closes the whole a program
}

void MainWindow::on_sign_in_clicked()
{
    QString username = ui->s_username_3->text(); //to get username
    QString password = ui->s_password_3->text(); //to get password
    QString password1 = ui->s_password_4->text();
    if (username == "" || password == "")
    {
        QMessageBox *qm = new QMessageBox(this);
        qm->setStyleSheet("#qm{color:black;}");
        qm->critical(this, "Blank Content", "Either username or password is not entered");
        //        qm->setText("Either username or password is not entered");
        ui->s_password_4->clear();
    }
    else if (password != password1)
    {
        QMessageBox::critical(this, "Password doesn't matched", "Re-enter correct password");
        ui->s_password_4->clear();
    }
    else
    {
        QString command = "INSERT INTO user_login (id, timestamp, username, password) VALUES (NULL, current_timestamp(),'" + username + "', '" + password + "')";
        QSqlQuery query(db);
        QString command_1 = "SELECT * FROM user_login WHERE username = '" + username + "'";
        QSqlQuery query_1(db);
        query_1.exec(command_1);
        if (query_1.size() > 0)
        {
            QMessageBox::information(this, "Sorry! Duplicate username", "Sorry! But this username is already taken by other user. Please Enter some other username");
            ui->s_username_3->clear();
        }
        else
        {
            if (query.exec(command))
            {
                QMessageBox::information(this, "Signed in Successful", "Signin Successful! Please login");
                ui->s_username_3->clear();
                ui->s_password_3->clear();
                ui->s_password_4->clear();
                ui->stackedWidget->setCurrentWidget(ui->login);
            }
        }
    }
    qDebug() << username << password;
}

int MainWindow::count_time = 0;
void MainWindow::on_start_time_clicked()
{
    int c = 0;
    QString n = timings[count_time].left(5) + ":00";
    ui->label_10->setText("Task would start in ");
    while (c != 1)
    {
        qDebug() << n;
        QString t = QTime::currentTime().toString();
        QString h_str = n.left(2);
        QString m_str = n.mid(3, 2);
        QString s_str = n.right(2);
        QString th_str = t.left(2);
        QString tm_str = t.mid(3, 2);
        QString ts_str = t.right(2);
        int h_start = h_str.toInt();
        int m_start = m_str.toInt();
        int s_start = s_str.toInt();
        int h_stop = th_str.toInt();
        int m_stop = tm_str.toInt();
        int s_stop = ts_str.toInt();
        int diff_s, diff_m, diff_h;
        //    qDebug()<<h_str<<" "<<m_str<<" "<<s_str;
        while (s_stop > s_start)
        {
            --m_start;
            s_start += 60;
        }
        diff_s = s_start - s_stop;
        while (m_stop > m_start)
        {
            --h_start;
            m_start += 60;
        }
        diff_m = m_start - m_stop;
        diff_h = h_start - h_stop;
        QString h, m, s;
        h = QString::number(diff_h);
        m = QString::number(diff_m);
        s = QString::number(diff_s);
        if (diff_h < 10)
        {
            h = "0" + QString::number(diff_h);
        }
        if (diff_m < 10)
        {
            m = "0" + QString::number(diff_m);
        }
        if (diff_s < 10)
        {
            s = "0" + QString::number(diff_s);
        }
        ui->stop_watch->setText(h + " : " + m + " : " + s);
        if (diff_h == 0 && diff_m == 0 && diff_s == 0)
        {
            c = 1;
            ui->label_10->setVisible(true);
            ui->label_10->setText("Remaining Time");
            ui->current_task->setVisible(true);
            ui->current_task->setText(name[count_time]);
            count_time++;
            on_start_time_clicked();
        }
        QTime dieTime = QTime::currentTime().addSecs(1);
        while (QTime::currentTime() < dieTime)
            QCoreApplication::processEvents(QEventLoop::AllEvents, 100);
    }
    //    qDebug()<<h_str<<" "<<m_str<<" "<<s_str;
}
int MainWindow::add_count = 1;
int MainWindow::count = 0;
void MainWindow::on_add_slot_clicked()
{
    ui->add_slot->setEnabled(true);
    //    qDebug()<<"Button Clicked";
    ui->add_slot->setText("Add Slot");
    no_of_task = ui->no_of_tasks->text().toInt();
    avg_no_of_time_slots_availalble_daily = ui->slots_available->text().toInt();
    if (add_count >= avg_no_of_time_slots_availalble_daily)
    {
        ui->add_slot->setDisabled(true);
        ui->add_slot->setText("All slots added");
    }
    QString start_time = ui->slot_start->text();
    QString end_time = ui->slot_end->text();
    if (start_time.contains("PM"))
    {
        int n = start_time.left(2).toInt();
        n = n + 12;
        //        qDebug()<<n;
        QString s = QString::number(n) + start_time.right(6);
        start_time = s;
        qDebug() << "start time : " << start_time;
    }
    if (end_time.contains("PM"))
    {
        int n = end_time.left(2).toInt();
        n = n + 12;
        //        qDebug()<<n;
        QString s = QString::number(n) + end_time.right(6);
        end_time = s;
        //        end_time.left(2) = QString::number(12+n);
        //        qDebug()<<end_time;
    }
    int s1 = start_time.left(2).toInt();
    int s2 = end_time.left(2).toInt();
    if (s1 > s2)
    {
        QMessageBox::critical(this, "In valid credentails for slot", "Start time is greater than end time");
        ui->slot_start->clear();
        ui->slot_end->clear();
        add_count--;
    }
    else if (s1 == s2)
    {
        QMessageBox::critical(this, "In valid credentails for slot", "Minimum time slot should be of one hour");
        ui->slot_start->clear();
        ui->slot_end->clear();
        add_count--;
    }
    timings[count] = start_time;
    timings[count + 1] = end_time;
    add_count++;
    count += 2;
    ui->slot_start->clear();
    ui->slot_end->clear();
}

void MainWindow::on_proceed_btn_clicked()
{
    int h_start, m_start, h_end, m_end;
    for (int i = 0; i < count; i += 2)
    {
        h_start = timings[i].left(2).toInt();
        m_start = timings[i].mid(3, 2).toInt();
        h_end = timings[i + 1].left(2).toInt();
        m_end = timings[i + 1].mid(3, 2).toInt();
        time_available_daily += h_end - h_start;
        qDebug() << timings[i];
    }
    ui->display_available_time->setText("The available time is : " + QString::number(time_available_daily));
    ui->display_available_time->setVisible(true);
    ui->add_task_widget->setVisible(false);
    ui->task_detail_widget->setVisible(true);
    ui->task_name_label->setText("Enter the name of task 1");
}
int MainWindow::count_task = 1;
int MainWindow::count2 = 0;
int MainWindow::total_no_of_hrs[20];
Date MainWindow::todays_date = {19, 06, 2021};
int MainWindow::max_element(int a[20], int size)
{
    int max = a[0];
    for (int i = 0; i < size; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}
void MainWindow::not_all_daily()
{
    int total_days = max_element(no_of_days, no_of_task);

    int t = time_available_daily;
    int max = max_element(no_of_hrs_per_day, no_of_task);
    if (t < max)
    {
        //            QMessageBox::critical("Error","You cannot perform this task increase your daily available hours");
    }
    else if (t >= max)
    {
        int temp;
        Date d_temp;
        QString s_temp;

        for (int i = 0; i < no_of_task; i++)
        {
            for (int j = 0; j < no_of_task - 1; j++)
            {
                if (no_of_days[j] > no_of_days[j + 1])
                {
                    temp = no_of_days[j];
                    no_of_days[j] = no_of_days[j + 1];
                    no_of_days[j + 1] = temp;

                    s_temp = name[j];
                    name[j] = name[j + 1];
                    name[j + 1] = s_temp;

                    temp = interest[j];
                    interest[j] = interest[j + 1];
                    interest[j + 1] = temp;

                    //                        temp = priority[j];
                    //                        priority[j] = priority[j + 1];
                    //                        priority[j + 1] = temp;

                    temp = total_no_of_hrs[j];
                    total_no_of_hrs[j] = total_no_of_hrs[j + 1];
                    total_no_of_hrs[j + 1] = temp;

                    temp = no_of_hrs_per_day[j];
                    no_of_hrs_per_day[j] = no_of_hrs_per_day[j + 1];
                    no_of_hrs_per_day[j + 1] = temp;

                    d_temp = date[j];
                    date[j] = date[j + 1];
                    date[j + 1] = d_temp;
                }
            }
        }

        for (int i = 1; i <= total_days; i++)
        {

            qDebug() << "------------------Day " << i << " -------------------";
            int available_hrs = time_available_daily;
            int flag = 1;
            for (int j = 0; j < no_of_task; j++)
            {
                if (total_no_of_hrs[j] != 0 && flag != 0)
                {
                    if (available_hrs >= total_no_of_hrs[j])
                    {
                        qDebug() << name[j] << " for " << total_no_of_hrs[j] << " hrs";
                        // available_hrs = available_hrs - no_of_hrs_per_day[j];
                        total_no_of_hrs[j] = 0;
                        flag = 0;

                        // cout << " (available time = " << available_hrs << " ) ";
                    }
                    else
                    {
                        qDebug() << name[j] << " for " << available_hrs << " hrs";
                        total_no_of_hrs[j] = total_no_of_hrs[j] - available_hrs;
                        // available_hrs = 0;
                        // cout << " (available time = " << available_hrs << " ) ";
                    }
                }
            }
        }
    }
}
void MainWindow::on_next_task_clicked()
{
    int d1, d2, d3;
    ui->task_name_label->setText("Enter the name for task " + QString::number(count_task + 1));
    ui->next_task->setEnabled(true);
    name[count2] = ui->task_name->text();
    deadline[count2] = ui->deadline->text();
    d1 = deadline[count2].left(2).toInt();
    d2 = deadline[count2].mid(3, 2).toInt();
    d3 = deadline[count2].right(4).toInt();
    date[count2] = {d1, d2, d3};
    qDebug() << d1 << " " << d2 << " " << d3;
    //    interest[count2] = ui->interest->text().toInt();
    total_no_of_hrs[count2] = ui->total_no_of_hrs->text().toInt();
    if (count_task >= no_of_task)
    {
        QMessageBox::information(this, "Done", "Data for all task's has been recorded. Now go to the time table tab to check your timetable");
        ui->next_task->setDisabled(true);
        for (int i = 0; i < no_of_task; i++)
        {
            qDebug() << "\n-----------------------------------\n";
            qDebug() << "Name : " << name[i];
            no_of_days[i] = getDifference(todays_date, date[i]);
            qDebug() << "No of days remaining is : " << no_of_days[i];
            qDebug() << "Interest : " << interest[i];
            qDebug() << "Total no of hrs : " << total_no_of_hrs[i];
            no_of_hrs_per_day[i] = total_no_of_hrs[i] / no_of_days[i];
            qDebug() << "No of hrs per day : " << no_of_hrs_per_day[i];
            count1 += no_of_hrs_per_day[i];
        }
        not_all_daily();
        
//         Earlier
//        ui->tableWidget->setHorizontalHeaderLabels(new QTable)
//         ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Data Structures"));
//         ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Data Structures"));
//         ui->tableWidget->setItem(0, 1, new QTableWidgetItem("SDP"));
//         ui->tableWidget->setItem(1, 1, new QTableWidgetItem("SDP"));
//         ui->tableWidget->setItem(0, 2, new QTableWidgetItem("SDP"));
//         ui->tableWidget->setItem(1, 2, new QTableWidgetItem("SDP"));
//         ui->tableWidget->setItem(0, 3, new QTableWidgetItem("Database"));
//         ui->tableWidget->setItem(1, 3, new QTableWidgetItem("Database"));
//         ui->tableWidget->setItem(0, 4, new QTableWidgetItem("Database"));
//         ui->tableWidget->setItem(1, 4, new QTableWidgetItem("Database"));
//         ui->tableWidget->setItem(0, 5, new QTableWidgetItem("Database"));
//         ui->start_time->setEnabled(true);
        
//         New
        ui->tableWidget->setHorizontalHeaderLabels(new QTable)
        ui->tableWidget->setItem(0, 0, new QTableWidgetItem("Data Structures"));
        ui->tableWidget->setItem(1, 0, new QTableWidgetItem("Data Structures"));
        ui->tableWidget->setItem(0, 1, new QTableWidgetItem("SDP"));
        ui->tableWidget->setItem(1, 1, new QTableWidgetItem("SDP"));
        ui->tableWidget->setItem(0, 2, new QTableWidgetItem("SDP"));
        ui->tableWidget->setItem(1, 2, new QTableWidgetItem("SDP"));
        ui->tableWidget->setItem(0, 3, new QTableWidgetItem("Database"));
        ui->tableWidget->setItem(1, 3, new QTableWidgetItem("Database"));
        ui->tableWidget->setItem(0, 4, new QTableWidgetItem("Database"));
        ui->tableWidget->setItem(1, 4, new QTableWidgetItem("Database"));
        ui->tableWidget->setItem(0, 5, new QTableWidgetItem("Database"));
        ui->start_time->setEnabled(true);
    }

    count_task++;
    count2++;
    ui->task_name->clear();
    ui->deadline->clear();
    //    ui->interest->clear();
    ui->total_no_of_hrs->clear();
}
