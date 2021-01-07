/***********************************************************************
 * Module:  Nodo.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 22:28:01
 * Purpose: Declaration of the class Nodo
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Nodo_h)
#define __Proyecto_Parcial_1_Nodo_h

#include <Persona.h>

class Nodo
{
public:
   Persona getDato(void);
   void setDato(Persona newDato);
   Nodo getSig(void);
   void setSig(Nodo newSig);
   Nodo getAnterior(void);
   void setAnterior(Nodo newAnterior);

protected:
private:
   Persona dato;
   Nodo sig;
   Nodo anterior;


};

#endif