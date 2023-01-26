#include<iostream>
#include<stdlib.h>
using namespace std;
int main (){
    int numero,x,y,multiplicacion=0;

    cout<<"Digite un numero: ";cin>>numero;
    x=numero;
    y=x;
    numero=y;
    multiplicacion=y*x;
    cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl;

    system("pause");
    return 0;
}