#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
#include<string>

using namespace std;

void anadir();

int main(){
anadir();

    system("pause");
    return 0;
}
void anadir(){
    ofstream archivo;
    string texto;

    archivo.open("programacion.txt",ios::app);

    if (archivo.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }
    cout<<"Digite el texto que quiere anadir: ";
    getline(cin,texto);

    archivo<<texto<<endl;
    archivo.close();

}