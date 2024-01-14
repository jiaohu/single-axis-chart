#ifndef LAXISCHARTWIDGET_H
#define LAXISCHARTWIDGET_H

#include <QWidget>

class LAxisChartWidget : public QWidget
{
public:
    explicit LAxisChartWidget(QWidget *parent = nullptr);

    void setValue(QVector<qreal> values);
    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event) override;
private:
    QVector<qreal> series;
};

#endif // LAXISCHARTWIDGET_H
