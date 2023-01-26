#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main () {
    int numeros[]={1,2,3,4,5,};
    int suma=0;
    for (int i = 0; i <5 ; ++i) {
        suma+=numeros[i];
    }

    cout<<"La suma de los eleentos del vector: "<<suma<<endl;


    system("pause");
    return 0;
}