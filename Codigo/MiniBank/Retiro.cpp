#include "Retiro.h"
#include"IngresoDatos.h"
#include <iostream>

void Retiro::movimiento(Lista* cuentas, string idCuenta) {
    bool respuesta = false;
    float monto;
    Cuenta aux;
    string montoCadena = "";
    IngresoDatos ingreso;
    float saldo;

    if (cuentas->buscar(idCuenta)) {
        cout << "\n\t Ingrese el monto que se desea retirar: ";
        cin >> monto;
        while (monto < 0)
        {
            cout << "\n\t Ingrese nuevamente el monto que se desea retirar: ";
            cin >> monto;
        }

        aux = cuentas->buscarYTraer(idCuenta);

        while (monto > aux.getSaldo()) {
            cout << "\n\tSaldo insuficiente!" << endl;
            cout << "\n\t Ingrese nuevamente el monto que se desea retirar: ";
            cin >> monto;
            
        }

        //aux = cuentas->buscarYTraer(idCuenta);
        cuentas->modificarNodo(idCuenta, aux.getSaldo() - monto);
        cout << "\n\t Transaccion exitosa!";
        //respuesta = true;
    }
    else {
        cout << "\n\t Por favor ingresar un numero de cuenta valido" << endl<<"\t";
        system("pause");
    }
    //return aux;
}