#include "juego.h"
#include "ui_juego.h"
#include "QPainter"

Juego::Juego(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Juego)
{
    ui->setupUi(this);
    QPoint centro = ui-> lienzo -> geometry().center();
    m_circulo = new Circulo();
    m_circulo->setX(centro.x());
    m_circulo->setY(centro.y());

}

Juego::~Juego()
{
    delete ui;
}

void Juego::on_btnArriba_released()
{
    m_circulo ->CirSubir();
}
void Juego::on_btnAbajo_released()
{
    m_circulo ->CirBajar();
}
void Juego::on_btnIzqueirda_released()
{
    m_circulo ->Cirzq();
}
void Juego::on_btnDerecha_released()
{
    m_circulo ->CirDer();
}
void Juego::on_actionConfigraci0n_triggered()
{
    Configuracion *config = new Configuracion(this);
    int respuesta = config->exec();
    if (respuesta){
        qDebug() << config->color().name();
        qDebug() << config->dimension();
    }
}
void Juego::on_actionSalir_triggered()
{
    this->close();
}
void Juego::dibujar()
{
    lienzo.fill(Qt::white);
    QPainter painter(&lienzo);
    int x = 0;
    int y = 0;
    QPen pincel;
    pincel.setWidth(5);
    pincel.setColor(Qt::black);
    pincel.setJoinStyle(Qt::MiterJoin);
    painter.setPen(pincel);
    painter.setBrush(Qt::yellow);

    int c = ui->lienzo;
    painter.drawRect(x+25, y+25,50,50);

}

