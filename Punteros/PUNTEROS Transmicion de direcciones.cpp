
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<vector>

using namespace std;

void intercambio(float *,float *);

int main(){
    float n1=20.8,n2=6.78;
    cout<<"Primer numero: "<<n1<<" Segundo numero: "<<n2<<endl;

    intercambio(&n1,&n2);//llamar a la funcion intercambio
    cout<<"\nEl nuevo valor de n1 es: "<<n1<<endl;
    cout<<"\nEl nuevo valor de n2 es: "<<n2<<endl;

    system("PAUSE");
    return 0;
}

void intercambio(float *dirn1,float *dirn2){
    float aux;
//intercambio de valores
    aux=*dirn1;
    *dirn1=*dirn2;
    *dirn2=aux;

}