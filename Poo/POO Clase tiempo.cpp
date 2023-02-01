#include<iostream>
#include<stdlib.h>
using namespace std;

class Hora{
    private:
        int horas,minutos,segundos;
public:
    Hora(int,int,int);//constructor1
    Hora(long);//constructor2
    void mostrarhora();

};

Hora::Hora(int _horas,int _minutos,int _segundos){
    horas= _horas;
    minutos= _minutos;
    segundos= _segundos;
}

Hora::Hora(long num){
    horas= num/3600;
    num%=3600;
    minutos=num/60;
    segundos=num%60;
}

void Hora::mostrarhora(){
    cout<<"La hora es: "<<horas<<":"<<minutos<<":"<<segundos<<endl;
}


int main(){
Hora ahora(16,23,30);
Hora ayer(55410);

ahora.mostrarhora();
ayer.mostrarhora();

    system("pause");
    return 0;
}