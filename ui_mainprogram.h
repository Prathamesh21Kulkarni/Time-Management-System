/********************************************************************************
** Form generated from reading UI file 'mainprogram.ui'
**
** Created by: Qt User Interface Compiler version 6.0.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPROGRAM_H
#define UI_MAINPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainProgram
{
public:
    QMenuBar *menubar;
    QWidget *centralwidget;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainProgram)
    {
        if (MainProgram->objectName().isEmpty())
            MainProgram->setObjectName(QString::fromUtf8("MainProgram"));
        MainProgram->resize(800, 600);
        menubar = new QMenuBar(MainProgram);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        MainProgram->setMenuBar(menubar);
        centralwidget = new QWidget(MainProgram);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        MainProgram->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainProgram);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainProgram->setStatusBar(statusbar);

        retranslateUi(MainProgram);

        QMetaObject::connectSlotsByName(MainProgram);
    } // setupUi

    void retranslateUi(QMainWindow *MainProgram)
    {
        MainProgram->setWindowTitle(QCoreApplication::translate("MainProgram", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainProgram: public Ui_MainProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAM_H
