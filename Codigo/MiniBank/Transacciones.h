#pragma once

#include "Fecha.h"
#include "Cuenta.h"
#include "Lista.h"

class Transacciones
{

public:
	bool deposito(Lista cuentas, string idCuenta);
	bool retiro(Lista cuentas, string idCuenta);

protected:
private:
	void comprobante(void);

	Fecha fecha;



};

