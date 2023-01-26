//Ejercicio 1: Comprobar si un número es par o impar, y señalar la posición de memoria donde se está guardando el número. Con punteros.
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;



int main(){
    int n,*dir_n;
    cout<<"Digite un numero: ";
    cin>>n;

    dir_n=&n;
    if (*dir_n%2==0){
        cout<<"El numero "<<*dir_n<<" es par "<<endl;
        cout<<"Posicion: "<<dir_n<<endl;
    }else{
        cout<<"El numero "<<*dir_n<<" es impar "<<endl;
        cout<<"Posicion: "<<dir_n<<" es impar "<<endl;
    }

    system("PAUSE");
    return 0;
}


