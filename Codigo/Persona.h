/***********************************************************************
 * Module:  Persona.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:37:35
 * Purpose: Declaration of the class Persona
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Persona_h)
#define __Proyecto_Parcial_1_Persona_h
#include "Fecha.h"

#include "Lista.h"
#include <string>
using namespace std;


class Persona
{
public:
   std::string getNombre(void);
   void setNombre(std::string newNombre);
   std::string getApellido(void);
   void setApellido(std::string newApellido);
   std::string getCedula(void);
   void setCedula(std::string newCedula);
   std::string getCorreo(void);
   void setCorreo(std::string newCorreo);
   Fecha getEdad(void);
   void setEdad(Fecha newEdad);
   void mostrarInformacion();

   

protected:
private:
   std::string nombre;
   std::string apellido;
   std::string cedula;
   std::string correo;
   Fecha edad;
  

};

#endif
