#include "CalculoEdad.h"

CalculoEdad::CalculoEdad() {
	this->edad_anios = 0;
	this->edad_meses = 0;
	this->edad_dias = 0;
}

void CalculoEdad::calc_edad(Fecha obj_fn) {
	Fecha obj_fa;
	obj_fa.generar_fecha();
	if (obj_fa.get_mes() >= obj_fn.get_mes()) {
		edad_meses = obj_fa.get_mes() - obj_fn.get_mes();
		edad_anios = obj_fa.get_anio() - obj_fn.get_anio();
	}
	else {
		edad_meses = obj_fa.get_mes() - obj_fn.get_mes() + 12;
		edad_anios = obj_fa.get_anio() - obj_fn.get_anio() - 1;
	}
	edad_dias = obj_fa.get_dia() - obj_fn.get_dia() + 1;
}

int CalculoEdad::get_edad_anios() {
	return edad_anios;
}

int CalculoEdad::get_edad_meses() {
	return edad_meses;
}

int CalculoEdad::get_edad_dias() {
	return edad_dias;
}

std::string CalculoEdad::get_edad() {
	std::string e_anio(std::to_string(edad_anios));
	std::string e_mes(std::to_string(edad_meses));
	std::string e_dia(std::to_string(edad_dias));
	return "anios: " + e_anio + " meses: " + e_mes + " dias: " + e_dia + "\n";
}