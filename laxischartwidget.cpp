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
    Q_UNUSED(event)
    QPainter *painter = new QPainter(this);
    painter->setRenderHints(QPainter::Antialiasing | QPainter::TextAntialiasing);
    painter->setWindow(QRect(-50, -55, 100, 110));
    painter->setBrush(Qt::white);
    QFont font("Arial", 2);
    painter->setFont(font);
    QPen pen(Qt::black);
    pen.setWidthF(0.1);
    painter->setPen(pen);
    painter->drawRect(QRect(-5, -55, 10, 110));
    painter->drawLine(0, -50, 0, 50);
    painter->drawText(QRect(-5, -50, 10, 5), "-L");
    for (int i = -5; i <= 5; i ++) {
        painter->drawLine(QPointF(-0.5, i * 10), QPointF(0.5, i * 10));
        painter->drawText(QRect(1, i * 10, 3, 3), QString("%1").arg(-i));
    }
    painter->drawText(QRect(-5, 50, 10, 5), "+L");
    if (!this->series.isEmpty()) {
        QPen seriesPen(Qt::green);
        painter->setPen(seriesPen);
        for (auto v : qAsConst(this->series)) {
            painter->drawEllipse(QPointF(0, v*10), 0.5, 0.5);
        }
    }
    painter->end();
}
