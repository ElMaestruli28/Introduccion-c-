//CONCEPTO DE COLA Y COMO ELIMINAR ELEMENTOS
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Nodo{
    char dato;
    Nodo *siguiente;
};
void menu();
void insertarCola(Nodo *&,Nodo *&,char );
void eliminarCola(Nodo *&,Nodo*&,char &);
bool cola_vacia(Nodo *);

int main(){
    Nodo *frente=NULL;
    Nodo *fin=NULL;

   menu();


    system("PAUSE");
    return 0;
}
void menu(){
    int opc;
    char dato;
    Nodo *frente=NULL;
    Nodo *fin=NULL;

    do {
        cout<<"\t. Menu: \n";
        cout<<"1. Insertar un caracter a una cola: "<<endl;
        cout<<"2. Mostrar todos los elementos de la cola"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opcion: ";
        cin >> opc;

        switch (opc) {
            case 1: cout<<"\n Ingrese un caracter: ";
            cin>>dato;
                insertarCola(frente,fin,dato);
                break;
            case 2: cout<<"\nMostrando todos los elementos de la cola: ";
                while(frente !=NULL){
                    eliminarCola(frente,fin,dato);
                    if (frente!=NULL){
                        cout<<dato<<" , ";
                    }else{
                        cout<<dato<<" . ";
                    }
                }
                system("PAUSE");
                break;
            case 3: break;
        }
        system("cls");
    }while(opc!=3);
}

void insertarCola(Nodo *&frente_nodo,Nodo *&fin,char n){
    Nodo*nuevo_nodo= new Nodo();
    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=NULL;

    if (cola_vacia(frente_nodo)){
        frente_nodo=nuevo_nodo;
    }else{
        fin->siguiente=nuevo_nodo;
    }
    fin=nuevo_nodo;
    cout<<"\tElemento "<<n<<" ha sido agregado correctamente \n\n";
}

bool cola_vacia(Nodo *frente) {
    return (frente==NULL)? true : false;
}
void eliminarCola(Nodo *&frente,Nodo *&fin,char &n){
    n=frente->dato;
    Nodo *aux=frente;
    if (frente==fin){
        frente=NULL;
        fin=NULL;
    }else{
        frente=frente->siguiente;
    }
    delete aux;
}