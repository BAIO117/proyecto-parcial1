/***********************************************************************
 * Module:  Persona.cpp
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:37:35
 * Purpose: Implementation of the class Persona
 ***********************************************************************/

#include "Cuenta.h"
#include "Fecha.h"
#include "Persona.h"

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getNombre()
// Purpose:    Implementation of Persona::getNombre()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getNombre(void)
{
   return nombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setNombre(std::string newNombre)
// Purpose:    Implementation of Persona::setNombre()
// Parameters:
// - newNombre
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setNombre(std::string newNombre)
{
   nombre = newNombre;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getApellido()
// Purpose:    Implementation of Persona::getApellido()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getApellido(void)
{
   return apellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setApellido(std::string newApellido)
// Purpose:    Implementation of Persona::setApellido()
// Parameters:
// - newApellido
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setApellido(std::string newApellido)
{
   apellido = newApellido;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCedula()
// Purpose:    Implementation of Persona::getCedula()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getCedula(void)
{
   return cedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCedula(std::string newCedula)
// Purpose:    Implementation of Persona::setCedula()
// Parameters:
// - newCedula
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCedula(std::string newCedula)
{
   cedula = newCedula;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getCorreo()
// Purpose:    Implementation of Persona::getCorreo()
// Return:     std::string
////////////////////////////////////////////////////////////////////////

std::string Persona::getCorreo(void)
{
   return correo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setCorreo(std::string newCorreo)
// Purpose:    Implementation of Persona::setCorreo()
// Parameters:
// - newCorreo
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setCorreo(std::string newCorreo)
{
   correo = newCorreo;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::getEdad()
// Purpose:    Implementation of Persona::getEdad()
// Return:     Fecha
////////////////////////////////////////////////////////////////////////

Fecha Persona::getEdad(void)
{
   return edad;
}

////////////////////////////////////////////////////////////////////////
// Name:       Persona::setEdad(Fecha newEdad)
// Purpose:    Implementation of Persona::setEdad()
// Parameters:
// - newEdad
// Return:     void
////////////////////////////////////////////////////////////////////////

void Persona::setEdad(Fecha newEdad)
{
   edad = newEdad;
}