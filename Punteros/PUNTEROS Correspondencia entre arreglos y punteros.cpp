//Correspondencia entre arrays y punteros
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;



int main(){
    int numeros[]={1,2,3,4,5};
    int *dir_numeros;

    dir_numeros=numeros;

    for (int i = 0; i <5 ; ++i) {
        cout<<"Posiciones de memoria "<<numeros[i]<<" es: "<<dir_numeros++<<endl;
    }


    system("PAUSE");
    return 0;
}

