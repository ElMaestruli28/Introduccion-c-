#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main() {
    char nombre[100];
    char nombre2[100];

    cout<<"Introduzca su nombre: ";
    cin>>nombre;

    strcpy(nombre2,nombre);//primero va la variable vacia y despues la entera

    cout<<nombre2<<endl;


    system("pause");
    return 0;
}