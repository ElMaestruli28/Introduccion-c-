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
bool busqueda(Nodo *,int);
void preOrden(Nodo*);
void inOrden(Nodo*);

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
        cout<<"3. Buscar un elemento en el arbol"<<endl;
        cout<<"4. Recorrer el arbol en Preorden"<<endl;
        cout<<"5. Recorrer el arbol en Inorden"<<endl;
        cout<<"6. Salir"<<endl;
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
            case 3: cout<<"\nDigite el elemento a buscar: ";
                cin>>dato;
                if (busqueda(arbol,dato)==true){
                    cout<<"El elemento "<<dato<<" a sido encontrado en el arbol \n";
                }else{
                    cout<<"\nElemento no encontrado";
                }
                cout<<endl;
                system("pause");
                break;
            case 4: cout<<"\nRecorrido en Preorden: ";
                preOrden(arbol);
                cout<<endl;
                system("pause");
                break;
            case 5:cout<<"\nRecorrido en Inorden";
                inOrden(arbol);
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
bool busqueda(Nodo *arbol,int n){
    if(arbol==NULL){
        return false;
    }else if(arbol->dato==n){
        return true;
    }else if (n<arbol->dato){
        return busqueda(arbol->izq,n);
    }else{
        return busqueda(arbol->der,n);
    }
}
void preOrden(Nodo*arbol) {
    if (arbol == NULL) {
        return;
    } else {
        cout << arbol->dato << " - ";
        preOrden(arbol->izq);
        preOrden(arbol->der);
    }
}
void inOrden(Nodo*arbol){
    if (arbol==NULL){
        return;
    }else{
        inOrden(arbol->izq);
        cout<<arbol->dato<<" - ";
        inOrden(arbol->der);
    }
}

