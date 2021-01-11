#include "Retiro.h"
#include <iostream>

void Retiro::movimiento(Lista* cuentas, string idCuenta) {
    bool respuesta = false;
    float monto;

    Cuenta aux;

    if (cuentas->buscar(idCuenta)) {
        cout << "\n\tIngrese el monto que se desea retirar: ";
        cin >> monto;
        while (monto < 0 || monto > aux.getSaldo())
        {
            cout << "\n\tIngrese el monto que se desea retirar: ";
            cin >> monto;
        }

        aux = cuentas->buscarYTraer(idCuenta);
        aux.setSaldo(aux.getSaldo() - monto);
        cout << "\n\tTransaccion exitosa!";
        respuesta = true;
    }
    else {
        cout << "\n\tPor favor ingresar un número de cuenta válido" << endl;
    }
    //return aux;
}