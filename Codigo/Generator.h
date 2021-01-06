/***********************************************************************
 * Module:  Generator.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 12:58:43
 * Purpose: Declaration of the class Generator
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Generator_h)
#define __Proyecto_Parcial_1_Generator_h

class Persona;
class Cuenta;

class Generator
{
public:
   int generarCorreo(void);
   int generarNumeroDeCuenta(void);

   Persona** persona;
   Cuenta** cuenta;

protected:
private:
   int dominio;


};

#endif