//Ejercicio 22: Escriba una función escribeNumeros(int ini, int fin) que devuelva en la salida estándar los números del ini al fin. Escriba una versión que escriba los números en orden ascendente.
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;


void escribeNumeros(float ini,float fin);


int main(){
    escribeNumeros(-99,1);


    system("PAUSE");
    return 0;
}

void escribeNumeros(float ini,float fin){
    if (ini<-fin){
        cout<<ini<<" ";
        escribeNumeros(ini+1,fin);
    }else{
        cout<<endl;
    }


}
