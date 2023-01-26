#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

struct empleado{
    char nombre[20];
    float salario;
}emp[100];

int main(){
    int n_empleados,posM=0,posm=0;
    float mayor=0,menor=999999;

    cout<<"Digite el numero de empleados: ";
    cin>>n_empleados;


    for (int i = 0; i <n_empleados ; ++i) {
        fflush(stdin);
        cout <<i+1<< ". Digite su nombre: ";
        cin.getline(emp[i].nombre, 20, '\n');
        cout <<i+1<< ". Digite su salario: ";
        cin >> emp[i].salario;

        //empleado de mayor salario
        if (emp[i].salario>mayor){
            mayor=emp[i].salario;
            posM=i;
        }
        //empleado de menor salario
        if (emp[i].salario<menor){
            menor=emp[i].salario;
            posm=i;
        }

        cout<<"\n";
    }

    cout<<"\nDatos del empleado con mayor salario: ";
    cout<<"Nombre: "<<emp[posM].nombre<<endl;
    cout<<"Salario: "<<emp[posM].salario<<endl;

    cout<<"\nDatos del empleado con menor salario: ";
    cout<<"Nombre: "<<emp[posm].nombre<<endl;
    cout<<"Salario: "<<emp[posm].salario<<endl;

    system("pause");
    return 0;
}