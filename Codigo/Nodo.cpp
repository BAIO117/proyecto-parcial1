#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>
#include "Nodo.h"
using namespace std;
Nodo::Nodo(){
    this->siguiente=NULL;
    this->anterior=NULL;
}
Nodo::Nodo (Persona persona, Nodo* siguiente, Nodo* anterior)
{
    this->persona=persona;
    this->siguiente=siguiente;
    this->anterior=anterior;
}
void Nodo::setPersona(Persona persona)
{
    this->persona=persona;
}
void Nodo::setSiguiente(Nodo* nodo)
{
    this->siguiente=nodo;
}
void Nodo::setAnterior(Nodo* nodo)
{
    this->anterior=nodo;
}
Persona Nodo::getPersona()
{
    return this->persona;
}
Nodo* Nodo::getSiguiente()
{
    return this->siguiente;
}
Nodo* Nodo::getAnterior()
{
    return this->anterior;
}


Nodo::~Nodo() {}
