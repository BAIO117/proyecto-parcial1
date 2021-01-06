/***********************************************************************
 * Module:  Fecha.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 17:50:01
 * Purpose: Declaration of the class Fecha
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Fecha_h)
#define __Proyecto_Parcial_1_Fecha_h

class Fecha
{
public:
   int getDia(void);
   void setDia(int newDia);
   int getMes(void);
   void setMes(int newMes);
   int getAno(void);
   void setAno(int newAno);
   int getHora(void);
   void setHora(int newHora);
   int getMinutos(void);
   void setMinutos(int newMinutos);
   int getSegundos(void);
   void setSegundos(int newSegundos);

protected:
private:
   int dia;
   int mes;
   int ano;
   int hora;
   int minutos;
   int segundos;


};

#endif