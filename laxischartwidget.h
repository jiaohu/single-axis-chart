#ifndef LAXISCHARTWIDGET_H
#define LAXISCHARTWIDGET_H

#include <QWidget>

class LAxisChartWidget : public QWidget
{
public:
    explicit LAxisChartWidget(QWidget *parent = nullptr);

    // QWidget interface
protected:
    void paintEvent(QPaintEvent *event) override;
};

#endif // LAXISCHARTWIDGET_H
