/***********************************************************************
 * Module:  Cuenta.cpp
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:37:35
 * Purpose: Implementation of the class Cuenta
 ***********************************************************************/

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

void Cuenta::mostrarInformacion(void)
{
	cout<<"El saldo es:"<<saldo<<endl;
	cout<<"El numero cuenta es:"<<id<<endl;
	//cout<<"Dispone tarjeta:"<<tarjeta<<endl;
   
}
