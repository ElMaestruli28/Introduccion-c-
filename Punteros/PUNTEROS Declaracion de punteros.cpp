//1. Punteros
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;



int main(){
    int num,*dir_num;
    num=20;
    dir_num=&num;
    cout<<"Numero: "<<*dir_num <<endl;
    cout<<"Direccionde mem: "<<dir_num<<endl;


    system("PAUSE");
    return 0;
}


