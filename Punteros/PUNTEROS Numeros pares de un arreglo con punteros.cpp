
//Ejercicio 3: Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuales son números pares y su posición en memoria.
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;



int main(){
    int numeros[10],*dir_numeros;
    for (int i = 0; i <10 ; ++i) {
        cout<<"Digite un numero["<<i<<"]: ";
        cin>>numeros[i];
    }


    dir_numeros=numeros;
    for (int i = 0; i <10 ; ++i) {
        if (*dir_numeros % 2 == 0) {
            cout << "El numero " <<*dir_numeros << " es par " << endl;
            cout << "Posicion: " << dir_numeros << endl;
        }
        dir_numeros++;
    }

    system("PAUSE");
    return 0;
}


