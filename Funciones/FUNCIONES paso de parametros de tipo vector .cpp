#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void cuadrado(int vec[],int);
void muestra(int vec[],int );

int main(){
    const int TAM=5;
    int vec[TAM]={1,2,3,4,5};

    cuadrado(vec,TAM);
    muestra(vec,TAM);


    system("PAUSE");
    return 0;
}
void cuadrado(int vec[],int TAM){
    for (int i = 0; i <TAM; ++i) {
        vec[i]=vec[i]*vec[i];
    }
}
void muestra(int vec[],int TAM){
    for (int i = 0; i <TAM ; ++i) {
        cout<<vec[i]<<" ";
    }
}