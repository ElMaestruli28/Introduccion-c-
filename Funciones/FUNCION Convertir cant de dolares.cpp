#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

void cambio(int,int&,int&,int&,int&,int&,int&);

int main(){
    int dolares;
    int cien=0,cincuenta=0,veinte=0,diez=0,cinco=0,uno=0;

    cout<<"\tDolares en billetes:\t ";
    cout<<"Digite una cantidad de dolares: "; cin>>dolares;

    cambio(dolares,cien,cincuenta,veinte,diez,cinco,uno);

    cout<<"\n\tBilletes:\n ";
    cout<<"$100: "<<cien<<endl<<"$50: "<<cincuenta<<endl<<"$20: "<<veinte<<endl<<"$10: "<<diez<<endl<<"$5: "<<cinco<<endl<<"$1: "<<uno<<endl;
    cout<<endl;
    system("PAUSE");
    return 0;
}
void cambio(int dol, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){

    cien=dol/100; dol%=100;
    cincuenta=dol/50; dol%=50;
    veinte=dol/20; dol%=20;
    diez=dol/10; dol%=10;
    cinco=dol/5; dol%=5;
    uno=dol;
}