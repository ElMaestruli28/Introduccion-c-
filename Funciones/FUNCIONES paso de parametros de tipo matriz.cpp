#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void mostrarMatriz(int m[][3],int,int);
void elevarCuadrado(int m[][3],int,int);
void mostrarMatrizelevada(int m[][3],int,int );

int main(){
    const int nfilas=2;
    const int ncolum=3;
    int m[nfilas][ncolum]={{1,2,3},{4,5,6}};

    mostrarMatriz(m,nfilas,ncolum);
    elevarCuadrado(m,nfilas,ncolum);
    mostrarMatrizelevada(m,nfilas,ncolum);


    system("PAUSE");
    return 0;
}

void mostrarMatriz(int m[][3],int nfilas,int ncol){
    cout<<"Mostrando matriz original: \n";
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
}
void elevarCuadrado(int m[][3],int nfilas,int ncol){
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            m[i][j]*=m[i][j];
        }
    }
}
void mostrarMatrizelevada(int m[][3],int nfilas,int ncol){
    cout<<"\nMostrando matriz elevada al cuadrado: \n";
    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }


}