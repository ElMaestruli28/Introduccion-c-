//Ejercicio 20: Realice una función recursiva para la serie Fibonacci
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;


int fibonacci(int);


int main(){

    int nelementos;

    do{
        cout<<"Digite el numero de elementos: "; cin>>nelementos;
    }while(nelementos<=0);

    for (int i = 0; i <nelementos ; ++i) {

        cout << "Suma: " << fibonacci(i) << endl;
    }

    system("PAUSE");
    return 0;
}
int fibonacci(int n){
    int suma=0;
    if (n==0){
        suma=0;
    }else if (n==1){
        suma=1;
    }
    else{
        suma=fibonacci(n-1)+fibonacci(n-2);
    }
    return suma;
}//
// Created by Usuario on 1/23/2023.
//
