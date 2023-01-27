//CONCEPTO DE COLA Y COMO ELIMINAR ELEMENTOS
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
struct Nodo{
    int dato;
    Nodo *siguiente;
};
void insertarlista(Nodo*&,int);
void mostrarLista(Nodo *);
void calcMayorMenor(Nodo *);

int main(){
    Nodo *lista=NULL;
    int dato;
    char respuesta;

    do{
        cout<<"Digite un numero: ";
        cin>>dato;
        insertarlista(lista,dato);

        cout<<"Desea agregar otro nodo(s/n): ";
        cin>>respuesta;
    }while(respuesta=='s'||respuesta=='S');

cout<<"\nLos elementos de la lista son: \n";
    mostrarLista(lista);

    calcMayorMenor(lista);

    return 0;
}
void insertarlista(Nodo *&lista,int n){
    Nodo *nuevo_nodo= new Nodo();
    Nodo *aux;

    nuevo_nodo->dato=n;
    nuevo_nodo->siguiente=NULL;

    if (lista==NULL){
        lista=nuevo_nodo;
    }else{
        aux=lista;
        while(aux->siguiente!=NULL){
            aux= aux->siguiente;
        }
        aux->siguiente=nuevo_nodo;
    }
    cout<<"\tElemento "<<n<<" agregado a la lista correctamente";
}
void mostrarLista(Nodo *lista){
    while(lista!=NULL){
        cout<<lista->dato<<" -> ";
        lista=lista->siguiente;
    }
}
void calcMayorMenor(Nodo *lista) {
    int mayor = 0, menor = 99999999999;

    while (lista != NULL) {
        if ((lista->dato) > mayor) {
            mayor = lista->dato;
        }
        if ((lista != NULL) < menor) {
            menor = lista->dato;
        }
        lista=lista->siguiente;
    }
cout<<"El mayor elemento es: "<<mayor<<endl;
    cout<<"El menor elemento es: "<<menor<<endl;
}