#ifndef REGISTRAR_H
#define REGISTRAR_H
#include "Logica.h"

class Registrar {
    char opt;
    Logica l;

    void menu(char o);
    void ejecutar(char o);
    void registerVehiculo();
    void registerCliente();
    void consultar();

public:
    void registerInterface();
};

#endif
