#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;


void al_cuadrado(float n);

int main(){
    float num;

    cout<<"Digite un numero: "; cin>>num;
    al_cuadrado(num);


    system("PAUSE");
    return 0;
}

void al_cuadrado(float n){
    float resultado = pow(n,2);
    cout<<"El cuadrado del numero: "<<resultado<<endl;
}