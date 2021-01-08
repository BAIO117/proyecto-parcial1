#include "Lista.h"


#pragma once

class Opciones
{
public:			
	void IngresarnuevaCuenta(Lista* cuentas);
	void realizarRetiro(Lista* cuentas);
	void realizarDeposito(Lista* cuentas);
	void mostarCuentas(Lista* cuentas);
	void buscarCuenta(Lista* cuentas);

};

