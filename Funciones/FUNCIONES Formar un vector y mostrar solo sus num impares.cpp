#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void pedirDatos();
void sacarvector(int vec[],int);

int vec[100],tam;


int main(){
    pedirDatos();
    sacarvector(vec,tam);


    system("PAUSE");
    return 0;
}
void pedirDatos(){
    cout<<"Digite el tamanio del vector: ";
    cin>>tam;

    for (int i = 0; i <tam ; ++i) {
        cout<<i+1<<". Tiene valor de: ";
        cin>>vec[i];
    }
}
void sacarvector(int vec[],int tam) {
    for (int i = 0; i < tam; ++i) {
        if (vec[i] % 2 != 0) {
            cout << vec[i] << " ";
        }
    }
}