/***********************************************************************
 * Module:  Transacciones.cpp
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 17:49:50
 * Purpose: Implementation of the class Transacciones
 ***********************************************************************/

#include "Transacciones.h"
#include "Cuenta.h"
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

void Transacciones::deposito(Cuenta cuenta, float valor)
{
   // TODO : implement
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
	
	// CONDICIONAL DE CHECKEO
	if (cuenta.getSaldo() <= valor) // SI SE CUMPLE, ENTRAMOS AL CONDICIONAL
	{

		cuenta.setSaldo(cuenta.getSaldo() - valor) ;

		cout << "\nHas retirado exitosamente " << valor << "USD, tu saldo actual es de " << cuenta.getSaldo();

	}
	else
	{
		cout << "\nNo tienes suficiente dinero, tu saldo actual es de"<< cuenta.getSaldo();
	}

}

////////////////////////////////////////////////////////////////////////
// Name:       Transacciones::comprobante()
// Purpose:    Implementation of Transacciones::comprobante()
// Return:     void
////////////////////////////////////////////////////////////////////////

void Transacciones::comprobante(void)
{
   // TODO : implement
}