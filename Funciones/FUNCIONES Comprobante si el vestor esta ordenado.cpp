#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void pedirdatos();
void verify();

int vec[100];
int tam;

int main(){
    pedirdatos();
    verify();

    system("PAUSE");
    return 0;
}

void pedirdatos(){

    cout<<"Ingrese el tamano del vector: "; cin>>tam;
    for(int i;i<tam;i++){
        cout<<i+1<<". Ingrese un numero: "; cin>>vec[i];
    }
}

void verify() {
    int verif = 0;
    cout << endl;
    for (int i = 0; i < tam; i++) {
        if (vec[i] < vec[i + 1]) {
            if (vec[i + 1] > 0) {
                cout << vec[i] << " es menor a" << vec[i + 1] << endl;
                verif++;
            } else {
                cout << vec[i] << " no es menor a" << vec[i + 1] << endl;
            }
        }
    }
    verif++;
    if (verif == tam) {
        cout << endl << "Todo el vector esta ordenado :D" << endl;
    }
}