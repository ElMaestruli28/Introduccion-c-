#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main () {
    int numeros[100],n;
    cout<<"Digite la cantidad de numeros que va a tener el arreglo: ";
    cin>>n;

    for (int i =n-1; i >=0; --i) {
        cout<<"Digite un numero: ";
        cin>>numeros[i];
    }
    //ahora vamos a mostrar los elementos con sus indices asociados
    for (int i = n-1; i >=0 ; +--i) {
        cout<<i<<"->"<<numeros[i]<<endl;
    }


    system("pause");
    return 0;
}