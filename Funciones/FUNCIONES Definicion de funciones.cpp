#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

//Prototipo de funcion
int encontrarMax(int x,int y);

int main(){
    int n1,n2;
    int mayor;
    cout<<"Digite dos numeros: ";
    cin>>n1>>n2;

    cout<<"El mayor de los 2 numeros es: "<<encontrarMax(n1,n2)<<endl;

    system("pause");
    return 0;
}
//definicion de funcion
int encontrarMax(int x,int y) {
    int numMax;

    if (x > y) {
        numMax = x;
    } else {
        numMax = y;
    }
    return numMax;
}