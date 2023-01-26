#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[30];
    char copy[30];

    cout<<"Ingrese su nombre en mayusculas, solo si su nombre comienza con 'A' su nombre pasara a minusculas.\n";
    cout<<"\nNombre: "; cin.getline(palabra,30,'\n');

    strcpy(copy,palabra);
    strlwr(copy);

    if(strcmp(palabra,copy)==0){
        cout<<"\nSu nombre fue escrito con minusculas.\n";
    }
    else{
        if(palabra[0]=='A'){
            strlwr(palabra);
            cout<<"\nSu nombre en minusculas --> "<<palabra<<endl;
        }
        else{
            cout<<"\nSu nombre no empieza por la letra 'A'."<<endl;
        }
    }

    system("pause");
    return 0;
}
