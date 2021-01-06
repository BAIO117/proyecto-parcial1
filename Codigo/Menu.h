/***********************************************************************
 * Module:  Menu.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 18:23:05
 * Purpose: Declaration of the class Menu
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Menu_h)
#define __Proyecto_Parcial_1_Menu_h

class Opciones;

#include <Screen.h>

class Menu
{
public:
   Menu(std::string* Opciones);
   ~Menu();

   Opciones** opciones;

protected:
private:
   Screen screen;


};

#endif