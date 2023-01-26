//
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void pedirdatos();
void mostrarmatriz(int **,int,int);

int **puntero_matriz,nfilas,ncolum;

int main(){
    pedirdatos();
    mostrarmatriz(puntero_matriz,nfilas,ncolum);
    for (int i = 0; i <nfilas ; ++i) {
        delete[]puntero_matriz[i];
    }

    delete[]puntero_matriz;


    system("PAUSE");
    return 0;
}
void pedirdatos(){
    cout<<"Digite el nro de filas: ";
    cin>>nfilas;
    cout<<"Digite el nro de columnas: ";
    cin>>ncolum;

    puntero_matriz= new int*[nfilas];
    for (int i = 0; i <nfilas ; ++i) {
        puntero_matriz[i]=new int [ncolum];
    }
    cout<<"\nDigitando elementos de la matriz: \n";
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncolum ; ++j) {
            cout<<"Digite un numero["<<i<<"]["<<j<<"] ";
            cin>>*(*(puntero_matriz+i)+j);
        }
    }
}
void mostrarmatriz(int **puntero_matriz,int nfilas,int ncol){
    cout<<"\nImprimiendo matriz: \n";
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            cout<<*(*(puntero_matriz+i)+j);
        }
        cout<<"\n";
    }
}

