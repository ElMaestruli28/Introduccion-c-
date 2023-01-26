
//Ejercicio 19: Realice una función recursiva que sume los primeros n enteros positivos
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

int suma(int);


int main(){

    int nelementos;

    do{
        cout<<"Digite el numero de elementos: "; cin>>nelementos;
    }while(nelementos<=0);

    cout<<"Suma: "<<suma(nelementos)<<endl;


    system("PAUSE");
    return 0;
}
int suma(int n){
    int sumar=0;
    if (n==1){
        sumar=1;
    }else{
        sumar=n+suma(n-1);
    }
    return sumar;
}