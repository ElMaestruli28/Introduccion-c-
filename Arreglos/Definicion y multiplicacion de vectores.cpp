#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main () {
    int numeros[]={1,2,3,4,5,};
    int multiplicacion=1;
    for (int i = 0; i <5 ; ++i) {
        multiplicacion*=numeros[i];
    }

    cout<<"La multiplicacion de los elementos del vector: "<<multiplicacion<<endl;


    system("pause");
    return 0;
}