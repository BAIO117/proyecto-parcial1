#pragma once

#include"Fecha.h"
#include<iostream>

class CalculoEdad
{
<<<<<<< HEAD

public:
	CalculoEdad();
	Fecha calc_edad(Fecha);
=======
public:
	CalculoEdad();
	Fecha calc_edad(Fecha);
	bool validar_anio(int);
>>>>>>> dae9745652865a73f27ef22c573a08209a58cc64
	int get_edad_anios();
	int get_edad_meses();
	int get_edad_dias();
	std::string get_edad();
<<<<<<< HEAD

private:
	unsigned int edad_anios;
	unsigned int edad_meses;
	unsigned int edad_dias;


=======
private:
	int edad_anios;
	int edad_meses;
	int edad_dias;
>>>>>>> dae9745652865a73f27ef22c573a08209a58cc64
};

