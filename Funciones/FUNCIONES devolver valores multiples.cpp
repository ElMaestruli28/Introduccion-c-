#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void calcular(int,int,int&,int&);

int main(){
    int n1,n2,suma=0,producto=0;

    cout<<"Digite dos numeros: "; cin>>n1>>n2;

    calcular(n1,n2,suma,producto);

    cout<<"El valor de la suma es: "<<suma<<endl;
    cout<<"El valor del producto es: "<<producto<<endl;

    system("PAUSE");
    return 0;
}
void calcular(int n1,int n2,int& suma,int& producto){
    suma=n1+n2;
    producto=n1*n2;

}