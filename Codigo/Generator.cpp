/***********************************************************************
 * Module:  Generator.cpp
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 12:58:43
 * Purpose: Implementation of the class Generator
 ***********************************************************************/

#include "Cuenta.h"
#include "Generator.h"

using namespace std;

string Generator::crearCorreo(string apellido, string nombre, Lista* people) {

	//string dominio = "@espe.edu.ec";
	//string apellido = per->getApellido();
	string correo = apellido[0] + nombre + dominio;
	nodo* p = people->getNodo();
	int cont = 1;
	while (p != NULL) {
	
		if (correo == p->getDatoNodo()->getCorreo()) {
			
			correo = apellido[0] + nombre + to_string(cont) + dominio;
			cont += 1;
		}
		p = p->getEnlaceNodo();
	}

	return correo;

}

string Generator::Generator()
{
   this->dominio = "@espe.edu.ec";
}
