#include <iostream>
#include<stdlib.h>

using namespace std;
int main() {

    int matriz1[100][100];
    int matriz2[100][100];
    int matriz3[100][100];
    int filas1,columnas1,filas2,columnas2=0;


    cout<<"Numero de filas para la matriz 1: "; cin>>filas1;
    cout<<"Numero de columnas para la matriz 1: "; cin>>columnas1;
    cout<<"Numero de filas para la matriz 2: "; cin>>filas2;
    cout<<"Numero de columnas para la matriz 2: "; cin>>columnas2;

    if((columnas1==filas2)||(columnas2==filas1)){

        cout<<"Matriz 1:"<<endl;
        for(int i=0; i<filas1; i++){
            for(int j=0; j<columnas1; j++){
                cout<<"Dame el numero para la posicion"<<"["<<i<<"]["<<j<<"] ";
                cin>>matriz1[i][j];
            }
        }
        cout<<endl<<endl;

        cout<<"Matriz 2:"<<endl;
        for(int i=0; i<filas2; i++){
            for(int j=0; j<columnas2; j++){
                cout<<"Dame el numero para la posicion"<<"["<<i<<"]["<<j<<"] ";
                cin>>matriz2[i][j];
            }
        }
        cout<<endl<<endl;


        for(int i=0; i<filas1; i++){
            for(int j=0; j<columnas2; j++){
                matriz3[i][j]=0;
                for(int k=0; k<columnas1; k++){
                    matriz3[i][j]+=(matriz1[i][k])*(matriz2[k][j]);
                }
            }
        }
        for(int r=0; r<filas1; r++){
            for(int m=0; m<columnas2; m++){
                cout<<matriz3[r][m]<<" ";
            }cout<<endl;
        }
    }

    else{
        cout<<"Las matrices no cumplen con las caracteristicas para hacer una multiplicacion"<<endl;;
    }

    system("pause");
    return 0;
}
