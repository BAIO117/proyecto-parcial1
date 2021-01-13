#include "Retiro.h"
#include "Opciones.h"
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
    if (cuentas->buscar(idCuenta)) {
        // cout << "\n\t Ingrese el monto que se desea retirar: ";
         //cin >> monto;
        montoCadena = ingreso.IngresoNumero("Ingrese el monto que se desea retirar");
        monto = stof(montoCadena);

=======
    Opciones opc;
    if (opc.buscar(cuentas,idCuenta)) {
        cout << "\n\t Ingrese el monto que se desea retirar: ";
        cin >> monto;
>>>>>>> 2baf8bf0971d7ac3eb3eb978c4e2110c6e683055
        while (monto < 0)
        {
            montoCadena = ingreso.IngresoNumero("Ingrese nuevamente el monto que se desea retirar");
            monto = stof(montoCadena);
        }


<<<<<<< HEAD
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
=======
        aux = opc.buscarYTraer(cuentas,idCuenta);
>>>>>>> 2baf8bf0971d7ac3eb3eb978c4e2110c6e683055
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