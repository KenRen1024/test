#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_Qw1.h"

class Qw1 : public QMainWindow
{
    Q_OBJECT

public:
    Qw1(QWidget *parent = nullptr);
    ~Qw1();

private:
    Ui::Qw1Class ui;
};
