#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main (){
    int n,suma=0,elevacion=0;

    cout<<"Digite el numero de elemntos a sumar: ";
    cin>>n;
    for (int i = 1; i <=n ; ++i) {
        elevacion= pow(2,i);
        suma+=elevacion;
    }
    cout<<"Su numero elevado es: "<<suma<<endl;


    system("pause");
    return 0;
}