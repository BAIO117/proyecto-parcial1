#include <iostream>
#include "Lista.h"
#include "Menu.h"
#include "Opciones.h"
using namespace std;
 
//void menu(Lista* cuentas);
//void mostrarmenu();

using namespace std;

int main()
{
    Lista* cuentas = new Lista();
    Menu menu; Opciones opc;
    int opcion,retiDepo;
    string opcMenu[] = {"Crear Cuenta","Movimientos","Mostrar","Salir"};
    string SubMenuTransacciones[] = {"Retiro","Deposito","Atras"};
    string SubMenuMostrar[] = { "Mostrar Cuentas","Buscar una cuenta","Atras" };

    do
    {   
        
        opcion = menu.hacerMenu("Mini-Bank", opcMenu, 4);
        //cout << endl << opcion << endl;
        switch (opcion)
        {
        case 1:
            opc.IngresarnuevaCuenta(cuentas);
            break;
        case 2:
                retiDepo = menu.hacerMenu("Realizar Trasaccion", SubMenuTransacciones, 3);
                switch (retiDepo)
                {
                case 1:
                    opc.realizarRetiro(cuentas);
                    break;
                case 2:
                    opc.realizarDeposito(cuentas);
                    break;
                default:
                    break;
                }
            break;
        case 3:
            retiDepo = menu.hacerMenu("Mostrar Cuentas", SubMenuMostrar, 3);
            switch (retiDepo)
            {
            case 1:
                opc.mostarCuentas(cuentas);
                break;
            case 2:
                opc.buscarCuenta(cuentas);
                break;
            default:
                break;
            }

            break;
        default:
            system("cls");
            break;
        }

    } while (opcion > 0 && opcion <4);
    
    
    

}
