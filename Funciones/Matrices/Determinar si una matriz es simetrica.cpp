#include <iostream>
#include<stdlib.h>

using namespace std;
int main() {
    int numero[100][100],filas,columnas;
    char band='F';

    cout<<"Digite el numero de filas: "; cin>>filas;
    cout<<"Digite el numero de columnas: ";cin>>columnas;
    for (int i = 0; i <filas ; ++i) {
        for (int j = 0; j <columnas ; ++j) {
            cout<<"Digite un numero: ["<<i<<"]["<<j<<"] ";
            cin>>numero[i][j];
        }
    }
    if (filas==columnas){
        for (int i = 0; i <filas ; ++i) {
            for (int j = 0; j <columnas ; ++j) {
                if (numero[i][j]==numero[j][i]){
                    band='V';
                }
            }
        }
    }
    if (band=='V') {
        cout << "La matriz es simetrica";
    }else{
        cout<<"La matriz no es simetrica";
    }
    cout<<"\n";
    system("pause");
    return 0;
}
