#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
    int suma=0,cuadrado;
    for (int i = 1; i <=10 ; ++i) {
        cuadrado= i*i;
        suma+=cuadrado; //suma= suma+cuadrado

    }
    cout<<"\nEl resultado de la suma es: "<<suma<<endl;


    system("pause");
    return 0;
}
