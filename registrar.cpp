#include "Registrar.h"

void Registrar::menu(char o) {
    switch (o) {
    case '1': registerVehiculo(); break;
    case '2': registerCliente(); break;
    case '3': consultar(); break;
    case '4': cout << "Saliendo del programa...\n"; break;
    default: cout << "Opcion invalida.\n"; break;
    }
}

void Registrar::ejecutar(char o) { menu(o); }

void Registrar::registerVehiculo() {
    string cod, marca, modelo;
    int anio;
    double km, precio;
    cout << "\nCodigo: "; cin >> cod;
    cout << "Marca: "; cin >> marca;
    cout << "Modelo: "; cin >> modelo;
    cout << "Anio: "; cin >> anio;
    cout << "Kilometraje: "; cin >> km;
    cout << "Precio: "; cin >> precio;
    l.addVehiculo(cod, marca, modelo, anio, km, precio);
}

void Registrar::registerCliente() {
    int dni, tel;
    string nom, dir;
    cout << "\nDNI: "; cin >> dni;
    cout << "Nombre: "; cin >> nom;
    cout << "Direccion: "; cin >> dir;
    cout << "Telefono: "; cin >> tel;
    l.addCliente(dni, nom, dir, tel);
}

void Registrar::consultar() {
    char c;
    cout << "\nConsultar por (v)ehiculo / (c)liente / (l)istar todo: "; cin >> c;
    if (c == 'v') {
        string cod;
        cout << "Codigo del vehiculo: "; cin >> cod;
        cout << l.searchV(cod) << endl;
    } else if (c == 'c') {
        int dni;
        cout << "DNI del cliente: "; cin >> dni;
        if (!l.searchC(dni)) cout << "Cliente no encontrado.\n";
    } else if (c == 'l') {
        l.list();
    } else {
        cout << "Opcion invalida.\n";
    }
}

void Registrar::registerInterface() {
    do {
        cout << "\n--- MENU ---\n";
        cout << "1. Registrar vehiculo\n2. Registrar cliente\n3. Consultar\n4. Salir\n";
        cout << "Seleccione una opcion: "; cin >> opt;
        ejecutar(opt);
    } while (opt != '4');
}
