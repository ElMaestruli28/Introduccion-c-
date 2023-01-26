//Ejercicio 7: Pedir su nombre al usuario y devolver el número de vocales que hay.
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void pedirdatos();
int contarvocales(char*);
char nombre[30];
int main(){
    pedirdatos();
    cout<<"\nEl numero de vocales del nombre es: "<<contarvocales(nombre)<<endl;

    system("PAUSE");
    return 0;
}
void pedirdatos(){
    cout<<"Digite su nombre: ";
    cin.getline(nombre,30,'\n');

    strupr(nombre);//pasando a mayuscula
}
int contarvocales(char*nombreusuario){
    int cont=0;
    while (*nombreusuario){
        switch (*nombreusuario) {
            case'A':
            case'E':
            case'I':
            case'O':
            case'U':cont++;
        }
        nombreusuario++;
    }
    return cont;
}