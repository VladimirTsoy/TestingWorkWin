#include "painter.h"

void Painter::paintEvent(QPaintEvent *_pEvent)
{
    QPainter p(this);
    p.translate(getCSAbsTranslate(), getCSOrdTranslate());
    p.scale(getCSAbsScale(), getCSOrdScale());

    /// Координатные оси
    p.save();
    Grapher2D::paintEvent(_pEvent);
    p.restore();

    /// Настройка пера и кисти
    QPen pen;
    QBrush brush;
    pen.setCosmetic(true);
    pen.setColor(Qt::blue);
    pen.setWidth(2);
    p.setPen(pen);
    brush.setColor(Qt::blue);
    brush.setStyle(Qt::SolidPattern);
    p.setBrush(brush);

    /// Рисуем точки
    for(QPointF poin: points)
        p.drawEllipse(poin, 0.3, 0.3);
}

void Painter::refresh()
{
    points.clear();
}

void Painter::add_point(QPointF point)
{
    points.push_back(point);
    this->update();
}
