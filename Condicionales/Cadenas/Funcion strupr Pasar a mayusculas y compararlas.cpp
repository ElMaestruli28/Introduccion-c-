#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[100];
    char palabra1[100];
    cout<<"Introduzca su palabra: ";
    cin>>palabra;
    cout<<"Introduzca otra palabra: ";
    cin>>palabra1;

    strupr(palabra);
    strupr(palabra1);
    if (strcmp(palabra,palabra1)==0){
        cout<<palabra<<"\n"<<palabra1<<"Las palabras son iguales";
    }else if (strcmp(palabra,palabra1)!=0){
        cout<<palabra<<palabra1<<"Las palabras no son iguales";
    }else{
        cout<<"Ocurrio un error inesperado";
    }
    cout<<"\n";
    system("pause");
    return 0;
}
