//CONCEPTO DE COLA Y COMO ELIMINAR ELEMENTOS
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
struct Nodo{
    int dato;
    Nodo *siguiente;
};
Nodo *lista=NULL;
void menu();
void insertarLista( Nodo *&, int);
void mostrarLista(Nodo *);
void buscarlista(Nodo *, int );
void eliminarNodo(Nodo *&,int);
void eliminarLista(Nodo *&,int &);

int main(){

    menu();
    system("pause");
    return 0;
}
void insertarLista(Nodo *&lista, int n){
    Nodo *nuevo_nodo= new Nodo();
    nuevo_nodo->dato=n;
    Nodo *aux1=lista;
    Nodo*aux2;

    while((aux1 != NULL) && (aux1->dato<n)){
        aux2=aux1;
        aux2=aux1->siguiente;
    }
    if(lista==aux1){
        lista =nuevo_nodo;
    }
    else{
        aux2->siguiente =nuevo_nodo;
    }
    nuevo_nodo->siguiente=aux1;
    cout<<"Elemento "<<n<<" insertado a la lista correctamente"<<endl;
}
void mostrarLista(Nodo *lista){
    Nodo *actual = new Nodo();
    actual = lista;

    while(actual != NULL){
        cout<<actual->dato<<" -> ";
        actual= actual->siguiente;
    }
}
void menu(){
    int opcion, dato;
    do{
        cout<<"Menu"<<endl;
        cout<<"1. Insertar elementos a la salida  "<<endl;
        cout<<"2. Mostrar elementos de la lista"<<endl;
        cout<<"3. Buscar elemento en la lista"<<endl;
        cout<<"4. Eliminar un nodo de la lista"<<endl;
        cout<<"5. Eliminar lista"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"Opcion: ";
        cin>>opcion;
        switch(opcion){
            case 1:cout<<"Digite su numero: ";
                cin>>dato;
                insertarLista(lista,dato);
                break;
            case 2:
                mostrarLista(lista);
                break;
            case 3: cout<<"\nDigite un numero a buscar: ";
                cin>>dato;
                buscarlista(lista,dato);
                break;
            case 4: cout<<"\nDigite el elemento que desea eliminar: ";
            cin>>dato;
            eliminarNodo(lista,dato);
            break;
            case 5:
                while(lista!=NULL){
                    eliminarLista(lista,dato);
                    cout<<dato<<" -> ";
                }
                break;
        }
        system("cls");
    }while(opcion != 6);
}
void buscarlista(Nodo *lista,int n){
    bool band= false;

    Nodo *actual = new Nodo();
    actual=lista;

    while ((actual!=NULL)&&(actual->dato<=n)){
        if (actual->dato==n){
            band= true;
        }
        actual=actual->siguiente;
    }
    if(band==true){
        cout<<"Elemento "<<n<<" Si a sido encontrado en la lista\n";
    }else{
        cout<<"Elemento "<<n<<" No a sido encontrado en la lista\n";
    }
}
void eliminarNodo(Nodo *&lista,int n) {
    if (lista != NULL) {
        Nodo *aux_borrar;
        Nodo *anterior = NULL;
        aux_borrar = lista;

        while ((aux_borrar != NULL) && (aux_borrar->dato != n)) {
            anterior = aux_borrar;
            aux_borrar = aux_borrar->siguiente;
        }
        if (aux_borrar == NULL) {
            cout << "Elemento no encontrado";
        } else if (anterior == NULL) {
            lista = lista->siguiente;
            delete aux_borrar;
        } else {
            anterior->siguiente = aux_borrar->siguiente;
            delete aux_borrar;
        }
    }
}
void eliminarLista(Nodo *&lista,int &n){
    Nodo *aux=lista;
    n=aux->dato;
    lista=aux->siguiente;
    delete aux;
}
