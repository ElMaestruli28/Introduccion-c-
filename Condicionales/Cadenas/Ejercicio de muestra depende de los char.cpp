#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;
int main() {
    char palabra[100];
    int longitud=0;
    cout<<"Diga una palabra: ";
    cin.getline(palabra,20,'\n');

    if (strlen(palabra)>=10){
        cout<<palabra;
    }
    cout<<"\n";
    system("pause");
    return 0;
}