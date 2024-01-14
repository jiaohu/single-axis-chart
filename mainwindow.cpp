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
    // QGraphicsView *view = new QGraphicsView;
    // QGraphicsScene *scene = new QGraphicsScene();
    // int scale = qMin(width(), height());
    // this->resize(scale, scale);
    LAxisChartWidget *w = new LAxisChartWidget();
    // QGraphicsProxyWidget* proxyWidget  = scene->addWidget(w);

    // Set the position of the proxy widget in the scene
    // proxyWidget->setPos(100, 0);
    // proxyWidget->mapRectToScene(-50, -50, 100, 100);

    // qDebug()<<scene->sceneRect();
    // view->setScene(scene);
    // view->mapFromScene(-50, -50);
    // view->setSceneRect(scene->sceneRect());
    // this->setCentralWidget(view);
    ui->verticalLayout->addWidget(w);
}

MainWindow::~MainWindow()
{
    delete ui;
}
