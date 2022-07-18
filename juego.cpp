#include "juego.h"
#include "ui_juego.h"

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

Juego::Dibujar()
{
   geometry(Circulo);
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
void Juego::Dibujar();


void Juego::on_lienzo_rubberBandChanged(const QRect &viewportRect, const QPointF &fromScenePoint, const QPointF &toScenePoint)
{
    DrawWindowBackground;
    m_circulo
}

