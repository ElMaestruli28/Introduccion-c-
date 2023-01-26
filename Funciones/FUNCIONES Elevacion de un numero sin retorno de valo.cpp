#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void pedirDatos();
void fundec(double x, int y);

double numero;
int decimal;

int main(){
    pedirDatos();
    fundec(numero,decimal);

    system("PAUSE");
    return 0;
}

void pedirDatos(){
    cout<<"Digite un numero: "; cin>>numero;
}
void fundec(double x, int y){
    double resultado;
    decimal = numero;
    resultado = numero - decimal;
    cout<<"La parte fraccionaria es: "<<resultado<<endl;
}