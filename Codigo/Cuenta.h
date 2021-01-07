/***********************************************************************
 * Module:  Cuenta.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:37:35
 * Purpose: Declaration of the class Cuenta
 ***********************************************************************/
#if !defined(__Proyecto_Parcial_1_Cuenta_h)
#define __Proyecto_Parcial_1_Cuenta_h
#include "Persona.h"
#include <string>
using namespace std;

class Cuenta
{
public:
   void mostrarInformacion(Persona);
   string getId();
   float getSaldo();
   //bool getTarjeta();
   void setId(string);
   void setSaldo(float);
   Persona getPersona();
   void setPersona(Persona);
   //void setTarjeta(bool); 

protected:
private:
   std::string id;
   float saldo;
   Persona persona;
   //bool tarjeta;


};

#endif
