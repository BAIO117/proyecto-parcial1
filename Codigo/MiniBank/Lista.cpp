#include "Lista.h"
#include "Nodo.h"
#include "Cuenta.h"

#include <iostream>

using namespace std;
 
Lista::Lista()
{
    this->lista = NULL;
    this->listaFinal = NULL;
}

bool Lista::listaVacia()
{
    return (lista == NULL)?true:false;
}

void Lista::toString() {

    Nodo* aux = this->lista;
    Nodo* aux1 = new Nodo();

    //aux = this->lista;

    while (aux != this->listaFinal)
    {
        cout << "\tPropietario: " << aux->getCuenta().getPersona().getNombre()<< aux->getCuenta().getPersona().getApellido() << endl;
        cout << "\tCedula: " << aux->getCuenta().getPersona().getCedula() << endl;
        cout << "\tNumero de cuenta: " << aux->getCuenta().getId() ;
        cout << "\tSaldo disponible: " << aux->getCuenta().getSaldo()<< endl;
        cout << "\tTipo de cuenta: " << aux->getCuenta().getTipoDeCuenta() << endl;
        cout << "\tCorreo del propietario:" << aux->getCuenta().getPersona().getCorreo() << endl;
       
        aux1 = aux;
        aux = aux->getSiguiente();
    }
    
}

int Lista::tamanio()
{
    Nodo* aux = new Nodo();
    Nodo* aux1 = new Nodo();

    aux = this->lista;

    int posicion = 0;
    while (aux != this->listaFinal)
    {
        posicion++;
        aux1 = aux;
        aux = aux->getSiguiente();
    }

    return posicion + 1;
}

void Lista::insertarInicio(Cuenta dato)
{
    if (this->listaVacia())
    {
        cout << "OK" << endl;
        this->lista = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->lista;
        cout << "\tEXITO";
    }
    else
    {
        Nodo* aux = new Nodo(dato, lista, this->listaFinal);
        this->lista->setAnterior(aux);
        this->listaFinal->setSiguiente(aux);
        this->lista = aux;
    }

}


void Lista::insertarFinal(Cuenta dato)
{

    if (this->listaVacia())
    {
        this->lista = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->lista;
    }
    else
    {
        Nodo* aux = new Nodo(dato, this->lista, this->listaFinal);
        this->lista->setAnterior(aux);
        this->listaFinal->setSiguiente(aux);
        this->listaFinal = aux;
    }
    cout << "EXITO";
}


void Lista::insertarEntre(Cuenta dato, int n)
{
    if (this->listaVacia())
    {
        this->lista = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->lista;
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
        Nodo* aux = this->lista;
        Nodo* aux1 = NULL;

        int indice = 0;
        while (aux != this->listaFinal && indice != n)
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

bool Lista::buscar(string id) {
    Nodo* aux = new Nodo();
    Nodo* aux1 = new Nodo();

    aux = this->lista;

    bool respuesta = false;
    while (aux != this->listaFinal)
    {
        if (aux->getCuenta().getId() == id) {
            respuesta = true;

        }

        aux1 = aux;
        aux = aux->getSiguiente();
    }

    return respuesta;
}

Cuenta Lista::buscarYTraer(string id) {
    Nodo* aux = new Nodo();
    Nodo* aux1 = new Nodo();
    Cuenta auxCuenta;
    aux = this->lista;
    while (aux != this->listaFinal)
    {

        
        if (aux->getCuenta().getId() == id) {
            auxCuenta = aux->getCuenta();

        }
    

        aux1 = aux;
        aux = aux->getSiguiente();
    }

    return auxCuenta;
}



Nodo* Lista::getLista() {
    return this->lista;
}

Nodo* Lista::getListaFinal() {
    return this->listaFinal;
}

