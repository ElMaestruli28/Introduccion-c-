#include <iostream>
#include<stdlib.h>
#include<string.h>

using namespace std;

int main() {
    char palabra[100];
    char recurso[100];

    cout << "Escriba una palabra: ";
    gets(palabra);

    strcpy(recurso,palabra);
    strrev(recurso);

    if(strcmp(palabra,recurso) == 0) {
        cout << "\nLa palabra '" << palabra << "' es polindroma." << endl;
    } else {
        cout << "\nLa palabra '" << palabra << "' no es polindroma." << endl;
    }

    system("pause");
    return 0;
}
