#ifndef RETIRO_H
#define RETIRO_H

#include "Transaccion.h"

class Retiro: public Transaccion
{
	public:
		void transferir();
};

#endif