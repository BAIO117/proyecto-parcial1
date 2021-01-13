#pragma once

#include"Fecha.h"
#include<iostream>

class CalculoEdad
{
public:
	CalculoEdad();
	Fecha calc_edad(Fecha);
	bool validar_anio(int);
	int get_edad_anios();
	int get_edad_meses();
	int get_edad_dias();
	std::string get_edad();
private:
	int edad_anios;
	int edad_meses;
	int edad_dias;
};

