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
    void borrarInicio();
    void borrarFinal();
    void borrarEntre(int);
    bool buscar(string);
<<<<<<< HEAD:Codigo/Lista.h
    bool buscarYTraer(string);
    string rCorreoL(Persona);
=======
    Cuenta buscarYTraer(string );
    string rCorreoL(Cuenta);
>>>>>>> 27bb99032ce8e24f548d2d1118e34eac47b93624:Codigo/MiniBank/Lista.h
    Nodo* getLista();
    Nodo* getListaFinal();
    //void borrar(string );
    bool listaVacia();
    string toString();
    int tamanio();
    void imprimirLista();
private:
    Nodo* lista;
    Nodo* listaFinal;

};

