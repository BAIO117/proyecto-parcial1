#include "Retiro.h"
<<<<<<< HEAD
#include"IngresoDatos.h"
=======
#include "Opciones.h"
>>>>>>> dae9745652865a73f27ef22c573a08209a58cc64
#include <iostream>
#include "IngresoDatos.h"

using namespace std;

void Retiro::movimiento(Lista* cuentas, string idCuenta) {
    bool respuesta = false;
    float monto;
    string montoCadena = "";
    IngresoDatos ingreso;

    Cuenta aux;
<<<<<<< HEAD
    string montoCadena = "";
    IngresoDatos ingreso;
    float saldo;

    if (cuentas->buscar(idCuenta)) {
=======
   // if (cuentas->buscar(idCuenta)) {
        // cout << "\n\t Ingrese el monto que se desea retirar: ";
         //cin >> monto;
        montoCadena = ingreso.IngresoNumero("Ingrese el monto que se desea retirar");
        monto = stof(montoCadena);

    Opciones opc;
    if (opc.buscar(cuentas,idCuenta)) {
>>>>>>> dae9745652865a73f27ef22c573a08209a58cc64
        cout << "\n\t Ingrese el monto que se desea retirar: ";
        cin >> monto;
        while (monto < 0)
        {
            montoCadena = ingreso.IngresoNumero("Ingrese nuevamente el monto que se desea retirar");
            monto = stof(montoCadena);
        }


        //aux = cuentas->buscarYTraer(idCuenta);
        /*if(monto > aux.getSaldo()) {
            cout << "\n\tSaldo insuficiente!" << endl;
            montoCadena = ingreso.IngresoNumero("Ingrese nuevamente el monto que se desea retirar");
            monto = stof(montoCadena);
        }

<<<<<<< HEAD
        aux = cuentas->buscarYTraer(idCuenta);

        while (monto > aux.getSaldo()) {
            cout << "\n\tSaldo insuficiente!" << endl;
            cout << "\n\t Ingrese nuevamente el monto que se desea retirar: ";
            cin >> monto;
            
        }

        //aux = cuentas->buscarYTraer(idCuenta);
=======
        cuentas->modificarNodo(idCuenta, aux.getSaldo() - monto);
        cout << "\n\t Transaccion exitosa!";*/

        while (monto > aux.getSaldo()) {
            cout << "\n\tSaldo insuficiente!" << endl;
            montoCadena = ingreso.IngresoNumero("Ingrese nuevamente el monto que se desea retirar");
            monto = stof(montoCadena);

        }
        aux = opc.buscarYTraer(cuentas,idCuenta);
>>>>>>> dae9745652865a73f27ef22c573a08209a58cc64
        cuentas->modificarNodo(idCuenta, aux.getSaldo() - monto);
        cout << "\n\t Transaccion exitosa!";

        //respuesta = true;
    }
    else {
        cout << "\n\t Por favor ingresar un numero de cuenta valido" << endl << "\t";
        system("pause");
    }
    //return aux;
}