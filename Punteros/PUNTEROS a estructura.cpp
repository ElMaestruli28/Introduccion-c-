//
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Persona{
    char nombre[30];
    int edad;
}persona,*puntero_persona=&persona;
void pedirdatos();
void mostrardatos(Persona*);

int main(){
    pedirdatos();
    mostrardatos(puntero_persona);


    system("PAUSE");
    return 0;
}
void pedirdatos(){
    cout<<"Digite su nombre: ";
    cin.getline(puntero_persona->nombre,30,'\n');
    cout<<"Digite su edad: ";
    cin>>puntero_persona->edad;
}
void mostrardatos(Persona *puntero_persona){
    cout<<"\nSu nombre: "<<puntero_persona->nombre<<endl;
    cout<<"\nSu edad: "<<puntero_persona->edad<<endl;

}