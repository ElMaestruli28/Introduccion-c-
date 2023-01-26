#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

struct fecha{
    int dia,mes,anio;
}fechas[100];
int n;

void pedirdatos();

void DeterminarMayor(fecha f[100]);

int main()
{
    pedirdatos();
    DeterminarMayor(fechas);
    system("PAUSE");
    return 0;
}
void pedirdatos(){
    cout<<"Ingrese el numero de fechas: ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<i+1<<". Ingrese el dia: ";cin>>fechas[i].dia;
        cout<<i+1<<". Ingrese el mes: ";cin>>fechas[i].mes;
        cout<<i+1<<". Ingrese el año: ";cin>>fechas[i].anio;
        cout<<"\n";
    }
}

void DeterminarMayor(fecha f[100]){
    fecha mayor={0,0,0};
    for(int i=0;i<n;i++){
        if(f[i].anio>=mayor.anio){
            if(f[i].mes>=mayor.mes){
                if(f[i].dia>=mayor.dia){
                    mayor=f[i];
                }
            }
        }
    }
    cout<<"Fecha mayor: "<<mayor.dia<<"/"<<mayor.mes<<"/"<<mayor.anio;
}