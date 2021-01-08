#include "Generador.h"


using namespace std;

string Generador::crearCorreo(string apellido, string nombre, Lista* cuentas) {


	string correo = apellido[0] + nombre + this->dominio;
	int cont = 1;
	Nodo* aux = new Nodo();
	Nodo* aux1 = new Nodo();

	aux = cuentas->getLista();

	while (aux != cuentas->getListaFinal())
	{
		
		if ( aux->getCuenta().getPersona().getCorreo() == correo) {

			correo = apellido[0] + nombre + to_string(cont) + dominio;
			cont += 1;
		}

		aux1 = aux;
		aux = aux->getSiguiente();
	}

	return correo;

}

Generador::Generador()
{
	this->dominio = "@espe.edu.ec";
}