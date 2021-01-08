#pragma once

//#include <string>
#include "Persona.h"

enum TipoDeCuenta {
	Ahorros = 1,
	Corriente= 0
};


class Cuenta
{

public:
	void mostrarInformacion();
	string getId();
	float getSaldo();
	//bool getTarjeta();
	void setId(string);
	void setSaldo(float);
	Persona getPersona();
	void setPersona(Persona);
	//void setTarjeta(bool); 

protected:
private:
	std::string id;
	float saldo;
	Persona persona;
	//bool tarjeta;


};

