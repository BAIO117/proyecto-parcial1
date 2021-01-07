#pragma once

#include "Fecha.h"
#include "Cuenta.h"

class Transacciones
{

public:
	void deposito(Cuenta cuenta, float valor);
	void retiro(Cuenta cuenta, float valor);

protected:
private:
	void comprobante(void);

	Fecha fecha;



};

