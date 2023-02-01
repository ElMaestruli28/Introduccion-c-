#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{
    private:
        string nombre;
        int edad;
    public:
        Persona(string,int);
            virtual void mostrar();
};

class Alumno: public Persona{
    private:
        float nota;
    public:
        Alumno(string,int,float);
            void mostrar();
};

class Profesor:public Persona{
    private:
        string materia;
    public:
        Profesor(string,int,string);
        void mostrar();
};

Persona::Persona(string _nombre,int _edad){
    nombre= _nombre;
    edad= _edad;
}

void Persona::mostrar(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
}

Alumno::Alumno(string _nombre,int _edad,float _nota):Persona(_nombre,_edad){
    nota= _nota;
}

void Alumno::mostrar(){
    Persona::mostrar();
        cout<<"Nota final: "<<nota<<endl;
}

Profesor::Profesor(string _nombre,int _edad,string _materia):Persona(_nombre,_edad){
    materia=_materia;
}

void Profesor::mostrar(){
    Persona::mostrar();
    cout<<"Materia: "<<materia<<endl;
}

int main(){
Persona *vector[3];
vector[0]=new Alumno("Tiago",17,8.33);
vector[1]=new Alumno("Malena",21,7.55);
vector[2]=new Profesor("Ayrton",24,"Algoritmos");

vector[0]->mostrar();
cout<<endl;
vector[1]->mostrar();
cout<<endl;
vector[2]->mostrar();



    system("pause");
    return 0;
}