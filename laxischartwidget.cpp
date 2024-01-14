#include "laxischartwidget.h"
#include <QPainter>
#include <QDebug>
LAxisChartWidget::LAxisChartWidget(QWidget *parent) : QWidget(parent)
{

}

void LAxisChartWidget::setValue(QVector<qreal> values)
{
    this->series = values;
}

void LAxisChartWidget::paintEvent(QPaintEvent *event)
{

    QPainter *painter = new QPainter(this);
    painter->setRenderHint(QPainter::Antialiasing);
    painter->setWindow(QRect(-50, -50, 100, 100));
    // qreal width = this->width();
    // qreal height = this->height();
    painter->setBrush(Qt::white);
    QFont font("Arial", 1);
    painter->setFont(font);
    QPen pen(Qt::black);
    pen.setWidthF(0.1);
    painter->setPen(pen);
    painter->drawRect(QRect(-5, -50, 10, 100));
    painter->drawLine(0, -50, 0, 50);
    painter->drawText(QRect(0, -50, 10, 10), "-L");
    painter->drawLine(QPointF(-0.5, -50), QPointF(0.5, -50));
    painter->drawText(QRect(1, -41, 3, 3), "-4");
    painter->drawLine(QPointF(-0.5, -40), QPointF(0.5, -40));
    painter->drawText(QRect(1, -31, 3, 3), "-3");
    painter->drawLine(QPointF(-0.5, -30), QPointF(0.5, -30));
    painter->drawText(QRect(1, -21, 3, 3), "-2");
    painter->drawLine(QPointF(-0.5, -20), QPointF(0.5, -20));
    painter->drawText(QRect(1, -11, 3, 3), "-1");
    painter->drawLine(QPointF(-0.5, -10), QPointF(0.5, -10));
    painter->drawText(QRect(1, -1, 3, 3), "-0");
    painter->drawLine(QPointF(-0.5, 0), QPointF(0.5, 0));
    painter->drawText(QRect(1, 9, 3, 3), "1");
    painter->drawLine(QPointF(-0.5, 10), QPointF(0.5, 10));
    painter->drawText(QRect(1, 19, 3, 3), "2");
    painter->drawLine(QPointF(-0.5, 20), QPointF(0.5, 20));
    painter->drawText(QRect(1, 29, 3, 3), "3");
    painter->drawLine(QPointF(-0.5, 30), QPointF(0.5, 30));
    painter->drawText(QRect(1, 39, 3, 3), "4");
    painter->drawLine(QPointF(-0.5, 40), QPointF(0.5, 40));
    painter->drawText(QRect(1, 49, 3, 3), "5");
    painter->drawLine(QPointF(-0.5, 50), QPointF(0.5, 50));
    painter->drawText(QRect(0, 45, 10, 5), "+L");
    if (!this->series.isEmpty()) {
        QPen seriesPen(Qt::green);
        painter->setPen(seriesPen);
        for (auto v : this->series) {
            painter->drawEllipse(QPointF(0, v*10), 0.5, 0.5);
        }
    }
    painter->end();
}
