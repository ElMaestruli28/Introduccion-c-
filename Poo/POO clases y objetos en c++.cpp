#include<iostream>
#include<stdlib.h>
using namespace std;

class Persona{

private://atributos encapsulados
int edad;
string nombre;

public://metodos publicos
Persona(int,string);
void leer();
void correr();
};
//constructor
Persona::Persona(int _edad,string _nombre){
edad= _edad;
nombre= _nombre;
}

void Persona::leer(){
cout<<"Soy "<<nombre<<" y estoy leyendo un libro"<<endl;
}
void Persona::correr(){
cout<<"Soy "<<nombre<<" y estoy corriendo un maraton y tengo "<<edad<<" anos"<<endl;
}

int main(){
Persona p1=Persona(20,"Tiago");
Persona p2(21,"Malena");
Persona p3(24,"Ayrton");


p1.leer();
p2.correr();
p3.leer();
p3.correr();

return 0;
system("pause");
}