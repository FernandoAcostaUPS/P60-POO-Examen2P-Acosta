#ifndef CIRCULO_H
#define CIRCULO_H

#include <QPoint>
#include <QPainter>
#include <QColor>
#include <QDrag>

class Circulo : public QPoint
{
public:
    Circulo();
    Circulo(int xpos, int ypos);
    CirSubir();
    CirBajar();
    Cirzq();
    CirDer();

protected:

};

#endif // CIRCULO_H
