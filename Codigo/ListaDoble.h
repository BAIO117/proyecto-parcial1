/***********************************************************************
 * Module:  ListaDoble.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 22:29:37
 * Purpose: Declaration of the class ListaDoble
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_ListaDoble_h)
#define __Proyecto_Parcial_1_ListaDoble_h

class Nodo;

#include <Nodo.h>

class ListaDoble
{
public:
   std::string to_string(void);
   bool esVacia(void);
   void ingresarInicio(void);
   void ingresarFinal(void);
   void Anadir_en_medio(void);
   Nodo getNodoDoble(void);
   void setNodoDoble(Nodo newNodoDoble);

   Nodo** nodo;

protected:
private:
   Nodo nodoDoble;


};

#endif