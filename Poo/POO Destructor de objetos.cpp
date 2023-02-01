#include<iostream>
#include<stdlib.h>
using namespace std;

class Perro{
private:
string nombre,raza;
public:
Perro(string,string);//constructor
    ~Perro();//destructor
    void mostrarDatos();
    void jugar();

};
//constructor
Perro::Perro(string _nombre,string _raza){
    nombre= _nombre;
    raza= _raza;
}

//destructor
Perro::~Perro(){
}

void Perro::mostrarDatos(){
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Raza: "<<raza<<endl;
}

void Perro::jugar(){
cout<<"El perro "<<nombre<<" esta jugando"<<endl;
}


int main(){
Perro p1("Chispita","Salchicha");

p1.mostrarDatos();
p1.jugar();
p1.~Perro();//destruyendo el objeto

cout<<"\n";



    system("pause");
    return 0;
}