//Ejercicio 12: Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa. La estructura debe tener tres campos: horas, minutos y segundos.  Escriba un programa que dado 3 etapas calcule el tiempo total empleado en correr todas
#include<iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

struct Etapas{
    int horas;
    int minutos;
    int segundos;
}etapas[3],*puntero_etapa=etapas;
void pedirdatos();
void calctiempo(Etapas*);

int main(){
    pedirdatos();
    calctiempo(puntero_etapa);


    system("PAUSE");
    return 0;
}
void pedirdatos(){
    cout<<"\tDigite los datos de las 3 etapas: \n\n";
    for (int i = 0; i <3 ; ++i) {
        fflush(stdin);
        cout<<"Horas: ";
        cin>>(puntero_etapa+i)->horas;
        cout<<"Minutos: ";
        cin>>(puntero_etapa+i)->minutos;
        cout<<"Segundos: ";
        cin>>(puntero_etapa+i)->segundos;
        cout<<"\n";
    }
}
void calctiempo(Etapas*puntero_etapa){
    int segTotales = 0, cont_horas = 0, cont_min = 0, cont_seg = 0, hs = 0, min = 0, seg = 0;

    cout<<"\tCalculando el tiempo total empleado por el ciclista para recorrer los 3 tramos: \n\n";

    for(int i = 0; i < 3; i++)
    {
        cont_horas += (puntero_etapa + i) -> horas;
        cont_min += (puntero_etapa + i) -> minutos;
        cont_seg += (puntero_etapa + i) -> segundos;
    }

    segTotales = cont_horas * 3600 + cont_min * 60 + cont_seg;

    hs = segTotales / 3600;
    segTotales %= 3600;
    min = segTotales / 60;
    segTotales %= 60;
    seg = segTotales;

    cout<<"El tiempo total empleado en los 3 tramos es: "<<hs<<":"<<min<<":"<<seg<<endl;
}