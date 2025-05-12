#include "Logica.h"

void Logica::addVehiculo(string cod, string ma, string mo, int a, double km, double p) {
    c.addVehiculo(Vehiculo(cod, ma, mo, a, km, p));
}

void Logica::addCliente(int d, string n, string dir, int t) {
    c.addCliente(Cliente(d, n, dir, t));
}

string Logica::searchV(string cod) {
    for (auto& v : c.getVehiculo())
        if (v.getCodigo() == cod) {
            v.info();
            return "Encontrado";
        }
    return "Vehiculo no encontrado";
}

int Logica::searchC(int dni) {
    for (auto& cl : c.getCliente())
        if (cl.getDNI() == dni) {
            cl.info();
            return 1;
        }
    return 0;
}

void Logica::list() {
    cout << "\n=== VEHICULOS ===" << endl;
    for (auto& v : c.getVehiculo()) v.info();
    cout << "\n=== CLIENTES ===" << endl;
    for (auto& cl : c.getCliente()) cl.info();
}
