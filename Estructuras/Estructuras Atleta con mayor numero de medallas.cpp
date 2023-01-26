#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

struct atleta{
    char nombre[20];
    char pais[20];
    int medallas;

}emp[100];

int main(){
    int n_atletas,posM=0;
    float mayor=0;

    cout<<"Digite el numero de atletas: ";
    cin>>n_atletas;


    for (int i = 0; i <n_atletas ; ++i) {
        fflush(stdin);
        cout <<i+1<< ". Digite su nombre: ";
        cin.getline(emp[i].nombre, 20, '\n');
        cout <<i+1<< ". Digite su pais: ";
        cin.getline(emp[i].pais,20,'\n');
        cout<<i+1<<"Digite la cantidad de medallas: ";
        cin>>emp[i].medallas;

        //atleta con mayor numero de medallas
        if (emp[i].medallas>mayor){
            mayor=emp[i].medallas;
            posM=i;
        }
        cout<<"\n";
    }

    cout<<"\nDatos del atleta con mayor numero de medallas: ";
    cout<<"\nNombre: "<<emp[posM].nombre<<endl;
    cout<<"Pais: "<<emp[posM].pais<<endl;
    cout<<"Medallas: "<<emp[posM].medallas<<endl;



    system("pause");
    return 0;
}