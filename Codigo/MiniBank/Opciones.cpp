#include "Opciones.h"
#include "IngresoDatos.h"
#define DEPOSITO_INICIAL_CORRIENTE  50.0f  
#define DEPOSITO_INICIAL_AHORROS  0.0f  
#define DEPOSITO_MINIMO 5.0f


void Opciones::IngresarnuevaCuenta(Lista* cuentas) {

	system("cls");
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
	/*
	*	Istrucciones:
	*		-Mostrar informacion de las cuentas	(Propietario, numero de cuenta , saldo actual)  
	*	Validaciones:
	*		--------
	*/

}