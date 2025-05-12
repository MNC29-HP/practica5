#ifndef CLIENTE_H
#define CLIENTE_H
#include <iostream>
#include <string>
using namespace std;

class Cliente {
    int dni, telefono;
    string nombre, direccion;

public:
    Cliente(int d, string n, string dir, int t);
    void info();
    int getDNI() const;
};

#endif
