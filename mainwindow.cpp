#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "laxischartwidget.h"
#include <QGraphicsView>
#include <QDebug>
#include<QGraphicsProxyWidget>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    LAxisChartWidget *w = new LAxisChartWidget();
    QVector<qreal> series;
    series.append(1);
    series.append(2);
    series.append(3);
    w->setValue(series);
    ui->verticalLayout->addWidget(w);
}

MainWindow::~MainWindow()
{
    delete ui;
}
