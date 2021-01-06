/***********************************************************************
 * Module:  Corriente.cpp
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:29:09
 * Purpose: Implementation of the class Corriente
 ***********************************************************************/

#include "Corriente.h"

////////////////////////////////////////////////////////////////////////
// Name:       Corriente::getChequera()
// Purpose:    Implementation of Corriente::getChequera()
// Return:     bool
////////////////////////////////////////////////////////////////////////

bool Corriente::getChequera(void)
{
   return chequera;
}

////////////////////////////////////////////////////////////////////////
// Name:       Corriente::setChequera(bool newChequera)
// Purpose:    Implementation of Corriente::setChequera()
// Parameters:
// - newChequera
// Return:     void
////////////////////////////////////////////////////////////////////////

void Corriente::setChequera(bool newChequera)
{
   chequera = newChequera;
}

////////////////////////////////////////////////////////////////////////
// Name:       Corriente::Corriente()
// Purpose:    Implementation of Corriente::Corriente()
// Return:     
////////////////////////////////////////////////////////////////////////

Corriente::Corriente()
{
   chequera = true;
}

////////////////////////////////////////////////////////////////////////
// Name:       Corriente::~Corriente()
// Purpose:    Implementation of Corriente::~Corriente()
// Return:     
////////////////////////////////////////////////////////////////////////

Corriente::~Corriente()
{
   // TODO : implement
}