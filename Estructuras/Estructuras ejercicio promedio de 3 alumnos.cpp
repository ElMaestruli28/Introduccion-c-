#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

struct alumno{
    char nombre[20];
    int edad;
    char promedio[20];

}a1,a2,a3;

int main(){

    cout<<"Introduzca su nombre: ";
    cin.getline(a1.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>a1.edad;
    fflush(stdin);
    cout<<"Promedio: ";
    cin.getline(a1.promedio,10,'\n');

    cout<<"Introduzca su nombre: ";
    cin.getline(a2.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>a2.edad;
    fflush(stdin);
    cout<<"Promedio: ";
    cin.getline(a2.promedio,10,'\n');

    cout<<"Introduzca su nombre: ";
    cin.getline(a3.nombre,20,'\n');
    cout<<"Edad: ";
    cin>>a3.edad;
    fflush(stdin);
    cout<<"Promedio: ";
    cin.getline(a3.promedio,10,'\n');

    cout<<"\nDatos del corredor: "<<endl;
    cout<<"Nombre del alumno: "<<a1.nombre<<endl;
    cout<<"Edad del alumno: "<<a1.edad<<endl;
    cout<<"El promedio del alumno es: "<<a1.promedio<<endl;

    cout<<"\nDatos del corredor: "<<endl;
    cout<<"Nombre del alumno: "<<a2.nombre<<endl;
    cout<<"Edad del alumno: "<<a2.edad<<endl;
    cout<<"El promedio del alumno es: "<<a2.promedio<<endl;

    cout<<"\nDatos del corredor: "<<endl;
    cout<<"Nombre del alumno: "<<a3.nombre<<endl;
    cout<<"Edad del alumno: "<<a3.edad<<endl;
    cout<<"El promedio del alumno es: "<<a3.promedio<<endl;

    if (a1.promedio<a2.promedio){
        cout<<a1.nombre<<" Tiene el mejor promedio";
    }else if (a2.promedio<a1.promedio){
        cout<<a2.nombre<<"Tiene el mejor promedio";
    }else{
        cout<<a3.nombre<<"Tiene el mejor promedio";
    }
    cout<<"\n";

    system("pause");
    return 0;
}