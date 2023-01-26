#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

struct Complejo{
    float real,imaginaria;
}z1,z2;
//prototipo de funcion
void pedirDatos();
Complejo suma(Complejo,Complejo);
void muestra(Complejo);

int main(){
    pedirDatos();

    Complejo x=suma(z1,z2);

    muestra(x);


    system("PAUSE");
    return 0;
}

void pedirDatos(){
    cout<<"Digite los datos del primer numero complejo: "<<endl;
    cout<<"Parte real: "; cin>>z1.real;
    cout<<"Parte imaginaria: "; cin>>z1.imaginaria;

    cout<<"Digite los datos del segundo numero complejo: "<<endl;
    cout<<"Parte real: "; cin>>z2.real;
    cout<<"Parte imaginaria: "; cin>>z2.imaginaria;
}
Complejo suma(Complejo z1,Complejo z2){
    z1.real+= z2.real;
    z1.imaginaria+=z2.imaginaria;

    return z1;
}
void muestra(Complejo x){
    cout<<"\nResultado de la suma: "<<x.real<<" , "<<x.imaginaria<<endl;
}