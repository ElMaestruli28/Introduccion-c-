#include <iostream>
#include<stdlib.h>

using namespace std;
int main() {
    int numeros1[3][3];
    int numeros2[3][3];
    int suma=0;
    cout<<"Matriz 1\n";
    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j <3 ; ++j) {
            cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
            cin>>numeros1[i][j];
            suma+=numeros1[i][j];
        }
    }
    cout<<"Matriz 2\n";
    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j <3 ; ++j) {
            cout<<"Digite un numero: ["<<i<<"]["<<j<<"]: ";
            cin>>numeros2[i][j];
            suma+=numeros2[i][j];
        }
        cout<<"\n";
    }
    cout<<"\nLa suma de los elementos de las 2 matrices es: "<<suma<<"\n";
    system("pause");
    return 0;
}

