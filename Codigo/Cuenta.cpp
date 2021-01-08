/***********************************************************************
 * Module:  Cuenta.cpp
 * Author:  ismae
<<<<<<< HEAD
 * Modified: mi�rcoles, 6 de enero de 2021 16:37:35
=======
 * Modified: miércoles, 6 de enero de 2021 16:37:35
>>>>>>> 91193d8401a184800f5639dd63c002d2c5368d55
 * Purpose: Implementation of the class Cuenta
 ***********************************************************************/

#include "Persona.h"
#include "Transacciones.h"
#include "Cuenta.h"
#include <string>
#include <iostream>

using namespace std;

string Cuenta::getId(){
	return id;
}

float Cuenta::getSaldo(){
	return saldo;
}

/*bool Cuenta::getTarjeta(){
	return tarjeta;
}*/

void Cuenta::setId(string newId){
	id=newId;
}
void Cuenta::setSaldo(float newSaldo){
	saldo=newSaldo;
}

/*void Cuenta::setTarjeta(bool newTarjeta){
	tarjeta=newTarjeta;
}*/
Persona Cuenta::getPersona(){
	return persona;
}
void Cuenta::setPersona(Persona newPersona){
	persona=newPersona;
}

void Cuenta::mostrarInformacion(void)
{
	cout<<"El saldo es:"<<saldo<<endl;
	cout<<"El numero cuenta es:"<<id<<endl;
	cout<<"-----Datos del titular de la cuenta-----"<<endl;
	persona.mostrarInformacion();
<<<<<<< HEAD
}
=======
}
>>>>>>> 91193d8401a184800f5639dd63c002d2c5368d55
