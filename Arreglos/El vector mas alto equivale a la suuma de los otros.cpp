#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main () {
    int n,suma=0,elemento=0;

    cout<<"Digite el numero de elementos del arreglo: ";
    cin>>n;
    int vector[n];

    for (int i = 0; i <n ; ++i) {
        cout << i + 1 << ". Digite un numero: " << i + 1 << endl;//1. Digite un numero:
        cin >> elemento;
        vector[i] = elemento;
        suma += vector[i];
    }
    cout<<"suma es: "<<suma<<endl;
    for (int i = 0; i <n ; ++i) {
        if (vector[i]==suma/2){
            cout<<"Elemento "<<i+1<<"cumple con la condicion"<<endl;
        }else{
            break;
        }
    }
    cout<<"\n";


    system("pause");
    return 0;
}