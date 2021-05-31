/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QStackedWidget *stackedWidget;
    QWidget *login;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QSpacerItem *horizontalSpacer_3;
    QLabel *lbl_time;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QWidget *loginForm;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_2;
    QLineEdit *username;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QLineEdit *password;
    QSpacerItem *verticalSpacer_3;
    QPushButton *loginButton;
    QSpacerItem *verticalSpacer_5;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_4;
    QPushButton *Sign_up;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QWidget *page_4;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_24;
    QSpacerItem *horizontalSpacer_21;
    QLabel *lbl_time_4;
    QSpacerItem *horizontalSpacer_22;
    QHBoxLayout *horizontalLayout_20;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_19;
    QSpacerItem *horizontalSpacer_17;
    QWidget *signin_form_3;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_14;
    QLineEdit *s_username_3;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_15;
    QLineEdit *s_password_3;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_16;
    QLineEdit *s_password_4;
    QSpacerItem *verticalSpacer_8;
    QPushButton *sign_in;
    QSpacerItem *horizontalSpacer_19;
    QLabel *label_13;
    QWidget *main_app;
    QVBoxLayout *verticalLayout_8;
    QTabWidget *tabWidget;
    QWidget *Home;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer_5;
    QLabel *label_6;
    QLabel *time;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_13;
    QSpacerItem *horizontalSpacer_14;
    QLabel *label_10;
    QSpacerItem *horizontalSpacer_15;
    QSpacerItem *verticalSpacer_9;
    QSpacerItem *verticalSpacer_6;
    QHBoxLayout *horizontalLayout_8;
    QSpacerItem *horizontalSpacer_7;
    QWidget *horizontalWidget_3;
    QHBoxLayout *horizontalLayout_11;
    QLabel *stop_watch;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *verticalSpacer_7;
    QPushButton *start_time;
    QHBoxLayout *horizontalLayout_12;
    QSpacerItem *horizontalSpacer_11;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_13;
    QLabel *label_8;
    QSpacerItem *horizontalSpacer_9;
    QSpacerItem *horizontalSpacer_12;
    QWidget *Dashboard;
    QWidget *ViewTimetable;
    QWidget *AddTask;
    QWidget *Customize;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1092, 600);
        MainWindow->setMinimumSize(QSize(800, 600));
        MainWindow->setStyleSheet(QString::fromUtf8("#centralwidget\n"
"{\n"
" 	background : rgba(32, 80, 96, 100);\n"
"	border-image: url(:/icons/C:/Users/dell/Downloads/wallpaper.jpg);\n"
"}\n"
"QLabel{\n"
"	font: 63 14pt \"Open Sans Semibold\";\n"
"}\n"
"QLineEdit{border-radius: 3px;}\n"
"QPushButton\n"
"{\n"
"  color: white;\n"
"  font: 63 14pt \"Open Sans Semibold\";\n"
"  background-color: #27a9e3;\n"
"  border-color:rgb(0, 0, 255);\n"
"  border-width: 2px;\n"
"  border-radius: 3px;\n"
"	\n"
"}\n"
"QPushButton:hover{\n"
"background-color: #66c011;\n"
"}\n"
"QTabWidget::pane {\n"
"    border: 1px solid black;\n"
"    background: white;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:top {\n"
"    top: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:bottom {\n"
"    bottom: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:left {\n"
"    right: 1px;\n"
"}\n"
"\n"
"QTabWidget::tab-bar:right {\n"
"    left: 1px;\n"
"}\n"
"\n"
"QTabBar::tab {\n"
"    border: 1px solid black;\n"
"}\n"
"\n"
"QTabBar::tab:selected {\n"
"    background: white;\n"
"}\n"
"\n"
"QTabBar::tab:!selected {\n"
"    back"
                        "ground: silver;\n"
"}\n"
"\n"
"QTabBar::tab:!selected:hover {\n"
"    background: #999;\n"
"}\n"
"\n"
"QTabBar::tab:top:!selected {\n"
"    margin-top: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:!selected {\n"
"    margin-bottom: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:top, QTabBar::tab:bottom {\n"
"    min-width: 8ex;\n"
"    margin-right: -1px;\n"
"    padding: 5px 10px 5px 10px;\n"
"}\n"
"\n"
"QTabBar::tab:top:selected {\n"
"    border-bottom-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:bottom:selected {\n"
"    border-top-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:top:last, QTabBar::tab:bottom:last,\n"
"QTabBar::tab:top:only-one, QTabBar::tab:bottom:only-one {\n"
"    margin-right: 0;\n"
"}\n"
"\n"
"QTabBar::tab:left:!selected {\n"
"    margin-right: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:right:!selected {\n"
"    margin-left: 3px;\n"
"}\n"
"\n"
"QTabBar::tab:left, QTabBar::tab:right {\n"
"    min-height: 8ex;\n"
"    margin-bottom: -1px;\n"
"    padding: 10px 5px 10px 5px;\n"
"}\n"
"\n"
"QTabBar::tab:left:selected {\n"
"    bo"
                        "rder-left-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:right:selected {\n"
"    border-right-color: none;\n"
"}\n"
"\n"
"QTabBar::tab:left:last, QTabBar::tab:right:last,\n"
"QTabBar::tab:left:only-one, QTabBar::tab:right:only-one {\n"
"    margin-bottom: 0;\n"
"}"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        login = new QWidget();
        login->setObjectName(QString::fromUtf8("login"));
        verticalLayout_2 = new QVBoxLayout(login);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_3);

        lbl_time = new QLabel(login);
        lbl_time->setObjectName(QString::fromUtf8("lbl_time"));
        QFont font;
        font.setFamily(QString::fromUtf8("Open Sans Semibold"));
        font.setPointSize(14);
        font.setBold(false);
        font.setItalic(false);
        lbl_time->setFont(font);
        lbl_time->setStyleSheet(QString::fromUtf8("#lbl_time{\n"
"color: white;\n"
"}"));
        lbl_time->setFrameShadow(QFrame::Plain);

        horizontalLayout_7->addWidget(lbl_time);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(-1, 0, -1, -1);
        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        loginForm = new QWidget(login);
        loginForm->setObjectName(QString::fromUtf8("loginForm"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(loginForm->sizePolicy().hasHeightForWidth());
        loginForm->setSizePolicy(sizePolicy);
        loginForm->setMinimumSize(QSize(600, 300));
        loginForm->setStyleSheet(QString::fromUtf8("#loginForm\n"
"{\n"
" background: rgba(0,0,0,80);\n"
" border-radius: 8px ;\n"
"}"));
        verticalLayout_3 = new QVBoxLayout(loginForm);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(35, 35, 35, 0);
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(-1, -1, 4, -1);
        label_2 = new QLabel(loginForm);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_5->addWidget(label_2);

        username = new QLineEdit(loginForm);
        username->setObjectName(QString::fromUtf8("username"));
        username->setMinimumSize(QSize(0, 25));

        horizontalLayout_5->addWidget(username);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, 4, -1);
        label_3 = new QLabel(loginForm);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        password = new QLineEdit(loginForm);
        password->setObjectName(QString::fromUtf8("password"));
        password->setMinimumSize(QSize(0, 25));
        password->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(password);


        verticalLayout_3->addLayout(horizontalLayout_4);

        verticalSpacer_3 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_3);

        loginButton = new QPushButton(loginForm);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setMinimumSize(QSize(0, 40));
        loginButton->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_3->addWidget(loginButton);

        verticalSpacer_5 = new QSpacerItem(20, 5, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_3->addItem(verticalSpacer_5);

        widget = new QWidget(loginForm);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy1);
        widget->setMinimumSize(QSize(0, 20));
        horizontalLayout_6 = new QHBoxLayout(widget);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy2);

        horizontalLayout_6->addWidget(label_4);

        Sign_up = new QPushButton(widget);
        Sign_up->setObjectName(QString::fromUtf8("Sign_up"));
        Sign_up->setMinimumSize(QSize(0, 40));
        Sign_up->setCursor(QCursor(Qt::PointingHandCursor));
        Sign_up->setStyleSheet(QString::fromUtf8("#Sign_up{padding-left: 2px;\n"
"padding-right:2px;\n"
"background: rgba(0,0,0,10);}\n"
"#Sign_up:hover{\n"
"background-color: #27a9e3;\n"
"}"));

        horizontalLayout_6->addWidget(Sign_up);


        verticalLayout_3->addWidget(widget);


        horizontalLayout->addWidget(loginForm);

        horizontalSpacer_2 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(125, 144));
        label->setMaximumSize(QSize(261, 265));
        label->setCursor(QCursor(Qt::ArrowCursor));
        label->setStyleSheet(QString::fromUtf8(""));
        label->setPixmap(QPixmap(QString::fromUtf8(":/icons/C:/Users/dell/Desktop/Picture1.png")));
        label->setScaledContents(true);

        horizontalLayout->addWidget(label);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer);

        stackedWidget->addWidget(login);
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        verticalLayout = new QVBoxLayout(page_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        horizontalLayout_24->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_21);

        lbl_time_4 = new QLabel(page_4);
        lbl_time_4->setObjectName(QString::fromUtf8("lbl_time_4"));
        lbl_time_4->setFont(font);
        lbl_time_4->setStyleSheet(QString::fromUtf8("color: white;"));

        horizontalLayout_24->addWidget(lbl_time_4);

        horizontalSpacer_22 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_24->addItem(horizontalSpacer_22);


        verticalLayout->addLayout(horizontalLayout_24);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        horizontalLayout_20->setContentsMargins(-1, 0, -1, 0);
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_20->addItem(verticalSpacer_4);


        verticalLayout->addLayout(horizontalLayout_20);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        horizontalLayout_19->setContentsMargins(-1, 0, -1, 0);
        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_17);

        signin_form_3 = new QWidget(page_4);
        signin_form_3->setObjectName(QString::fromUtf8("signin_form_3"));
        sizePolicy.setHeightForWidth(signin_form_3->sizePolicy().hasHeightForWidth());
        signin_form_3->setSizePolicy(sizePolicy);
        signin_form_3->setMinimumSize(QSize(600, 300));
        signin_form_3->setStyleSheet(QString::fromUtf8("#signin_form_3{\n"
"background:rgba(0,0,0,80);\n"
"border-radius: 8px;\n"
"}"));
        verticalLayout_6 = new QVBoxLayout(signin_form_3);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(25, 25, 25, 25);
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        label_14 = new QLabel(signin_form_3);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy3);
        label_14->setMinimumSize(QSize(45, 0));

        horizontalLayout_21->addWidget(label_14);

        s_username_3 = new QLineEdit(signin_form_3);
        s_username_3->setObjectName(QString::fromUtf8("s_username_3"));
        s_username_3->setMinimumSize(QSize(0, 25));
        s_username_3->setEchoMode(QLineEdit::Normal);

        horizontalLayout_21->addWidget(s_username_3);


        verticalLayout_6->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        label_15 = new QLabel(signin_form_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(45, 0));

        horizontalLayout_22->addWidget(label_15);

        s_password_3 = new QLineEdit(signin_form_3);
        s_password_3->setObjectName(QString::fromUtf8("s_password_3"));
        s_password_3->setMinimumSize(QSize(0, 25));
        s_password_3->setEchoMode(QLineEdit::Password);

        horizontalLayout_22->addWidget(s_password_3);


        verticalLayout_6->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        label_16 = new QLabel(signin_form_3);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_23->addWidget(label_16);

        s_password_4 = new QLineEdit(signin_form_3);
        s_password_4->setObjectName(QString::fromUtf8("s_password_4"));
        s_password_4->setMinimumSize(QSize(0, 25));
        s_password_4->setEchoMode(QLineEdit::Password);

        horizontalLayout_23->addWidget(s_password_4);


        verticalLayout_6->addLayout(horizontalLayout_23);

        verticalSpacer_8 = new QSpacerItem(20, 8, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout_6->addItem(verticalSpacer_8);

        sign_in = new QPushButton(signin_form_3);
        sign_in->setObjectName(QString::fromUtf8("sign_in"));
        sign_in->setMinimumSize(QSize(0, 35));
        sign_in->setCursor(QCursor(Qt::PointingHandCursor));

        verticalLayout_6->addWidget(sign_in);


        horizontalLayout_19->addWidget(signin_form_3);

        horizontalSpacer_19 = new QSpacerItem(100, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_19->addItem(horizontalSpacer_19);

        label_13 = new QLabel(page_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(150, 150));
        label_13->setMaximumSize(QSize(265, 255));
        label_13->setStyleSheet(QString::fromUtf8(""));
        label_13->setPixmap(QPixmap(QString::fromUtf8(":/icons/C:/Users/dell/Desktop/Picture1.png")));
        label_13->setScaledContents(true);

        horizontalLayout_19->addWidget(label_13);


        verticalLayout->addLayout(horizontalLayout_19);

        stackedWidget->addWidget(page_4);
        main_app = new QWidget();
        main_app->setObjectName(QString::fromUtf8("main_app"));
        verticalLayout_8 = new QVBoxLayout(main_app);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        tabWidget = new QTabWidget(main_app);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabPosition(QTabWidget::West);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setIconSize(QSize(20, 20));
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setDocumentMode(false);
        Home = new QWidget();
        Home->setObjectName(QString::fromUtf8("Home"));
        verticalLayout_5 = new QVBoxLayout(Home);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_5);

        label_6 = new QLabel(Home);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_2->addWidget(label_6);

        time = new QLabel(Home);
        time->setObjectName(QString::fromUtf8("time"));

        horizontalLayout_2->addWidget(time);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_6);


        verticalLayout_5->addLayout(horizontalLayout_2);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        horizontalLayout_13->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_14);

        label_10 = new QLabel(Home);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_13->addWidget(label_10);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_15);


        verticalLayout_5->addLayout(horizontalLayout_13);

        verticalSpacer_9 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_9);

        verticalSpacer_6 = new QSpacerItem(20, 1, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_5->addItem(verticalSpacer_6);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        horizontalLayout_8->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_7);

        horizontalWidget_3 = new QWidget(Home);
        horizontalWidget_3->setObjectName(QString::fromUtf8("horizontalWidget_3"));
        sizePolicy.setHeightForWidth(horizontalWidget_3->sizePolicy().hasHeightForWidth());
        horizontalWidget_3->setSizePolicy(sizePolicy);
        horizontalWidget_3->setMinimumSize(QSize(400, 400));
        horizontalWidget_3->setStyleSheet(QString::fromUtf8("#horizontalWidget_3{\n"
"border:2px solid;\n"
"border-radius:200%;\n"
"}"));
        horizontalLayout_11 = new QHBoxLayout(horizontalWidget_3);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(-1, 0, -1, -1);
        stop_watch = new QLabel(horizontalWidget_3);
        stop_watch->setObjectName(QString::fromUtf8("stop_watch"));
        stop_watch->setStyleSheet(QString::fromUtf8("#stop_watch{font: 25 59pt \"Microsoft JhengHei UI Light\";}"));

        horizontalLayout_11->addWidget(stop_watch);


        horizontalLayout_8->addWidget(horizontalWidget_3);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_8->addItem(horizontalSpacer_8);


        verticalLayout_5->addLayout(horizontalLayout_8);

        verticalSpacer_7 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_5->addItem(verticalSpacer_7);

        start_time = new QPushButton(Home);
        start_time->setObjectName(QString::fromUtf8("start_time"));

        verticalLayout_5->addWidget(start_time);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        horizontalLayout_12->setContentsMargins(-1, 0, -1, -1);
        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_11);

        label_9 = new QLabel(Home);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_12->addWidget(label_9);

        horizontalSpacer_13 = new QSpacerItem(50, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_13);

        label_8 = new QLabel(Home);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_12->addWidget(label_8);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_9);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_12);


        verticalLayout_5->addLayout(horizontalLayout_12);

        tabWidget->addTab(Home, QString());
        Dashboard = new QWidget();
        Dashboard->setObjectName(QString::fromUtf8("Dashboard"));
        tabWidget->addTab(Dashboard, QString());
        ViewTimetable = new QWidget();
        ViewTimetable->setObjectName(QString::fromUtf8("ViewTimetable"));
        tabWidget->addTab(ViewTimetable, QString());
        AddTask = new QWidget();
        AddTask->setObjectName(QString::fromUtf8("AddTask"));
        tabWidget->addTab(AddTask, QString());
        Customize = new QWidget();
        Customize->setObjectName(QString::fromUtf8("Customize"));
        tabWidget->addTab(Customize, QString());

        verticalLayout_8->addWidget(tabWidget);

        stackedWidget->addWidget(main_app);

        verticalLayout_4->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(2);
        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        lbl_time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Password :", nullptr));
        loginButton->setText(QCoreApplication::translate("MainWindow", "Login", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Dont have an account ", nullptr));
        Sign_up->setText(QCoreApplication::translate("MainWindow", "Sign up", nullptr));
        label->setText(QString());
        lbl_time_4->setText(QCoreApplication::translate("MainWindow", "00 : 00 : 00", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "Username :", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "Password  :", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Re-enter   :", nullptr));
        sign_in->setText(QCoreApplication::translate("MainWindow", "Sign-in", nullptr));
        label_13->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Time : ", nullptr));
        time->setText(QCoreApplication::translate("MainWindow", "00:00:00", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Time Remaining", nullptr));
        stop_watch->setText(QCoreApplication::translate("MainWindow", "00 : 00 : 00", nullptr));
        start_time->setText(QCoreApplication::translate("MainWindow", "Start", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Current Task", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "SDP", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Home), QCoreApplication::translate("MainWindow", "Home", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Dashboard), QCoreApplication::translate("MainWindow", "Dashboard", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(ViewTimetable), QCoreApplication::translate("MainWindow", "View / Edit Table", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(AddTask), QCoreApplication::translate("MainWindow", "Add Task", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(Customize), QCoreApplication::translate("MainWindow", "Customize", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
