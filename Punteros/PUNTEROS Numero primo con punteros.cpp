//Ejercicio 2: Determinar si un número es primo o no; con puteros y además indicar en que posición de memoria se guardo el número.
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;



int main(){
    int n,*dir_n;
    bool bandera=0,*dir_bandera;
    cout<<"Digite un numero: ";
    cin>>n;

    dir_n=&n;
    dir_bandera=&bandera;

    for (int i = 2; i <*dir_n-1 ; ++i) {
        if (*dir_n % i == 0) {
            *dir_bandera = 1;
        }
    } if (*dir_bandera==1){
        cout << "El numero " << *dir_n << " no es primo " << endl;
        cout << "Posicion: " << dir_n<< endl;
    }else{
        cout<<"El numero "<<*dir_n<<" es primo "<<endl;
        cout<<"Posicion: "<<dir_n<<endl;
    }

    system("PAUSE");
    return 0;
}


