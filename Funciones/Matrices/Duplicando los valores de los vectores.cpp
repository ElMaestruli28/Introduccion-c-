#include <iostream>
#include<stdlib.h>

using namespace std;
int main() {
    int a[5];
    int b[5];
    for(int i=0;i<5;i++){
        cout<<"Introduce el "<<i+1<<" numero del arreglo: ";
        cin>>a[i];
    }

    cout<<"\n";

    for(int i=0;i<5;i++){
        b[i] = a[i] * 2;
        cout<<"Los valores del segundo arreglo son: "<<b[i]<<endl;
    }
    system("pause");
    return 0;
}
