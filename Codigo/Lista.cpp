
#include "Lista.h"
#include <iostream>

using namespace std;
bool Lista::listaVacia()
{
    return lista==NULL;
}

Lista::Lista()
{
    this->lista = NULL;
    this->listaFinal = NULL;
}

int Lista::tamano()
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

void Lista::insertarInicio(Persona dato)
{
    if (this->listaVacia())
    {
        this->lista = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->lista;
        cout <<"EXITO";
    }
    else
    {
        Nodo* aux = new Nodo(dato, lista, this->listaFinal);
        this->lista->setAnterior(aux);
        this->listaFinal->setSiguiente(aux);
        this->lista = aux;
    }

}

void Lista::insertarFinal(Persona dato)
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
    cout <<"EXITO";
}

void Lista::insertarEntre(Persona dato, int n)
{
    if (this->listaVacia())
    {
        this->lista = new Nodo(dato, this->listaFinal, this->listaFinal);
        this->listaFinal = this->lista;
    }
    else if (n <= 1 || this->tamano() <= n)
    {
        if (n == 1)
        {
            this->insertarInicio(dato);
        }
        else if (n == this->tamano())
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
    cout <<"EXITO";
}


Lista::~Lista() {}


void Lista::imprimirLista()
{
    Nodo* aux = this->lista;
    Persona persona;
    int cont=0;
    if (this->lista == NULL)
    {
        cout << "NULL";
    }
    else
    {
        while (cont < this->tamano())
        {
            persona =aux->getPersona();
            //cout<<persona.getCedula()<<"    "<<persona.getApellido()<<"   "<<persona.getNombre()<<"   "<<persona.getEdad()<<"   "<<persona.getCorreo()<<endl;
            aux = aux->getSiguiente();
            cont++;
        }

    }

}
string Lista::rCorreoL(Persona persona){
    Nodo* aux = this->lista;
    Persona auxP;
    string nombre1,nombre2,apellido1,apellido2;
    nombre1=persona.getNombre();
    int cont=0;
    int n=1;

    if (this->lista == NULL)
    {
        return persona.rCorreo();
    }
    else
    {
        while (cont < this->tamano())
        {
            auxP =aux->getPersona();
            nombre2=auxP.getNombre();
            if ((auxP.getApellido()==persona.getApellido())&&(nombre1[0]==nombre2[0]))
                n++;
            aux = aux->getSiguiente();
            cont++;
        }

    }
    if (n==1)
        return persona.rCorreo();
    else
        return persona.rCorreo(n);
}


