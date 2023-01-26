#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

struct promedio{
    float nota1,nota2,nota3;

};
struct alumno{
    char nombre[20];
    char sexo[20];
    int edad;
    struct promedio prom;
}alum1;
int main(){
    float promedio_alumno;

    cout<<"Introduzca su nombre: ";
    cin.getline(alum1.nombre,20,'\n');
    cout<<"Digite su sexo: ";
    cin.getline(alum1.sexo,10,'\n');

    cout<<"\n :Notas del alumno: \n";
    cout<<"Nota 1: ";
    cin>>alum1.prom.nota1;
    cout<<"Nota 2: ";
    cin>>alum1.prom.nota2;
    cout<<"Nota 3: ";
    cin>>alum1.prom.nota3;

    promedio_alumno=(alum1.prom.nota1+alum1.prom.nota2+alum1.prom.nota3)/3;

    cout<<"\nDatos del alumno\n";
    cout<<"Nombre: "<<alum1.nombre<<endl;
    cout<<"sexo: "<<alum1.sexo<<endl;
    cout<<"Su promedio es: "<<promedio_alumno<<endl;

    system("pause");
    return 0;
}