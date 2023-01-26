#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void calc_anos(int,int&,int&,int&);

int main(){
    int fecha,ano,mes,dia;
    string mesnombre;

    cout<<"Inserte el numero de dias para saber la fecha desde el 1 de Enero de 2000: ";
    cin>>fecha;

    calc_anos(fecha,ano,mes,dia);

    switch (mes) {
        case 1:mesnombre="ENERO";
            break;
        case 2:mesnombre="FEBRERO";
            break;
        case 3:mesnombre="MARZO";
            break;
        case 4:mesnombre="ABRIL";
            break;
        case 5:mesnombre="MAYO";
            break;
        case 6:mesnombre="JUNIO";
            break;
        case 7:mesnombre="JULIO";
            break;
        case 8:mesnombre="AGOSTO";
            break;
        case 9:mesnombre="SEPTIEMBRE";
            break;
        case 10:mesnombre="OCTUBRE";
            break;
        case 11:mesnombre="NOVIEMBRE";
            break;
        case 12:mesnombre="DICIEMBRE";
            break;
    }

    cout<<"\nFecha: \n";
    cout<<" "<<ano<<" de "<<mesnombre<<" del "<<dia<<endl;
    system("PAUSE");
    return 0;
}
void calc_anos(int fecha,int& dia,int& mes, int& ano){

    ano = ((fecha)/365)+2000; fecha %= 365;
    mes = fecha/30; fecha %= 30;
    dia = fecha+1;
}