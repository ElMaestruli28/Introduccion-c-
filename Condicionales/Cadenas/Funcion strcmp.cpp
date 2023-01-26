#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[]="sorete";
    char palabra1[]="avion";
    if (strcmp(palabra,palabra1)>0){
        cout<<palabra<<"\nEsta despues alfabeticamente"<<endl;
    }


    system("pause");
    return 0;
}