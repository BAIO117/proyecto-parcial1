#include "IngresoDatos.h"
#include<iostream>
#include <conio.h>
#include <sstream> 

using namespace std;

string IngresoDatos::IngresoTexto(string mensaje) {

    string text = "";
    char letter;

    cout << "\n\t" << mensaje << "\t";
    letter = _getch();
    while (letter != 13) {

        if ((letter < 91 && letter > 64) || (letter < 123 && letter > 96) || letter == 48) {
            text.push_back(letter);
            cout << letter;
        }
        letter = _getch();
    }
    return text;
}

string IngresoDatos::IngresoNumero(string mensaje) {

    string num = "";
    char dig;
    //int numero;

    cout << "\n\t" << mensaje << " ";
    dig = _getch();
    while (dig != 13) {

        if (dig < 58 && dig > 47) {
            num.push_back(dig);
            cout << dig;
        }
        dig = _getch();
    }
    //istringstream(num) >> numero;
    return num;
}
/*
int IngresoDatos::validarCedula(string dato){ 
    int cedula[10];
    string aux;
    for (int i=0;i<10;i++){
        aux=dato[i];
        cedula[i]=stoi(aux);
    }
    cout << cedula[2];
    int verif[9],num,i;
    if(cedula[2]<0 || cedula[2]>6){
        //printf("Error en el tercer digito.\n");
        return 0;
    }
    if(cedula[0]<0 || cedula[0]>2){
        //printf("Error en el codigo de provincia.\n");
        return 0;
    }
    if(cedula[0]==2 && (cedula[1]<1 || cedula[1]>4)){
    }
}
    */