/***********************************************************************
 * Module:  Fecha.cpp
 * Author:  ismae
 * Modified: mi�rcoles, 6 de enero de 2021 17:50:01
 * Purpose: Implementation of the class Fecha
 ***********************************************************************/

#include "Fecha.h"
#include <string>


int Fecha::getDia(void)
{
	return dia;
}


void Fecha::setDia(int newDia)
{
	dia = newDia;
}



int Fecha::getMes(void)
{
	return mes;
}



void Fecha::setMes(int newMes)
{
	mes = newMes;
}



int Fecha::getAno(void)
{
	return ano;
}



void Fecha::setAno(int newAno)
{
	ano = newAno;
}



int Fecha::getHora(void)
{
	return hora;
}



void Fecha::setHora(int newHora)
{
	hora = newHora;
}


int Fecha::getMinutos(void)
{
	return minutos;
}



void Fecha::setMinutos(int newMinutos)
{
	minutos = newMinutos;
}



int Fecha::getSegundos(void)
{
	return segundos;
}


void Fecha::setSegundos(int newSegundos)
{
	segundos = newSegundos;
}

std::string Fecha::toString(void){
   return dia+"/"+mes+"/"+ano;
}