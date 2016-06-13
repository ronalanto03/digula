/**
 *  \brief     Systemc Project
 *  \author    Ronald Sulbaran
 *  \author    Julio Jaimes R.
 *  \date      2016
 */

#ifndef SYSTEMCPROJECT_H
#define SYSTEMCPROJECT_H
#include"ports.h"
#include <QMainWindow>

namespace Ui {
class systemcProject;
}

class systemcProject : public QMainWindow
{
    Q_OBJECT

public:
    explicit systemcProject(QWidget *parent = 0);
    ~systemcProject();

private:
    Ui::systemcProject *ui;
};

#endif // SYSTEMCPROJECT_H
