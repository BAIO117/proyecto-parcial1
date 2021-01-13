#pragma once

#include"Fecha.h"
#include<string>

class CalculoEdad
{

public:
	CalculoEdad();
	Fecha calc_edad(Fecha);
	int get_edad_anios();
	int get_edad_meses();
	int get_edad_dias();
	std::string get_edad();

private:
	unsigned int edad_anios;
	unsigned int edad_meses;
	unsigned int edad_dias;


};

