#ifndef CONCESIONARIO_H
#define CONCESIONARIO_H
#include <vector>
#include "Vehiculo.h"
#include "Cliente.h"

class Concesionario {
    vector<Vehiculo> vehiculo;
    vector<Cliente> cliente;

public:
    bool addVehiculo(const Vehiculo& v);
    bool addCliente(const Cliente& c);
    vector<Vehiculo> getVehiculo();
    vector<Cliente> getCliente();
};

#endif
