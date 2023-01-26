#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void pedirDatos();
void comprobarSimetria(int m[][100],int ,int );

int m[100][100],nfilas,ncol;

int main(){
    pedirDatos();
    comprobarSimetria(m,nfilas,ncol);

    system("PAUSE");
    return 0;
}


void pedirDatos() {
    cout<<"Digite el numero de filas: "; cin>>nfilas;
    cout<<"Digite el numero de columnas: "; cin>>ncol;

    for (int i = 0; i <nfilas ; ++i) {
        for (int j = 0; j <ncol ; ++j) {
            cout<<"Digite un numero: ["<<i<<"]["<<j<<"] ";
            cin>>m[i][j];
        }
    }
}
void comprobarSimetria(int m[][100],int nfilas,int ncol) {
    int cont=0;
    if (nfilas == ncol){
        for (int i = 0; i < nfilas; ++i) {
            for (int j = 0; j < ncol; ++j) {
                if (m[i][j]==m[j][i]){
                    cont++;
                }
            }
        }
    }
    if (cont== nfilas*ncol){
        cout<<"La matriz es simetrica\n";
    }else{
        cout<<"La matriz no es simetrica\n";
    }
}