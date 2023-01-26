//Ejercicio 9: Realice un programa que calcule la suma de dos matrices dinámicas.
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void pedirdatos();
void sumarmatrices(int**,int**,int,int);
void mostrarresultado(int**,int,int);

int **puntero_matriz1,**puntero_matriz2,nfilas,ncol;

int main(){

    pedirdatos();
    sumarmatrices(puntero_matriz1,puntero_matriz2,nfilas,ncol);
    mostrarresultado(puntero_matriz1,nfilas,ncol);

    for (int i = 0; i <nfilas ; ++i) {
        delete[]puntero_matriz2[i];
    }
    delete[]puntero_matriz2;


    system("PAUSE");
    return 0;
}
void pedirdatos(){
    cout<<"Digite el numero de filas: ";
    cin>>nfilas;
    cout<<"Digite el numero de columnas: ";
    cin>>ncol;

    puntero_matriz1= new int*[nfilas];
    for (int i = 0; i <nfilas ; ++i) {
        puntero_matriz1[i]= new int[ncol];
    }
    cout<<"\nDigite los elementos de la primera matriz \n";
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] ";
            cin>>*(*(puntero_matriz1+i)+j);
        }
    }
    puntero_matriz2= new int*[nfilas];
    for (int i = 0; i <nfilas ; ++i) {
        puntero_matriz2[i]= new int[ncol];
    }
    cout<<"\nDigite los elementos de la primera matriz \n";
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            cout<<"Digite un numero ["<<i<<"]["<<j<<"] ";
            cin>>*(*(puntero_matriz2+i)+j);
        }
    }
}
void sumarmatrices(int**puntero_matriz1,int**puntero_matriz2,int nfilas,int ncol){
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            *(*(puntero_matriz1+i)+j)+=*(*(puntero_matriz2+i)+j);
        }
    }
}
void mostrarresultado(int **puntero_matriz1,int nfilas,int ncol){
    cout<<"\nLa suma de las dos matrices es: \n";
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            cout<<*(*(puntero_matriz1+i)+j)<<" ";
        }
        cout<<"\n";
    }
}

