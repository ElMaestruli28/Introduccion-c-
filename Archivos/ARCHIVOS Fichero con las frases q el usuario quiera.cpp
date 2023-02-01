#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>

using namespace std;

void escribir();

int main(){
    escribir();


    system("PAUSE");
    return 0;
}
void escribir(){
    ofstream archivo;
    string nombrearchivo,frase;

    cout<<"Digite el nombre del archivo";
    getline(cin,nombrearchivo);
    archivo.open(nombrearchivo.c_str(),ios::out);

    if (archivo.fail()){
        cout<<"No se pudo crear el archivo";
        exit(1);
    }
    while (true) {
        cout << "\nDigite el texto del archivo si quiere terminar digite una f : ";
        getline(cin, frase);

        archivo << frase;
        if (frase=="f"||frase=="F"){
            break;
        }
    }
    archivo.close();
}
