/***********************************************************************
 * Module:  Generator.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 12:58:43
 * Purpose: Declaration of the class Generator
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Generator_h)
#define __Proyecto_Parcial_1_Generator_h

#include "ListaDoble.h"

using namespace std;

class Generator
{
public:
   	string crearCorreo(string apellido, string nombre, ListaDoble* gente);
	string generarNumeroDeCuenta(void);
	Generator();
	~Generator();	
	
protected:
private:
   string dominio;

};

#endif
