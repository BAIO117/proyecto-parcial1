#include "Deposito.h"

#include <iostream>
using namespace std;

void Deposito::movimiento(Lista* cuentas, string idCuenta) {
    bool respuesta = false;
    float monto;
    Cuenta aux;
    if (cuentas->buscar(idCuenta)) {
        cout << "\n\t Ingrese el monto que se desea depositar: ";
        cin >> monto;
        while (monto < 0)
        {
            cout << "\n\t Ingrese nuevamente el monto que se desea depositar.. ";
            cin >> monto;
        }

        
        aux = cuentas->buscarYTraer(idCuenta);
        //aux.mostrarInformacion();
        cuentas->modificarNodo(idCuenta, monto);
        aux.setSaldo(monto);
        //aux.mostrarInformacion();
        
        //cout << "\n\t Transaccion exitosa!";
        respuesta = true;
    }
    else {
        cout << "\n\t Por favor ingresar un numero de cuenta valido" << endl;
    }
    //return aux;
}
