#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void pedirDatos();
void cambiarSignos(int vec[],int);
void mostrarVec(int vec[],int);
int vec[100],tam;


int main(){
    pedirDatos();
    cambiarSignos(vec,tam);
    mostrarVec(vec,tam);

    system("PAUSE");
    return 0;
}
void pedirDatos(){
    cout<<"Digite el tamanio del vector: ";
    cin>>tam;

    for (int i = 0; i <tam ; ++i) {
        cout<<i+1<<". Digite un numero: ";
        cin>>vec[i];
    }
}
void cambiarSignos(int vec[],int tam){
    for (int i = 0; i <tam ; ++i) {
        vec[i]*= -1;
    }
}
void mostrarVec(int vec[],int tam){
    cout<<"\nMostrando los elementos del vector con signos cambiados\n";
    for (int i = 0; i <tam ; ++i) {
        cout<<vec[i]<<endl;
    }
}