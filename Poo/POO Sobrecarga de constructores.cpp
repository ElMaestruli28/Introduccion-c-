#include<iostream>
#include<stdlib.h>
using namespace std;

class Fecha{
    private:
        int dia,mes,ano;
public:
    Fecha(int,int,int);//constructor1
    Fecha(long);//constructor2
    void mostrarfecha();

};

Fecha::Fecha(int _dia,int _mes,int _ano){
    ano= _ano;
    mes= _mes;
    dia= _dia;
}

Fecha::Fecha(long fecha){
    ano= int(fecha/10000);
    mes= int((fecha-ano*10000)/100);
    dia= int(fecha-ano*10000-mes*100);
}

void Fecha::mostrarfecha(){
    cout<<"La fecha es "<<dia<<"/"<<mes<<"/"<<ano<<endl;
}


int main(){
Fecha hoy(30,1,2023);
Fecha ayer(20230129);

hoy.mostrarfecha();
ayer.mostrarfecha();

    system("pause");
    return 0;
}