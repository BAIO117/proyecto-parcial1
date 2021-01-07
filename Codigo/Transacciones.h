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

class Transacciones
{
public:
   void deposito(Lista cuenta, srtring idCuenta);
   void retiro(Cuenta cuenta, float valor);

protected:
private:
   void comprobante(void);

   Fecha fecha;


};

#endif
