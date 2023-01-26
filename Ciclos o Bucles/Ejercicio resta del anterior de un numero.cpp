#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main (){
    int n,suma=0,resta=0,sumar;

    cout<<"Digite n: ";
    cin>>n;
    for (int i = 1; i <=n ;i+=2) {
        suma+=i;
        for (int j = 2; j <=n ; j+=2) {
            sumar+=j;
        }
    }
    resta+suma-sumar;
    cout<<"Su numero es: "<<resta<<endl;


    system("pause");
    return 0;
}
