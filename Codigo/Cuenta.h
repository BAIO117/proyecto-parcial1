/***********************************************************************
 * Module:  Cuenta.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:37:35
 * Purpose: Declaration of the class Cuenta
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Cuenta_h)
#define __Proyecto_Parcial_1_Cuenta_h
#include <string>

class Transacciones;

class Cuenta
{
public:
   void mostrarInformacion(void);


   Transacciones** transacciones;

   void setSaldo(float);
   float getSaldo();


protected:
public:
   std::string id;
   float saldo;
   bool tarjeta;


};

#endif