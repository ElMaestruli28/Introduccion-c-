//Ejercicio 11: Hacer una estructura llamada alumno, en la cual se tendrán los siguientes Campos: Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Alumno{
    char nombre[30];
    int edad;
    float promedio;
}alumno[3],*puntero_alumno=alumno;
void pedirdatos();
void calcpromedio(Alumno*);

int main(){
    pedirdatos();
    calcpromedio(puntero_alumno);


    system("PAUSE");
    return 0;
}
void pedirdatos(){
    for (int i = 0; i <3 ; ++i) {
        fflush(stdin);
        cout<<"Digite su nombre: ";
        cin.getline((puntero_alumno+i)->nombre,30,'\n');
        cout<<"Digite su edad: ";
        cin>>(puntero_alumno+i)->edad;
        cout<<"Digite el promedio: ";
        cin>>(puntero_alumno+i)->promedio;
    }
}
void calcpromedio(Alumno*puntero_alumno){
    float mayor=0.0;
    int pos=0;
    for (int i = 0; i <3 ; ++i) {
        if ((puntero_alumno+i)->promedio>mayor){
            mayor=(puntero_alumno)->promedio;
            pos=i;
        }
    }
    cout<<"\nEl alumno con mejor promedio es: ";
    cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
    cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
    cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
    cout<<"\n";

}