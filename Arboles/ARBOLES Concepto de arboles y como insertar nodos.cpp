#include<iostream>
#include<stdlib.h>
using namespace std;
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
};
void menu();
void insertar(Nodo *&,int);
Nodo *crearNodo(int);
Nodo *arbol=NULL;

int main(){
menu();

    return 0;
}
void menu(){
    int dato,opc;
    do {
        cout<<"\t Menu \n";
        cout<<"1. Insertar un nuevo modo"<<endl;
        cout<<"2. Salir"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opc;

        switch (opc) {
            case 1: cout<<"\nDigite un numero: ";
            cin>>dato;
                insertar(arbol,dato);
                cout<<endl;
                system("pause");
                break;
        }
        system("cls");
    }while(opc!=2);
}

Nodo *crearNodo(int n){
    Nodo *nuevo_nodo= new Nodo();

    nuevo_nodo->dato=n;
    nuevo_nodo->der=NULL;
    nuevo_nodo->izq=NULL;

    return nuevo_nodo;
}
void insertar(Nodo *& arbol,int n){
    if (arbol==NULL){
        Nodo *nuevo_nodo= crearNodo(n);
        arbol=nuevo_nodo;
    }else{
        int valorRaiz=arbol->dato;
        if (n<valorRaiz){
            insertar(arbol->izq,n);
        }else{
            insertar(arbol->der,n);
        }
    }
}
