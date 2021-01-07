#include "Nodo.cpp"
class Lista {
public:
    Lista();
    void insertarInicio(Persona persona );
    void insertarFinal(Persona persona );
    void insertarEntre(Persona persona , int n);
    void borrarInicio();
    void borrarFinal();
    void borrarEntre(int);
    string rCorreoL(Persona);
    Nodo* getLista();
    Nodo* getListaFinal();
    //void borrar(string );
    bool listaVacia();
    string toString();
    int tamano();
    virtual ~Lista();
    void imprimirLista();
private:
    Nodo* lista;
    Nodo* listaFinal;

};
