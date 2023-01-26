//Ejercicio 10: Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta.
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void pedirdatos();

void mostrartranspuesta(int**,int,int);

int **puntero_matriz1,nfilas,ncol;

int main(){

    pedirdatos();
    mostrartranspuesta(puntero_matriz1,nfilas,ncol);

    for (int i = 0; i <nfilas ; ++i) {
        delete[]puntero_matriz1[i];
    }
    delete[]puntero_matriz1;

    system("PAUSE");
    return 0;
}
void pedirdatos() {
    cout << "Digite el numero de filas: ";
    cin >> nfilas;
    cout << "Digite el numero de columnas: ";
    cin >> ncol;

    puntero_matriz1 = new int *[nfilas];
    for (int i = 0; i < ncol; ++i) {
        puntero_matriz1[i] = new int[ncol];
    }
    cout << "\nDigite los elementos de la matriz: \n";
    for (int i = 0; i < nfilas; ++i) {
        for (int j = 0; j < ncol; ++j) {
            cout << "Digite un numero [" << i << "][" << j << "] ";
            cin >> *(*(puntero_matriz1 + i) + j);
        }
    }
    cout << "Matriz: " << endl;
    for (int i = 0; i < nfilas; ++i) {
        for (int j = 0; j < ncol; ++j) {
            cout<<*(*(puntero_matriz1+i)+j)<<" ";
        }
    }
}
void mostrartranspuesta(int **puntero_matriz1, int nfilas, int ncol) {
    cout<<"\nLa matriz transpuesta es:"<<endl;
    for (int i = 0; i < ncol; ++i) {
        for (int j = 0; j < nfilas; ++j) {
            cout<<*(*(puntero_matriz1+j)+i)<<" ";
        }
        cout << "\n";
    }
}
