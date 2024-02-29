#include "triangle.h"

Triangle::Triangle(QPointF p1, QPointF p2, QPointF p3) {
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);

    triangle = (QPolygonF() << p1 << p2 << p3);
    setTransformOriginPoint(boundingRect().width() / 2.0, boundingRect().height() / 2.0);

    const int sides = 3;

    for(int i = 0; i < sides - 1; i++)
    {
        Area += (triangle[i].x() * triangle[i + 1].y() - triangle[i].y() * triangle[i + 1].x());
    }
    Area += (triangle[sides - 1].x() * triangle[0].y() - triangle[sides - 1].y() * triangle[0].x());
    Area = abs(Area) / 2;

    Perimetr += QLineF(p1, p2).length() + QLineF(p2, p3).length() + QLineF(p3, p1).length();

    // Area = 2100;
    // Perimetr = 212.31546;
}

QRectF Triangle::boundingRect() const {
    return triangle.boundingRect();
}

void Triangle::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) {
    painter->setBrush(Qt::blue);
    painter->drawPolygon(triangle);

    Q_UNUSED(option)
    Q_UNUSED(widget)
}

QPainterPath Triangle::shape() const {
    QPainterPath path;
    path.addPolygon(triangle);
    return path;
}
