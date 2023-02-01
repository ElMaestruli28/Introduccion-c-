#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona
{
private:
    string nombre;
    int edad;

public:
    Persona(string, int);
    void mostrarPersona();
};

class Empleado : public Persona
{
private:
    float sueldo;

public:
    Empleado(string, int, float);
    void mostrarEmpleado();
};

class Estudiante : public Persona
{
private:
    float notaFinal;

public:
    Estudiante(string, int, float);
    void mostrarEstudiante();
};

class Universitario : public Estudiante
{
private:
    string carrera;

public:
    Universitario(string, int, float, string);
    void mostrarUniversitario();
};

// Constructor de la clase Persona(Clase Padre)
Persona::Persona(string _nombre, int _edad)
{
    nombre = _nombre;
    edad = _edad;
}

void Persona::mostrarPersona()
{
    cout << "Nombre: " << nombre << endl;
    cout << "Edad: " << edad << endl;
}

// Constructor de la clase Empleado(Clase Hija)
Empleado::Empleado(string _nombre, int _edad, float _sueldo) : Persona(_nombre, _edad)
{
    sueldo = _sueldo;
}

void Empleado::mostrarEmpleado()
{
    mostrarPersona();
    cout << "Sueldo: " << sueldo << endl;
}

// Constructor de la clase Estudiante(Clase Hija-Padre)
Estudiante::Estudiante(string _nombre, int _edad, float _notaFinal) : Persona(_nombre, _edad)
{
    notaFinal = _notaFinal;
}

void Estudiante::mostrarEstudiante()
{
    mostrarPersona();
    cout << "Nota final: " << notaFinal << endl;
}

// Constructor de la clase Universitario(Clase Hija)
Universitario::Universitario(string _nombre, int _edad, float _notaFinal, string _carrera) : Estudiante(_nombre, _edad, _notaFinal)
{
    carrera = _carrera;
}

void Universitario::mostrarUniversitario()
{
    mostrarEstudiante();
    cout << "Carrera: " << carrera << endl;
}

int main()
{
    Empleado empleado1("Tiago", 17, 1500);
    cout << "-Empleado-" << endl;             // Persona  (Nombre, edad)
    empleado1.mostrarEmpleado();              // Empleado   (Nombre, edad, sueldo)
    cout << "\n";                             // Estudiante  (Nombre, edad, nota final)
    
    Estudiante estudiante1("Ayrton", 24, 8.33); // Universitario (Nombre, edad, nota final, carrera)
    cout << "-Estudiante-" << endl;
    estudiante1.mostrarEstudiante();
    cout<<"\n";
    
    Universitario universitario1("Malena", 21, 7.95, "Traductorado");
    cout << "-Universitario-" << endl;
    universitario1.mostrarUniversitario();
    cout << "\n";

    system("pause");
    return 0;
}