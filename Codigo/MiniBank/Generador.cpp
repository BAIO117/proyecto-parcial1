#include "Generador.h"
#include "Nodo.h"

using namespace std;

string Generador::crearCorreo(string apellido, string nombre, Lista* cuentas) {

	//string dominio = "@espe.edu.ec";
	//string apellido = per->getApellido();
	string correo = apellido[0] + nombre + dominio;
	int cont = 1;
	Nodo* aux = new Nodo();
	Nodo* aux1 = new Nodo();

	aux = cuentas->getLista();

	bool respuesta = false;
	while (aux != cuentas->getListaFinal())
	{
		
		if (correo == aux->getCuenta().getPersona().getCorreo()) {

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