#include<iostream>
#include<stdlib.h>
#include<time.h>

using namespace std;

struct info_direccion{
    char direccion[30];
    char ciudad[20];
    char provincia[20];
};
struct empleado{
    char nombre[20];
    struct info_direccion dir_empleado;
    double salario;
};
int main () {


    system("pause");
    return 0;
}