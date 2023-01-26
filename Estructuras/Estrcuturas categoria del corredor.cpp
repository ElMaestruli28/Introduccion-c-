#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

struct corredor{
    char nombre[20];
    int edad;
    char sexo[20];
    char club[20];
}c1;

int main(){
    char categoria[20];

    cout<<"Introduzca su nombre: ";
    cin.getline(c1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>c1.edad;
    fflush(stdin);
    cout<<"Sexo: ";
    cin.getline(c1.sexo,10,'\n');
    cout<<"Club: ";
    cin.getline(c1.club,20,'\n');

    if (c1.edad<=18){
        strcpy(categoria,"Juvenil");
    }else if (c1.edad<=40){
        strcpy(categoria,"Senior");
    }else{
        strcpy(categoria,"Veterano");
    }

    cout<<"\nDatos del corredor: "<<endl;
    cout<<"Nombre del corredor: "<<c1.nombre<<endl;
    cout<<"Edad del participante: "<<c1.edad<<endl;
    cout<<"Sexo del participante: "<<c1.sexo<<endl;
    cout<<"Club del corredor: "<<c1.club<<endl;
    cout<<"Categoria del corredor: "<<categoria<<endl;
    system("pause");
    return 0;
}