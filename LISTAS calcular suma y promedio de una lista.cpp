//CONCEPTO DE COLA Y COMO ELIMINAR ELEMENTOS
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
struct Nodo{
    float dato;
    Nodo *siguiente;
};

void insertarLista(Nodo *&, float);
void sumpromLista(Nodo *);
void menu();

int main(){
    menu();

    return 0;
}

void menu(){
    Nodo *lista = NULL;
    int opc = 0;
    int c;
    float n;
    do{
        system("cls");
        std::cout<<"\t\tMENU\n";
        std::cout<<"1. Insertar elementos a la lista"<<std::endl;
        std::cout<<"2. Calcular suma y promedio"<<std::endl;
        std::cout<<"3. Salir"<<std::endl;
        std::cout<<"Opcion: ";std::cin>>opc;
        switch (opc){
            case 1:
                std::cout<<"Ingrese la cantidad de numeros a digitar: ";
                std::cin>>c;
                for (int i = 0; i < c; i++)
                {
                    std::cout<<"Digite un numero: ";
                    std::cin>>n;
                    insertarLista(lista,n);
                }
                break;
            case 2:
                sumpromLista(lista);
                system("pause");
        };
    } while ((opc == 1) || (opc == 2));
}

void insertarLista (Nodo *&lista,float n){
    Nodo *nuevo_nodo = new Nodo();
    Nodo *aux;

    nuevo_nodo->dato = n;
    nuevo_nodo->siguiente = NULL;

    if (lista == NULL){
        lista = nuevo_nodo;
    }
    else{
        aux = lista;
        while (aux->siguiente != NULL){
            aux = aux->siguiente;
        }
        aux->siguiente = nuevo_nodo;
    }

    std::cout<<"\tElemento "<<n<<" agregado correctamente"<<std::endl;
}

void sumpromLista (Nodo *lista){
    Nodo *aux = lista;
    float sum = aux->dato;
    int n = 1;
    while (aux->siguiente != NULL){
        std::cout<<aux->dato<<" ->";
        aux = aux->siguiente;
        sum += aux->dato;
        n++;
        if (aux->siguiente == NULL){
            std::cout<<aux->dato;
        }
    }
    std::cout<<"\nSuma: "<<sum<<std::endl;
    std::cout<<"Promedio: "<<sum/n<<std::endl;
}