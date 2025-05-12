#ifndef VEHICULO_H
#define VEHICULO_H
#include <iostream>
#include <string>
using namespace std;

class Vehiculo {
    string codigo, marca, modelo;
    int anio;
    double kilometraje, precio;

public:
    Vehiculo(string c, string ma, string mo, int a, double km, double p);
    void info();
    string getCodigo() const;
};

#endif
