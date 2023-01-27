//CONCEPTO DE COLA Y COMO INSERTAR ELEMENTOS
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo{
    int dato;
    Nodo *siguiente;
};
void insertarCola(Nodo *&,Nodo *&,int );
bool cola_vacia(Nodo *);

int main(){
Nodo *frente=NULL;
Nodo *fin=NULL;

int dato;

cout<<"Digite un numero: ";
cin>>dato;
    insertarCola(frente,fin,dato);

    cout<<"Digite un numero: ";
    cin>>dato;
    insertarCola(frente,fin,dato);

    cout<<"Digite un numero: ";
    cin>>dato;
    insertarCola(frente,fin,dato);

    system("PAUSE");
    return 0;
}
void insertarCola(Nodo *&frente_nodo,Nodo *&fin,int n){
    Nodo*nuevo_nodo= new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=NULL;

    if (cola_vacia(frente_nodo)){
        frente_nodo=nuevo_nodo;
    }else{
        fin->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;
    cout<<"\tElemento "<<n<<" ha sido agregado correctamente\n";
}

bool cola_vacia(Nodo *frente) {
    return (frente==NULL)? true : false;
}