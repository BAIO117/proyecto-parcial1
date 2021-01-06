/***********************************************************************
 * Module:  Screen.h
 * Author:  ismae
 * Modified: miércoles, 6 de enero de 2021 18:14:19
 * Purpose: Declaration of the class Screen
 ***********************************************************************/

#if !defined(__Proyecto_Parcial_1_Screen_h)
#define __Proyecto_Parcial_1_Screen_h

class Screen
{
public:
   int gotoxy(int x, int y);
   int tamano(int with, int heigth);
   int ocultar_cursor(void);
   int color_texto(int color);

protected:
private:

};

#endif