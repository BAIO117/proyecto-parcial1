#pragma once


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
	string toString(void);

protected:
private:
	int dia;
	int mes;
	int ano;
	int hora;
	int minutos;
	int segundos;

};

