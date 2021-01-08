#ifndef DEPOSITO_H
#define DEPOSITO_H

#include "Transaccion.h"

class Deposito: public Transaccion
{
	public:
		void transferir();
};

#endif