#include "Retiro.h"
#include <iostream>
#include "IngresoDatos.h"

using namespace std;

void Retiro::movimiento(Lista* cuentas, string idCuenta) {
    bool respuesta = false;
    float monto;
    string montoCadena = "";
    IngresoDatos ingreso;

    Cuenta aux;
    if (cuentas->buscar(idCuenta)) {
        // cout << "\n\t Ingrese el monto que se desea retirar: ";
         //cin >> monto;
        montoCadena = ingreso.IngresoNumero("Ingrese el monto que se desea retirar");
        monto = stof(montoCadena);

        while (monto < 0)
        {
            montoCadena = ingreso.IngresoNumero("Ingrese nuevamente el monto que se desea retirar");
            monto = stof(montoCadena);
        }


        aux = cuentas->buscarYTraer(idCuenta);
        /*if(monto > aux.getSaldo()) {
            cout << "\n\tSaldo insuficiente!" << endl;
            montoCadena = ingreso.IngresoNumero("Ingrese nuevamente el monto que se desea retirar");
            monto = stof(montoCadena);
        }

        cuentas->modificarNodo(idCuenta, aux.getSaldo() - monto);
        cout << "\n\t Transaccion exitosa!";*/

        while (monto > aux.getSaldo()) {
            cout << "\n\tSaldo insuficiente!" << endl;
            montoCadena = ingreso.IngresoNumero("Ingrese nuevamente el monto que se desea retirar");
            monto = stof(montoCadena);

        }
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