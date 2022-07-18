/*
 * UNIVERSIDAD POLITÉCNICA SALESIANA
 * ACOSTA RODAS JUAN FERNANDO
 * PROGRAMACIÓN ORIENTADA A OBJETOS
 * 18/07/2022
 * */

#include "juego.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Juego w;
    w.show();
    return a.exec();
}
