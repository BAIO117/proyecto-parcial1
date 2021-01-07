/***********************************************************************
 * Module:  Transacciones.cpp
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 17:49:50
 * Purpose: Implementation of the class Transacciones
 ***********************************************************************/

#include "Transacciones.h"
#include "Cuenta.h"
#include "Lista.h"
#include "Fecha.h"
#include <iostream>

using namespace std;

////////////////////////////////////////////////////////////////////////
// Name:       Transacciones::deposito(Cuenta cuenta, float valor)
// Purpose:    Implementation of Transacciones::deposito()
// Parameters:
// - cuenta
// - valor
// Return:     void
////////////////////////////////////////////////////////////////////////

Transacciones::Transacciones(){
   fecha = new Fecha();
}

bool Transacciones::deposito(Lista cuentas, string idCuenta)
{
  
   bool respuesta=false;
   float monto;
   if(cuentas.buscar(idCuenta)){
      cout<<"Ingrese el monto que se desea depositar en la cuenta: ";
      cin>>monto;
      while (monto < 0)
      {
         cout<<"Ingrese nuevamente el monto que se desea depositar en la cuenta: ";
         cin>>monto;
      }
      
      Cuenta aux;
      aux=cuentas.buscarYTraer(idCuenta);
      aux.setSaldo(aux.getSaldo()+monto);
      cout<<"Transaccion exitosa!";
      respuesta=true;
   }else{
      cout<<"Por favor ingresar un número de cuenta válido"<<endl;
   }
   return respuesta;
}

////////////////////////////////////////////////////////////////////////
// Name:       Transacciones::retiro(Cuenta cuenta, float valor)
// Purpose:    Implementation of Transacciones::retiro()
// Parameters:
// - cuenta
// - valor
// Return:     void
////////////////////////////////////////////////////////////////////////

void Transacciones::retiro(Cuenta cuenta, float valor)
{
   // TODO : implement
}

////////////////////////////////////////////////////////////////////////
// Name:       Transacciones::comprobante()
// Purpose:    Implementation of Transacciones::comprobante()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Transacciones::comprobante(Cuenta cuenta, float monto, char T)
{
   Persona auxP;
   cout<<"Comprobante de Transaccion"<<endl;
   if(T=='R'){
      cout<<"Tipo de transaccion: Retiro"<<endl;
   }else{
      cout<<"Tipo de transaccion: Deposito"<<endl;
   }
   cout<<"Datos de la cuenta bancara: "<<endl;
   cuenta.mostrarInformacion<<endl;
   cout<<"Monto de transaccion: "<<monto<<endl;
   auxP = cuenta.getPersona();
   cout<<"Datos del titular:"<<endl;
   auxP.mostrarInformacion<<endl;
}
