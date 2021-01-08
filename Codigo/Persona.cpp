/***********************************************************************
 * Module:  Persona.cpp
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:37:35
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Cuenta.h"
#include "Fecha.h"
#include "Persona.h"
#include <string>

using namespace std;


std::string Persona::getNombre(void)
{
   return nombre;
}



void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}



std::string Persona::getApellido(void)
{
   return apellido;
}



void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}



std::string Persona::getCedula(void)
{
   return cedula;
}



void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}



std::string Persona::getCorreo(void)
{
   return correo;
}



void Persona::setCorreo(std::string newCorreo)
{
   correo = newCorreo;
   
}


Fecha Persona::getEdad(void)
{
   return edad;
}

void Persona::setEdad(Fecha newEdad)
{
   edad = newEdad;
}

void Persona::mostrarInformacion(){
   cout<<"Nombre: "<<nombre<<endl;
   cout<<"Apellido: "<<apellido<<endl;
   cout<<"Cedula: "<<cedula<<endl;
   cout<<"Correo electronico: "<<endl;
   edad.toString();
}
