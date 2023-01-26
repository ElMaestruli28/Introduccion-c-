#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[100];
    char palabra1[100];
    cout<<"Introduzca una palabra: ";
    cin>>palabra;
    cout<<"Introduzca otra palabra: ";
    cin>>palabra1;

    if (strcmp(palabra,palabra1)==0){
        cout<<"Ambas cadenas son iguales"<<endl;
    }
    else if (strcmp(palabra,palabra1)>0){
        cout<<"\nEsta despues alfabeticamente "<<palabra<<endl;
    }else{
        cout<<"\nEsta despues alfabeticamente "<<palabra1<<endl;
    }


    system("pause");
    return 0;
}