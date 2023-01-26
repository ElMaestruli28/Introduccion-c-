#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main () {
    int numeros[]={4,2,3,1,5};
    int pos,aux;

//algoritmo por ordenamiento por insercion
    for (int i = 0; i <5 ; ++i) {
        pos=i;
        aux=numeros[i];

        while ((pos>0)&&(numeros[pos-1]>aux)){
            numeros[pos]=numeros[pos-1];
            pos--;
        }
        numeros[pos]=aux;
    }

    cout<<"Orden ascendente: ";
    for (int i = 0; i <5 ; ++i) {
        cout<<numeros[i]<<"  ";
    }
    cout<<"\nOrden descente: ";
    for (int i = 4; i >=0; --i) {
        cout<<numeros[i]<<"  ";
    }
    system("pause");
    return 0;
}