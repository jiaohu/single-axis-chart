#include "laxischartwidget.h"
#include <QPainter>
#include <QDebug>
LAxisChartWidget::LAxisChartWidget(QWidget *parent) : QWidget(parent)
{

}

void LAxisChartWidget::paintEvent(QPaintEvent *event)
{

    QPainter *painter = new QPainter(this);
    painter->setWindow(QRect(-50, -50, 100, 100));
    // qreal width = this->width();
    // qreal height = this->height();
    painter->setBrush(Qt::white);
    // QFont font("Arial", 10);
    // painter->setFont(font);
    QPen pen(Qt::red);
    painter->setPen(pen);
    // painter->setViewport(0, 0, 100, 100);
    painter->drawRect(QRectF(-50, -50, 100, 100));
    painter->drawEllipse(QRectF(-50, -50, 100, 100));
    painter->drawText(QPointF(0, 0), "hello");
    painter->drawText(QPointF(10, 0), "start");
    painter->end();
}
