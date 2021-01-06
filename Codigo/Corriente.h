/***********************************************************************
 * Module:  Corriente.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 16:29:09
 * Purpose: Declaration of the class Corriente
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Corriente_h)
#define __Proyecto_Parcial_1_Corriente_h

#include <Cuenta.h>

class Corriente : public Cuenta
{
public:
   bool getChequera(void);
   void setChequera(bool newChequera);
   Corriente();
   ~Corriente();

protected:
private:
   bool chequera;


};

#endif