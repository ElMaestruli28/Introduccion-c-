#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
int main (){
    int nota,todos_los_examenes=0,al_menos_un_examen=0,el_ultimo_examen=0,acum=0,ultima_nota=0;

    cout<<"Las notas estan en el intervalo [0-10], nota minima para pasar el examen es (6) "<<endl;
    cout<<"Nota:Si ingresa una nota fuera del intervalo el programa le volvera a preguntar"<<endl;
    for(int alumnos=1;alumnos<=5;alumnos++){


        cout<<"\nNotas del Alumno "<<alumnos<<": \n";


        for(int notas=1;notas<=3;notas++){

            do{
                cout<<"Ingrese la nota "<<notas<<": "; cin>>nota;
            }while((nota<0)||(nota>10));

            if(nota>=6){
                acum+=1;
            }
            ultima_nota=nota;

        }

        if(acum>=3){
            todos_los_examenes+=1;
        }
        if(acum>=1){
            al_menos_un_examen+=1;
        }
        if(ultima_nota>=6){
            el_ultimo_examen+=1;
        }
        acum=0;
    }

    cout<<"\nCantidad de alumnos que pasaron todos los examenes: "<<todos_los_examenes<<endl;
    cout<<"Cantidad de alumnos que pasaron al menos un examen: "<<al_menos_un_examen<<endl;
    cout<<"Cantidad de alumnos que pasaron el ultimo examen: "<<el_ultimo_examen<<endl;

    system("pause");
    return 0;
}