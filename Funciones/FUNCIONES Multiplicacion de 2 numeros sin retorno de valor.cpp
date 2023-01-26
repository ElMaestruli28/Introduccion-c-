#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

void pedirdatos();
void mult(float x,float y);
float num1,num2;

int main(){
    pedirdatos();
    mult(num1,num2);


    system("pause");
    return 0;
}

void pedirdatos(){
    cout<<"Digite dos numeros: ";
    cin>>num1>>num2;
}
void mult(float x,float y){
    float multiplicacion=x*y;
    cout<<"El resultado es: "<<multiplicacion<<endl;

}