#include<iostream>

using namespace std;

int main (){
    float practica,teorica,participacion,nota_final;
    cout<<"Digite la nota de Practica: "; cin>>practica;
    cout<<"Digite la nota de Teorica: "; cin>>teorica;
    cout<<"Digite la nota de Participacion: "; cin>>participacion;

    practica*=0.30;//practica=practica*0.30
    teorica*=0.60;//teorica=teorica*0.60
    participacion*=0.10;//participacion=participacion*0.10
    nota_final =practica+teorica+participacion;
    cout<<"\nLa nota final es: "<<nota_final;




    return 0;
}