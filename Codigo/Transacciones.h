/***********************************************************************
 * Module:  Transacciones.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 17:49:50
 * Purpose: Declaration of the class Transacciones
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Transacciones_h)
#define __Proyecto_Parcial_1_Transacciones_h

#include <Fecha.h>
#include <Cuenta.h>
#include <Lista.h>

class Transacciones
{
public:
   Transacciones();
   bool deposito(Lista, srtring);
   void retiro(Cuenta cuenta, float valor);
   void comprobante(Cuenta,float,char);
protected:
private:
   Fecha fecha;
};

#endif
