#include<iostream>

using namespace std;

int main (){
    char letra;
    cout<<"Digite un caracter: ";
    cin>>letra;

    if (letra=='a' || letra=='e' || letra=='i' || letra=='o' || letra=='u')
        cout<<"Es una vocal minuscula";
    else if (letra=='A' || letra=='E' || letra=='I' || letra=='O' || letra=='U')
        cout<<"Es una vocal mayuscula";
    else {
        cout<<"No es una vocal";
    }
    return 0;
}