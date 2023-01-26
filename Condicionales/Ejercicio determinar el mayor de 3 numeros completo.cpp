#include<iostream>

using namespace std;

int main (){
    int n1,n2,n3;
    cout<<"Digite 3 numeros: ";
    cin>>n1>>n2>>n3;
    if (n1==n2==n3){
        cout<<"Todos numeros son iguales";
    }
    else if (n1 > n2 and n1>n3) {
        cout << "El mayor es: " << n1;
    } else if (n2>n3 and n2>n1) {
        cout << "El mayor es: " << n2;
    }
    else {
        cout<<"El mayor es: "<<n3;
    }

    return 0;
}