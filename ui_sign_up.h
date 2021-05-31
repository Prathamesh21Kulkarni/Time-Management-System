/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Sign_up
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *Sign_up)
    {
        if (Sign_up->objectName().isEmpty())
            Sign_up->setObjectName(QString::fromUtf8("Sign_up"));
        Sign_up->resize(920, 600);
        Sign_up->setMinimumSize(QSize(800, 600));
        Sign_up->setStyleSheet(QString::fromUtf8("#topPanel{\n"
"background-color:qlineargradient(spread:pad, x1:0, y1:1, x2:0, y2:0, stop:0 rgba(0, 0, 0, 255), stop:0.05 rgba(14, 8, 73, 255), stop:0.36 rgba(17, 106, 145, 255), stop:0.6 rgba(18, 149, 165, 255), stop:0.696429 rgba(11, 144, 234, 255), stop:0.79 rgba(5, 209, 244, 255), stop:0.86 rgba(0, 143, 255, 255), stop:0.935 rgba(55, 57, 239, 255));\n"
"color: white;\n"
"font-style: bold;\n"
"}\n"
"#centralwidget{\n"
"background:url(C:/Users/dell/Downloads/galaxy_expedition_by_kosmicac_degu6ua.png);\n"
"}"));
        centralwidget = new QWidget(Sign_up);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setStyleSheet(QString::fromUtf8("QLabel{ color:white;}\n"
"QLineEdit{ border-radius: 3px;}\n"
"QPushButton\n"
"{\n"
"	color: white;\n"
"	background-color: #27a9e3;\n"
"	border-width: 0px;\n"
"	border-radius: 3px;\n"
"}\n"
"QPushButton:hover{background-color: #66c011;}\n"
""));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        Sign_up->setCentralWidget(centralwidget);
        menubar = new QMenuBar(Sign_up);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 920, 28));
        Sign_up->setMenuBar(menubar);
        statusbar = new QStatusBar(Sign_up);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        Sign_up->setStatusBar(statusbar);

        retranslateUi(Sign_up);

        QMetaObject::connectSlotsByName(Sign_up);
    } // setupUi

    void retranslateUi(QMainWindow *Sign_up)
    {
        Sign_up->setWindowTitle(QCoreApplication::translate("Sign_up", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sign_up: public Ui_Sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
