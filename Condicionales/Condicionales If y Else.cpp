#include<iostream>

using namespace std;

int main (){
    int numero,dato=5;

    cout<<"Digite un numero: ";
    cin>>numero;

    if (numero<=dato){
        /* if (numero==dato) para saber si es igual
         * if (numnero!=dato) para saber si es distinto
         * if (numero>dato) para saber si es mayor
         * if (numero<dato) para saber si es menor
         * if (numero>=dato) para saber si es mayor o igual
         * if (numero<=dato) para saber si es menor o igual
         */
        cout<<"El numero es menor o igual 5";
    }
    else {
        cout<<"El numero es mayor a 5";
    }
    return 0;
}