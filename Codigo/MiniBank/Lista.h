#pragma once
#include"Cuenta.h"
#include "Nodo.h"

class Lista
{

public:
    Lista();
    void insertarInicio(Cuenta);
    void insertarFinal(Cuenta);
    void insertarEntre(Cuenta, int n);
    void modificarNodo(string,float);
    void borrarInicio();
    void borrarFinal();
    void borrarEntre(int);
    bool buscar(string);
    //bool buscarYTraer(string);
    string rCorreoL(Persona);
    Cuenta buscarYTraer(string );
    string rCorreoL(Cuenta);
    Nodo* getNodo();
    void setNodo(Nodo*);
    //void borrar(string );
    bool listaVacia();
    void toString();
    int tamanio();
    void imprimirLista();
private:
    Nodo* nodo;
    

};

