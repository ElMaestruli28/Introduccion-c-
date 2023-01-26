//Ejercicio 8: Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o,u; en la cadena de caracteres.
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

void pedirdatos();
int contarvocales(char*nombre);

char nmusuario[30];
int a=0,e=0,i=0,o=0,u=0;

int main(){
    pedirdatos();
    cout<<"\nEl numero de vocales son: "<<contarvocales(nmusuario);
    cout<<"\nLa vocal 'a' aparece: "<<a<<" veces ";
    cout<<"\nLa vocal 'e' aparece: "<<e<<" veces ";
    cout<<"\nLa vocal 'i' aparece: "<<i<<" veces ";
    cout<<"\nLa vocal 'o' aparece: "<<o<<" veces ";
    cout<<"\nLa vocal 'u' aparece: "<<u<<" veces ";
    cout<<"\n";

    system("PAUSE");
    return 0;
}
void pedirdatos(){
    cout<<"Digite una cadena: ";
    cin.getline(nmusuario,30,'\n');

    strupr(nmusuario);//pasando a mayuscula
}
int contarvocales(char*nombre){
    int cont=0;

    while (*nombre){
        switch (*nombre) {
            case'A':a++;cont++;break;
            case'E':e++;cont++;break;
            case'I':i++;cont++;break;
            case'O':o++;cont++;break;
            case'U':u++;cont++;break;
        }
        nombre++;
    }
    return cont;
}