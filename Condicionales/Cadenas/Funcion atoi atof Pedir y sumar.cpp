#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char cad[100];
    char cad1[100];
    int numero;
    float numero1,suma=0;

    cout<<"Digite una cadena: ";
    cin.getline(cad,20);
    cout<<"Digite otra cadena: ";
    cin.getline(cad1,20);

    numero=atoi(cad);
    numero1=atof(cad1);
    suma=numero+numero1;

    cout<<"Su numero es: "<<suma<<endl;

    system("pause");
    return 0;
}
