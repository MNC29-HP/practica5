#ifndef LOGICA_H
#define LOGICA_H
#include "Concesionario.h"

class Logica {
    Concesionario c;

public:
    void addVehiculo(string cod, string ma, string mo, int a, double km, double p);
    void addCliente(int d, string n, string dir, int t);
    string searchV(string cod);
    int searchC(int dni);
    void list();
};

#endif
