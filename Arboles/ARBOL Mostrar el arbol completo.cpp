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
void mostrar(Nodo *,int);

Nodo *crearNodo(int);
Nodo *arbol=NULL;

int main(){
    menu();

    return 0;
}
void menu(){
    int dato,opc,contador=0;
    do {
        cout<<"\t Menu \n";
        cout<<"1. Insertar un nuevo modo"<<endl;
        cout<<"2. Mostrar el arbol"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opc;

        switch (opc) {
            case 1: cout<<"\nDigite un numero: ";
                cin>>dato;
                insertar(arbol,dato);
                cout<<endl;
                system("pause");
                break;
            case 2: cout<<"\nMostrando el arbol completo \n\n";
                mostrar(arbol,contador);
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
void mostrar(Nodo *arbol,int contador){
    if (arbol==NULL){
        return;
    }else{
        mostrar(arbol->der,contador+1);
        for (int i = 0; i <contador ; ++i) {
            cout<<"  ";
        }
        cout<<arbol->dato<<endl;
        mostrar(arbol->izq,contador+1);
    }
}
