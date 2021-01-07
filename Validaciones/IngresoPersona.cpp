#include "IngresoPersona.h"
#include "Libraries/Menu.cpp"
#include "Libraries/Input.cpp"
#include "Libraries/To_number.cpp"
#include <sstream>
void IngresoPersona::ingresoDatos()
{
    Input input;
    string dato;
    int dia,mes,anio;
    do{
            do{
            dato=input.input_number("Ingrese su cedula:   ");
            }while(dato.length()!=10);
    }while(validarCedula(dato)!=1);
    //cin>>dato;
    persona.setCedula(dato);
    //cout<<"Ingrese el nombre:   ";
    dato=input.input_only_letters("Ingrese el nombre:   ");
    //cin>>dato;
    persona.setNombre(dato);
    //cout<<"Ingrese el apellido:   ";
    dato=input.input_only_letters("Ingrese el apellido:   ");
    //cin>>dato;
    persona.setApellido(dato);
    //cout<<"Ingrese su año de nacimiento de la manera dia, mes, año, separados por un espacio:   ";
    do{
    dia=to_int(input.input_int_number("Ingrese el dia de nacimiento:   "));
    }while(dia <=0 || dia>=32);
    do{
    mes=to_int(input.input_int_number("Ingrese el mes de nacimiento:   "));
    }while(mes <=0 || mes>=13);
    do{
    anio=to_int(input.input_int_number("Ingrese el anio de nacimiento:   "));
    }while(anio <=1899 || anio>=2020);
    //cin>>dia>>mes>>anio;
    Fecha f(dia,mes,anio);
    persona.setEdad(f.getEdad());
    persona.setFecha(f);
}
void IngresoPersona::imprimirDatos(){
    cout<<endl<<"El nombre es:    "<<persona.getNombre()<<endl;
    cout<<"El apellido es:  "<<persona.getApellido()<<endl;
    cout<<"El cedula es:    "<<persona.getCedula()<<endl;
    Fecha f;
    f=persona.getFecha();
    cout<<"La fecha de nacimiento es:   "<<f.toString()<<endl;
}

void IngresoPersona::setPersona(Persona persona){
    this->persona=persona;
}
Persona IngresoPersona::getPersona(){
return this->persona;}

int IngresoPersona::validarCedula(string dato){ //Permite validar un número de cédula. Retorna 1 si la cédula es válida y 0 en caso contrario.
    int cedula[10];
    string aux;
    for (int i=0;i<10;i++){
        aux=dato[i];
        cedula[i]=stoi(aux);
    }
    cout << cedula[2];
    int verif[9],num,i;
    if(cedula[2]<0 || cedula[2]>6){
        printf("Error en el tercer digito.\n");
        return 0;
    }
    if(cedula[0]<0 || cedula[0]>2){
        printf("Error en el codigo de provincia.\n");
        return 0;
    }
    if(cedula[0]==2 && (cedula[1]<1 || cedula[1]>4)){
        printf("Error en el codigo de provincia.\n");
        return 0;
    }
    for(i=0;i<=8;i++){
        if(i%2==0){
            verif[i]=cedula[i]*2;
            if(verif[i]>=10){
                verif[i]=verif[i]-9;

        }
    }else {
        verif[i]=cedula[i]*1;
        if(verif[i]>=10){
        verif[i]=verif[i]-9;

    }
    }
    }

    verif[9]=90 - suma(verif);
    num=verif[9]%10;

    if(cedula[9]==num){
        printf("Digito verificador obtenido: %d.\n",num);
        return 1;
    }else {
        printf("Digito verificador obtenido: %d. Error en el digito verificador.\n",num);
        return 0;
    }
}

int IngresoPersona::suma (int verif2[9]){
    int i,suma=0;
    for (i=0;i<=8;i++){
        suma =suma + verif2[i];
    }
   return suma;
}

