
/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */
#include "systemcproject.h"
#include "ui_systemcproject.h"

systemcProject::systemcProject(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::systemcProject)
{
    ui->setupUi(this);
}

systemcProject::~systemcProject()
{
    delete ui;
}
