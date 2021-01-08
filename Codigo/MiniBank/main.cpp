#include <iostream>
#include <cstdlib>
#include "Lista.h"
#include"IngresoDatos.h"
#include "Generador.h"

using namespace std;
 
void menu(Lista* cuentas);
void mostrarmenu();

using namespace std;

int main()
{
    Lista* cuentas = new Lista();

    //mostrarmenu();
    menu(cuentas);
}


void  mostrarmenu()
{
    
    cout<<"Banco"<<endl;
    cout<<"1)Crear cuenta"<<endl;
    cout<<"2)Movimientos"<<endl;
    cout<<"3)Mostrar"<<endl;
    cout<<"4)Salir"<<endl;
    
}

void menu(Lista *cuentas){
    IngresoDatos ingreso;
    Cuenta *cuenta = new Cuenta();
    Generador *gen = new Generador();
    string nombre,apellido,cedula,correo;
    int opc;
    mostrarmenu();
    do{
    cout<<"Ingrese su opcion"<<endl;
    cin >> opc;
        switch (opc) {

        case 1:
            system("cls");
            cout << "----------Crear cuenta---------" << endl;
            nombre = ingreso.IngresoTexto("Ingrese el nombre de la persona: ");
            cuenta->getPersona().setNombre(nombre);
            apellido = ingreso.IngresoTexto("Ingrese el apellido de la persona: ");
            cuenta->getPersona().setApellido(apellido);
            cedula = ingreso.IngresoTexto("Ingrese la cedula de la persona: ");
            cuenta->getPersona().setCedula(cedula);
            correo = gen->crearCorreo(apellido, nombre, cuentas);

            cuenta->getPersona().setCorreo(correo);
            system("pause");
            break;
        case 2:
            system("cls");
            //cout<<"1)Crear cuenta"<<endl;
            //pausa();
            break;
        case 3:
            system("cls");
            //cout<<"1)Crear cuenta"<<endl;
            //pausa();
            break;
        case 4:
            system("cls");
            //cout<<"1)Crear cuenta"<<endl;
            //pausa();
            break;
        }
    } while (opc != 5);
}




