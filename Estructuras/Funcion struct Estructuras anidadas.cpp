#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

struct info_direccion{
    char direccion [30];
    char ciudad[20];
    char provincia[20];
};
struct empleados{
    char nombre[30];
    struct info_direccion dir_empleado;
    double salario;
}empleado[100];


int main(){
    int nume;
    cout<<"\nDigite el numero de empleados:";cin>>nume;
    cout<<"\n";

    for(int i=0;i<nume;i++){
        fflush(stdin);
        cout<<"Digite el nombre:";cin.getline(empleado[i].nombre,30,'\n');
        cout<<"Digite la direccion:";cin.getline(empleado[i].dir_empleado.direccion,30,'\n');
        cout<<"Digite la ciudad:";cin.getline(empleado[i].dir_empleado.ciudad,20,'\n');
        cout<<"Digite la provincia:";cin.getline(empleado[i].dir_empleado.provincia,20,'\n');
        cout<<"Salario:";cin>>empleado[i].salario;

        cout<<"\n";


    }

    for(int i=0;i<nume;i++){
        cout<<"Nombre:"<<empleado[i].nombre<<endl;
        cout<<"Direccion:"<<empleado[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad:"<<empleado[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia:"<<empleado[i].dir_empleado.provincia<<endl;
        cout<<"Salario:"<<empleado[i].salario<<endl;
        cout<<"\n";


    }
    system("pause");
    return 0;
}