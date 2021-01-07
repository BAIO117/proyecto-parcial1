/***********************************************************************
 * Module:  Cuenta.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:37:35
 * Purpose: Declaration of the class Cuenta
 ***********************************************************************/
#include "Persona.h"
#if !defined(__Proyecto_Parcial_1_Cuenta_h)
#define __Proyecto_Parcial_1_Cuenta_h

class Transacciones;

class Cuenta
{
public:
   void mostrarInformacion(Persona);
   Transacciones transacciones;
   string getId();
   float getSaldo();
   bool getTarjeta();
   void setId(string);
   void setSaldo(float);
   void setTarjeta(bool); 

protected:
private:
   std::string id;
   float saldo;
   bool tarjeta;


};

#endif
