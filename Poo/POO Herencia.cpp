#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
            void mostrarPersona();
};

class Empleado:public Persona{
    private
    float sueldo;
    public:
        Empleado(string,int,float);
            void mostrarEmpleado();
};

class Estudiante:public Persona{
    private:
        float notafinal;
    public:
        Estudiante(string,int,float);
        void mostrarEstudiante();
};


Persona::Persona(string _nombre,int _edad){
    nombre= _nombre;
    edad= _edad;
}

void Persona::mostrarPersona(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

Empleado::Empleado(string _nombre,int _edad,float _sueldo):Persona( _nombre, _edad){
    sueldo= _sueldo;
}
void Empleado::mostrarEmpleado(){
    mostrarPersona();
    cout<<"Sueldo es: "<<sueldo<<endl;
}

Estudiante::Estudiante(string _nombre,int _edad,float _notafinal): Persona( _nombre, _edad){
    notafinal= _notafinal;
}

void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"Nota final: "<<notafinal<<endl;
}


int main(){


    system("pause");
    return 0;
}