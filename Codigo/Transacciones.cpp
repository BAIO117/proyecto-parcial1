/***********************************************************************
 * Module:  Transacciones.cpp
 * Author:  ismae
 * Modified: mi�rcoles, 6 de enero de 2021 17:49:50
 * Purpose: Implementation of the class Transacciones
 ***********************************************************************/

#include "Transacciones.h"

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
    if (valor < 0)
    {
        throw "amount cant be negative";
    }

    float saldoActualizado = cuenta.getSaldo() + valor;
    cuenta.setSaldo(saldoActualizado);
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

void Transacciones::comprobante(void)
{
   // TODO : implement
}