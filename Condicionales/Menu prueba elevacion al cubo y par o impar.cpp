using namespace std;

int main (){
    int n1,resultado,opc;
    cout<<"1. Elevar el numero al cubo: "<<endl;
    cout<<"2. Numero es par o impar: "<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"Opcion: ";
    cin>>opc;

    switch (opc) {

        case 1:
            cout<<"Digite el numero para elevar al cubo: ";
            cin>>n1;
            resultado = pow(n1, 3);
            cout << "Su numero es: "<<resultado;
            break;

        case 2:
            cout<<"Digite el numero para saber si es par o impar: ";
            cin>>n1;
            if (n1 == 0) {
                cout << "El numero es cero";
            } else if (n1 % 2 == 0) {
                cout << "El numero es par";
            } else {
                cout << "El numero es impar";
                break;
            }
        case 3:
            break;
    }
    return 0;
}
