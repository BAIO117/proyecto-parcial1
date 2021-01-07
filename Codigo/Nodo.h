#include "Persona.cpp"
#include "Cuenta.h"
class Nodo
{
public:
    Nodo();
    Nodo (Cuenta, Nodo*siguiente, Nodo*anterior);
    void setCuenta(Cuenta cuenta);
    void setSiguiente(Nodo* nodo);
    void setAnterior(Nodo* nodo);
    Cuenta getCuenta();
    Nodo* getSiguiente();
    Nodo* getAnterior();
    string toString();
    //void mostrar();
    virtual ~Nodo();
private:
    Cuenta cuenta;
    Nodo* siguiente;
    Nodo* anterior;
};
