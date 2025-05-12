#include "Cliente.h"

Cliente::Cliente(int d, string n, string dir, int t)
    : dni(d), nombre(n), direccion(dir), telefono(t) {}

void Cliente::info() {
    cout << "DNI: " << dni << ", Nombre: " << nombre << ", Direccion: " << direccion
         << ", Telefono: " << telefono << endl;
}

int Cliente::getDNI() const
{
    return dni;
}
