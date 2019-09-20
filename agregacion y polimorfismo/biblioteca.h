//
// Created by Alejandro  Otero on 2019-09-18.
//

#ifndef AGREGACION_Y_POLIMORFISMO_BIBLIOTECA_H
#define AGREGACION_Y_POLIMORFISMO_BIBLIOTECA_H

#endif //AGREGACION_Y_POLIMORFISMO_BIBLIOTECA_H

#include <iostream>
#include <string>

class Volumen{
    std::string nombre;
    int numVol;
public:
    virtual void mostrar()=0;
};

class Libro:public Volumen{
private:
    int numLibros;
public:
    void mostrar();
};

class Revista:public Volumen{
private:
    int numRevistas;
public:
    void mostrar();
};

class Biblioteca{
private:
    int maxLibros;
    int maxRevistas;
public:
    void mostrarLibros();
    bool incluir(Volumen&);
};