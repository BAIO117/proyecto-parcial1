#include "Lista.h"
#include "Nodo.h"
#include "Cuenta.h"

#include <iostream>
#include <string>

using namespace std;
 
Lista::Lista()
{
    this->nodo = NULL;
}

bool Lista::listaVacia()
{
    return (nodo == NULL)?true:false;
}

void Lista::toString() {

    Nodo* aux = this->nodo;
    Nodo* aux1 = new Nodo();

    //aux = this->nodo;
    if (listaVacia())
    {
        cout << "\n\n\n\tSIN DATOS....\n\n\t" ;
    }
    else
    {
        while (aux != NULL)
        {
            aux->cuenta.mostrarInformacion();
            aux = aux->getSiguiente();
        }
    }

    
    
}

int Lista::tamanio()
{
    int tamanio = 0;
    Nodo* aux = this->nodo;
    Nodo* aux_1 = new Nodo();
    //aux = this->lista;
    
    while (aux != NULL)
    {
        tamanio++;
        aux_1 = aux;
        aux = aux->getSiguiente();
    }

    return tamanio ;
}

void Lista::insertarInicio(Cuenta dato)
{
    if (this->listaVacia())
    {
        
        this->nodo = new Nodo(dato, NULL, NULL);
        //this->listaFinal = this->lista;
        
    }
    else
    {
    
        Nodo* aux = new Nodo(dato,nodo, NULL);
        this->nodo->setAnterior(aux);
        this->nodo = aux;
    }

}

void Lista::insertarFinal(Cuenta dato)
{

    if (this->listaVacia())
    {
        this->nodo = new Nodo(dato, NULL, NULL);
    }
    else
    {
        Nodo* aux_1 = new Nodo();
        Nodo* aux_2;
        Nodo* aux = this->nodo;

        //aux = this->nodo;

        while (aux != NULL)
        {
            aux_1 = aux;
            aux = aux->getSiguiente();
        }

        aux_2 = new Nodo(dato, aux_1->getSiguiente(), aux_1->getAnterior());
    }
    cout << "EXITO";
}

void Lista::insertarEntre(Cuenta dato, int n)
{
    if (this->listaVacia())
    {
        this->nodo = new Nodo(dato, NULL, NULL);
      
    }
    else if (n <= 1 || this->tamanio() <= n)
    {
        if (n == 1)
        {
            this->insertarInicio(dato);
        }
        else if (n == this->tamanio())
        {
            this->insertarFinal(dato);
        }
        else
        {
            cout << "Fuera de rango" << endl;
        }
        system("pause");
    }
    else
    {
        Nodo* aux = this->nodo;
        Nodo* aux1 = NULL;

        int indice = 0;
        while (aux != NULL && indice != n)
        {
            aux1 = aux;
            aux = aux->getSiguiente();
            indice++;
        }
        Nodo* anteriorNodo = aux1->getAnterior();
        Nodo* aux2 = new Nodo(dato, aux1, anteriorNodo);

        anteriorNodo->setSiguiente(aux2);
        aux1->setAnterior(aux2);

    }
    cout << "EXITO";
}



void Lista::modificarNodo(string id,float saldo) {
    Nodo* aux = new Nodo();
    Cuenta auxCuenta;
    aux = this->nodo;

    while (aux != NULL)
    {

        if ( aux->getCuenta().getId() == id) {
            auxCuenta = aux->getCuenta();            
            auxCuenta.setSaldo(saldo);
            aux->setCuenta(auxCuenta);

        }

        aux = aux->getSiguiente();
    }

    
}

Nodo* Lista::getNodo() {
    return this->nodo;
}

void Lista::setNodo(Nodo *nodo) {
    this->nodo = nodo;
}


