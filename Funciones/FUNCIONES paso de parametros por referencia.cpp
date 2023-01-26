#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void valNuevo (int&,int&);

int main(){
    int n1,n2;
    cout<<"Digite dos numeros: ";
    cin>>n1>>n2;

    valNuevo(n1,n2);
    cout<<"El valor del primer numero es: "<<n1<<endl;
    cout<<"El valor del segundo numero es: "<<n2<<endl;

    system("PAUSE");
    return 0;
}
void valNuevo (int& xn,int& yn){
    cout<<"El valor del primer numero es: "<<xn<<endl;
    cout<<"El valor del segundo numero es: "<<yn<<endl;

    xn=89;
    yn=45;

}