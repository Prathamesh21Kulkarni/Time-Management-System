#include "mainprogram.h"
#include "ui_mainprogram.h"

MainProgram::MainProgram(QWidget *parent) :
    QMainWindow(parent),
    main_ui(new Ui::MainProgram)
{
    main_ui->setupUi(this);
}

MainProgram::~MainProgram()
{
    delete main_ui;
}
