#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void pedirDatos();
void pedirFila();
void comprobarMenor(int m[][100],int f,int c,int n_fila);
void imprimirMatriz(int m[][100],int f, int c, int menor,int n_fila);

int m[100][100],f,c,n_fila = 0,menor = 999;

int main(){

    pedirDatos();
    pedirFila();
    comprobarMenor(m,f,c,n_fila);
    imprimirMatriz(m,f,c,menor,n_fila);


    system("PAUSE");
    return 0;
}

void pedirDatos(){
    cout<<"Cual sera el limite de filas de su matriz: ";
    cin>>f;
    cout<<"Cual sera el limite de columnas de su matriz: ";
    cin>>c;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"Ingrese el valor ["<<i<<"]["<<j<<"] de su matriz: ";
            cin>>m[i][j];
        }
    }
}

void pedirFila(){
    cout<<"\n\nIngrese un numero de fila [Debe empezar desde 0], para imprimir el menor valor de dicha fila. [La fila debe existir]: "; //Si usted escoje una matriz 5x5 las las filas seran 0,1,2,3,4
    cin>>n_fila;

}

void comprobarMenor(int m[][100],int f,int c, int n_fila){
    int posi,posj;

    for(int i=n_fila;i<=n_fila;i++){
        for(int j=0;j<c;j++){
            if (menor >= m[i][j]){

                menor = m[i][j];
            }
        }
    }

}

void imprimirMatriz(int m[][100],int f, int c,int menor,int n_fila){
    cout<<"\n\n\t\t_____IMPRIMIENDO MATRIZ_____"<<endl<<endl;

    for(int i=0;i<f;i++){
        for(int j=0;j<c;j++){
            cout<<"\t\t"<<m[i][j];
        }
        cout<<"\n";
    }

    cout<<"\n\nSu numero menor de la fila "<<n_fila<<" es: "<<menor<<endl;
}