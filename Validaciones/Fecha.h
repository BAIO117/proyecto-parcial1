#include <iostream>
#include <sstream>
#include <string.h>
using namespace std;

class Fecha{
    public:
        Fecha (int, int, int);
        Fecha();
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        string toString();
        int getDia ();
        int getMes ();
        int getAnio ();
        int getEdad();

    private:
        int dia;
        int mes;
        int anio;


};

