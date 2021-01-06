/***********************************************************************
 * Module:  Opciones.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 18:00:53
 * Purpose: Declaration of the class Opciones
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Opciones_h)
#define __Proyecto_Parcial_1_Opciones_h

class Persona;

class Opciones
{
public:
   void nuevoCliente(void);
   void transacciones(void);
   void nueva_cuenta(void);
   void mostrar(void);
   void retiro(void);
   void deposito(void);

   Persona** persona;

protected:
private:

};

#endif