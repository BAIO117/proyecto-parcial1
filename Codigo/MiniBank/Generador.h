#pragma once
#include<string>
#include "Lista.h"

using  namespace std;

class Generador
{
public:
	string crearCorreo(string apellido, string nombre, Lista* gente);
	string generarNumeroDeCuenta(void);
	Generador();
	~Generador();

protected:
private:
	string dominio;


};

