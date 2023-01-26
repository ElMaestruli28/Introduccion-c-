#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

template <class T>
T maximo(T v1,T v2,T v3);


int main(){
    char d1='a';
    char d2='s';
    char d3='z';

    cout<<"El entero maximo de los 3 es: "<<maximo(d1,d2,d3)<<endl;

    system("PAUSE");
    return 0;
}
template <class T>
T maximo(T v1,T v2,T v3) {
    T mayor;
    if (v1 > v2) {
        if (v1 > v3) {
            mayor = v1;
        }
    }
    if (v2>v1){
        if (v2>v3){
            mayor=v2;
        }
    }
    if (v3>v1) {
        if (v3 > v2) {
            mayor = v3;
        }
    }
    return mayor;
}