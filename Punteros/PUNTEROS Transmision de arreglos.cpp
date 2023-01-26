#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;


int hallarMax(int *,int );//prototipo de funcion


int main(){
const int nelementos=5;
int numeros[nelementos]={3,15,8,2,1};

cout<<"El mayor de los elementos es: "<<hallarMax(numeros,nelementos)<<"\n";

    system("pause");
    return 0;
}
int hallarMax(int *dirvec,int nelementos ){
    int max=0;

    for (int i = 0; i <nelementos ; ++i) {
        if (*(dirvec+i)>max){
            max=*(dirvec+i);
        }
    }
    return max;
}
