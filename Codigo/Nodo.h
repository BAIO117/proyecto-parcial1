#include "Persona.cpp"
class Nodo
{
public:
    Nodo();
    Nodo (Persona, Nodo*siguiente, Nodo*anterior);
    void setPersona(Persona persona);
    void setSiguiente(Nodo* nodo);
    void setAnterior(Nodo* nodo);
    Persona getPersona();
    Nodo* getSiguiente();
    Nodo* getAnterior();
    string toString();
    //void mostrar();
    virtual ~Nodo();
private:
    Persona persona;
    Nodo* siguiente;
    Nodo* anterior;
};
