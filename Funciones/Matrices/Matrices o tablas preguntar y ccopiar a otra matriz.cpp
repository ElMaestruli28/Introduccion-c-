#include <iostream>
#include<stdlib.h>

using namespace std;
int main() {
    int filas;
    int columnas;
    int aleatorio;
    srand(time(NULL));
    cout << "Elija la cantidad de filas: ";
    cin >> filas;
    cout << "Elija la cantidad de columnas: ";
    cin >> columnas;
    int n[filas][columnas];
    cout << endl;
    cout << "Su matriz es: " << endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            aleatorio = 1 + rand() % 10;
            n[i][j] = aleatorio;
            if (j == (columnas - 1)) {
                cout << n[i][j] << endl;
            } else {
                cout << n[i][j] << "";
            }
        }
    }
    cout << "\n";


    system("pause");
    return 0;
}
