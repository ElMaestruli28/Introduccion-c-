#include<iostream>

using namespace std;

int main (){
    int n1,n2,n3,n4;
    cout<<"Digite 3 numeros: ";
    cin>>n1>>n2>>n3;
    cout<<"====================================";
    cout<<"\nElija un 4 numero: ";
    cin>>n4;

    if (n4==n1||n4==n2||n4==n3 ) {
        cout << "Su numero coincide con algunos de los anteriores";
    }
    else {
        cout<<"Su numero no coincide con ninguno de los anteriores";
    }
    return 0;
}

