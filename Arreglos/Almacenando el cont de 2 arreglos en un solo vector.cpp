#include <iostream>
#include<stdlib.h>

using namespace std;
int main() {
    char letra1[]{'a','b','c','d','e'};
    char letra2[]{'f','g','h','i','j'};
    char letra3[10];
//copiando los elementos del arreglo letras1 hacia letras 3
    for (int i = 0; i <5 ; ++i) {
        letra3[i]=letra1[i];
    }
//copiando los elementos de letra2 hacia letra3
    for (int i = 5; i <10 ; ++i) {
        letra3[i]= letra2[i-5];
    }
//mostrar el nuevo vector
    for (int i = 0; i <10 ; ++i) {
        cout<<letra3[i]<<endl;
    }

    return 0;
}
