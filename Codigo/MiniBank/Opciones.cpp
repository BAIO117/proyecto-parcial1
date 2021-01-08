#include "Opciones.h"
#include "IngresoDatos.h"
#include "Generador.h"
#include <iostream>

#define DEPOSITO_INICIAL_CORRIENTE  50.0f  
#define DEPOSITO_INICIAL_AHORROS  0.0f  
#define DEPOSITO_MINIMO 5.0f

using namespace std;


Cuenta Opciones::IngresarnuevaCuenta() {

	system("cls");


	Fecha fechaNacimiento;
	Cuenta cuenta;
	IngresoDatos ingreso;

	Persona persona;
	Generador generador;
	string dato = "";
	int tipoCuenta = 0;
	string dia, mes, anio;

	system("cls");
	pantalla.gotoxy(4,4);
	dato = ingreso.IngresoTexto("Ingrese el nombre:   ");
	persona.setNombre(dato);

	dato = ingreso.IngresoTexto("Ingrese el apellido:   ");
	persona.setApellido(dato);

	dato = ingreso.IngresoNumero("Ingrese numero de cedula: ");
	persona.setCedula(dato);

	dia = ingreso.IngresoNumero("Ingrese su dia de nacimiento: ");
	mes = ingreso.IngresoNumero("Ingrese su mes de nacimiento: ");
	anio = ingreso.IngresoNumero("Ingrese su anio de nacimiento: ");
	fechaNacimiento.setDia(stoi(dia)); // = new Fecha(stoi(dia), stoi(mes), stoi(anio));
	fechaNacimiento.setDia(stoi(dia));
	fechaNacimiento.setAnio(stoi(anio));
	persona.setEdad(fechaNacimiento);


	pantalla.gotoxy(4, 12);
	cout << "\tTipo de cuenta: \n";
	cout << "\t1. Corriente\n";
	cout << "\t2. Ahorros\n";

	do
	{
		tipoCuenta = stoi(ingreso.IngresoNumero("Digite una opcion : "));

	} while (tipoCuenta != 1 && tipoCuenta != 2);


	switch (tipoCuenta) {
	case cuenta.Ahorros:
		cuenta.setTipoDeCuenta(cuenta.Ahorros);
		break;
	case cuenta.Corriente :
		cuenta.setTipoDeCuenta(cuenta.Corriente);
		break;
	}

	//persona.mostrarInformacion();
	cuenta.setPersona(persona);
	//cuenta.mostrarInformacion();
	cout << endl<<"\t";
	system("pause");

	return cuenta;
	//generador.crearCorreo(persona.getNombre(), persona.getApellido());


	/*cout << "\n\nFECHA DE NACIMIENTO\n";
	dato = ingreso.IngresoNumero("Dia: ");
	persona.setEdad(fecha);*/



	/*
	*	Istrucciones:
	*		-Ingresar uneva cuenta
	*		-El correo y numero de cuenta se genera automaticamente solo toca llamar las funciones
	*		-Pedir los datos de la persona, pedir el tipo de cuenta , Pedir el deposito inicial
	*		-Para pedir datos pueden usar los metodo de la clase IngresarDatos por que ya tiene validaciones

	*	Validaciones:
	*		-Fechas (Año biciesto y mes que no tenga mas de 30 dias)
	*		-Correo sin repetir, numero de cuenta sin repetir
	*		-Validar el deposito deacuerdo al tipo de cuenta
	*/

}

void Opciones::realizarDeposito(Lista* cuentas) {

	system("cls");
	
	/*
	*	Istrucciones:
	*		-Pedir el monto 
	*		-Llamar al metodo de la clase Deposito
	*	Validaciones:
	*		-No puede ingresar montos negativos
	*		-No puede ingresar montos menores al DEPOSITO_MINIMO
	*		
	*/

}

void Opciones::realizarRetiro(Lista* cuentas) {

	system("cls");
	/*
	*	Istrucciones:
	*		-Pedir el monto
	*		-Llamar al metodo de la clase Retiro
	*	Validaciones:
	*		-Verificar que exista la cuenta
	*		-No puede ingresar montos negativos
	*		-No puede retirar mas de lo que tiene
	*
	*/

}

void Opciones::buscarCuenta(Lista* cuentas) {

	system("cls");
	/*
	*	Istrucciones:
	*		-Pedir un identificador para la cuenta
	*		-El identificador puede ser cedula o numero de cuenta el que quieran implementar
	*		-Mostrar informacion de la cuenta	(Propietario, numero de cuenta , saldo actual) 
	*	Validaciones:
	*		-Verificar que exista la cuenta
	*		-Validar cedula o numero de cuenta
	*		
	*/

}

void Opciones::mostarCuentas(Lista* cuentas) {

	system("cls");
	cuentas->toString();
	cout << "\n\t";
	system("pause");
	/*
	*	Istrucciones:
	*		-Mostrar informacion de las cuentas	(Propietario, numero de cuenta , saldo actual)  
	*	Validaciones:
	*		--------
	*/

}