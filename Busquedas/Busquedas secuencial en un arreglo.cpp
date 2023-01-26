#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;
int main () {
    char a[]={'e','i','o','a','u'},dato;
    int i;
    char band='F';
    dato='o';
//busqueda secuencial
    i=0;
    while((band=='F')&&(i<5)){
        if (a[i]==dato){
            band='V';
        }
        i++;
    }

    if (band=='F'){
        cout<<"El numero a buscar no existe en el arreglo\n";
    } else if(band=='V'){
        cout<<"El numero a sido encontrado en la pos: "<<i-1<<endl;
    }


    system("pause");
    return 0;
}