#pragma once

#include <QtWidgets/QWidget>
#include "ui_demo.h"

class demo : public QWidget
{
    Q_OBJECT

public:
    demo(QWidget *parent = Q_NULLPTR);

private:
    Ui::demoClass ui;
};
