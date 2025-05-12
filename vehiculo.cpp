#include "Vehiculo.h"

Vehiculo::Vehiculo(string c, string ma, string mo, int a, double km, double p)
    : codigo(c), marca(ma), modelo(mo), anio(a), kilometraje(km), precio(p) {}

void Vehiculo::info() {
    cout << "Codigo: " << codigo << ", Marca: " << marca << ", Modelo: " << modelo
         << ", Anio: " << anio << ", Km: " << kilometraje << ", Precio: $" << precio << endl;
}

string Vehiculo::getCodigo() const
{
    return codigo;
}
