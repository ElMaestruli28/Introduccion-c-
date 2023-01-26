#include<iostream>

using namespace std;

int main (){
    float a,b,c,d,P;
    string N;
    cout<<"Nombre del estudiante: "<<endl;
    getline(cin, N);
    cout<<"Nota de a: "; cin>>a;
    cout<<"Nota de b: "; cin>>b;
    cout<<"Nota de c: "; cin>>c;
    cout<<"Nota de d: "; cin>>d;
/*
 * a=10
 * b=5
 * c=6
 * d=6
 */

    P=(a+b+c+d)/4;
    cout<<"\nEStudiante: "<<N<<endl;
    cout<<"\nEl Promedio es: "<<P<<endl;
    return 0;
}