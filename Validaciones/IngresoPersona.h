
#include "Lista.cpp"
class IngresoPersona
{
public:
    void ingresoDatos();
    void imprimirDatos();
    void setPersona(Persona);
    int validarCedula(string);
    int suma(int[]);
    Persona getPersona();
private:
    Persona persona;
};

