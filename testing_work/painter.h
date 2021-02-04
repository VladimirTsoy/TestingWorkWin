#ifndef PAINTER_H
#define PAINTER_H
#include "grapher2d.h"
#include <QtWidgets>

class Painter: public Grapher2D
{
public:
    Painter() {}
    virtual void paintEvent(QPaintEvent *_pEvent) override; // Отрисовка точек
    void refresh(); // Чистка вектора

public slots:
    void add_point(QPointF point);  // Добавление точки в вектор для отрисовки

private:
    QVector<QPointF> points;    // Веткор для хранения точек
};

#endif // PAINTER_H
