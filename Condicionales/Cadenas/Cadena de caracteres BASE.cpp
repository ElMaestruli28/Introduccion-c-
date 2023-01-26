#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main() {

    char nombre[20];

    cout<<"Digite su nombre: ";
    cin.getline(nombre,20,'\n');

    cout<<nombre<<endl;

    system("pause");
    return 0;
}