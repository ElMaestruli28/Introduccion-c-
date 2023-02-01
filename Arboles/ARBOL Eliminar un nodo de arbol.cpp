#include<iostream>
#include<stdlib.h>
using namespace std;
struct Nodo{
    int dato;
    Nodo *der;
    Nodo *izq;
    Nodo *padre;
};
void menu();

void insertar(Nodo *&,int,Nodo *);

void mostrar(Nodo *,int);

bool busqueda(Nodo *,int);

void preOrden(Nodo*);

void inOrden(Nodo*);

void postOrden(Nodo*);

void eliminar(Nodo*,int);

void eliminarNodo(Nodo*);

Nodo *minimo(Nodo *);

void reemplazar(Nodo *,Nodo *);

void destruirNodo(Nodo *);

Nodo *crearNodo(int,Nodo *);
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
        cout<<"6. Recorrer el arbol en Postorden"<<endl;
        cout<<"7. Eliminar un nodo del arbol"<<endl;
        cout<<"8. Salir"<<endl;
        cout<<"Opcion: "<<endl;
        cin>>opc;
        system("cls");

        switch (opc) {
            case 1: cout<<"\nDigite un numero: ";
                cin>>dato;
                insertar(arbol,dato,NULL);
                cout<<endl;
                system("pause");
                break;
            case 2: cout<<"\nMostrando el arbol completo \n";
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
            case 6:cout<<"Recorrido en Postorden";
                postOrden(arbol);
                cout<<endl;
                system("pause");
                break;
            case 7: cout<<"\nDigite el a eliminar: ";
            cin>>dato;
                eliminar(arbol,dato);
                cout<<endl;
                system("pause");
                break;
        }
    }while(opc!=8);
}

Nodo *crearNodo(int n,Nodo *padre){
    Nodo *nuevo_nodo= new Nodo();

    nuevo_nodo->dato=n;
    nuevo_nodo->der=NULL;
    nuevo_nodo->izq=NULL;
    nuevo_nodo->padre=padre;

    return nuevo_nodo;
}
void insertar(Nodo *& arbol,int n,Nodo *padre){
    if (arbol==NULL){
        Nodo *nuevo_nodo= crearNodo(n,padre);
        arbol=nuevo_nodo;
    }else{
        int valorRaiz=arbol->dato;
        if (n<valorRaiz){
            insertar(arbol->izq,n,arbol);
        }else{
            insertar(arbol->der,n,arbol);
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
void postOrden(Nodo*arbol){
    if (arbol==NULL){
        return;
    }else{
        inOrden(arbol->izq);
        inOrden(arbol->der);
        cout<<arbol->dato<<" - ";
    }
}
void eliminar(Nodo*arbol,int n){
    if (arbol==NULL){
        return;
    }else if (n<arbol->dato){
        eliminar(arbol->izq,n);

    }else if(n>arbol->dato){
        eliminar(arbol->der,n);
    }else{
        eliminarNodo(arbol);
    }
}
Nodo *minimo(Nodo *arbol){
    if (arbol==NULL){
        return NULL;
    }
    if (arbol->izq){
        return minimo(arbol->izq);
    }else{
        return arbol;
    }
}

void eliminarNodo(Nodo*nodoEliminar){
    if (nodoEliminar->izq && nodoEliminar->der){
    Nodo *menor=minimo(nodoEliminar->der);
    nodoEliminar->dato=menor->dato;
        eliminarNodo(menor);
    }else if (nodoEliminar->izq){
        reemplazar(nodoEliminar,nodoEliminar->izq);
        destruirNodo(nodoEliminar);
    }else if(nodoEliminar->der){
        reemplazar(nodoEliminar,nodoEliminar->der);
        destruirNodo(nodoEliminar);
    }else{
        reemplazar(nodoEliminar,NULL);
        destruirNodo(nodoEliminar);
    }

}
void reemplazar(Nodo *arbol,Nodo *nuevoNodo){
    if (arbol->padre){
        if (arbol->dato==arbol->padre->izq->dato){
        arbol->padre->izq=nuevoNodo;
        }else if(arbol->dato==arbol->padre->der->dato){
            arbol->padre->der=nuevoNodo;
        }
    }
    if (nuevoNodo){
    nuevoNodo->padre=arbol->padre;
    }
}
void destruirNodo(Nodo *nodo){
    nodo->izq=NULL;
    nodo->der=NULL;
    delete nodo;
}

