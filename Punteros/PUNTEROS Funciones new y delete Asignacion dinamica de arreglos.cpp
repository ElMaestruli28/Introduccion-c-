
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>
#include<vector>

using namespace std;
//prototipo de funcion
void pedirnotas();
void mostrarNotas();

int numCalif,*calif;

int main(){

    cout<<"D";
    pedirnotas();
    mostrarNotas();

    delete[]calif;//liberando el espacio en bytes utilizado antes
    system("PAUSE");
    return 0;
}
void pedirnotas(){
    cout<<"Digite el numero de calificaciones: ";
    cin>>numCalif;

    calif=new int[numCalif];//creando el arreglo

    for (int i = 0; i <numCalif ; ++i) {
        cout<<"Ingrese una nota: ";
        cin>>calif[i];
    }

}
void mostrarNotas(){
    cout<<"\nMostrando notas del usuario: \n";
    for (int i = 0; i <numCalif ; ++i) {
        cout<<calif[i]<<endl;
    }
}
