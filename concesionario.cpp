#include "Concesionario.h"

bool Concesionario::addVehiculo(const Vehiculo& v) {
    vehiculo.push_back(v);
    return true;
}

bool Concesionario::addCliente(const Cliente& c) {
    cliente.push_back(c);
    return true;
}

vector<Vehiculo> Concesionario::getVehiculo()
{
    return vehiculo;
}
vector<Cliente> Concesionario::getCliente()
{
    return cliente;
}
