#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void pedirDatos();
void funpot( int x, int y);

int numero,exponente;

int main(){
    pedirDatos();
    funpot(numero,exponente);

    system("PAUSE");
    return 0;
}
void pedirDatos(){
    cout<<"Digite un numero: ";
    cin>>numero;
    cout<<"Digite el exponente: ";
    cin>>exponente;
}
void funpot(int x,int y){
    long resultado=1;
    for (int i = 1; i <=y ; ++i) {
        resultado*=x;
    }

    cout<<"El resultado es: "<<resultado<<endl;
}