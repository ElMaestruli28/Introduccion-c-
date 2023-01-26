struct Persona{
    char nombre[20];
    bool discapacidad = true;

}pers[100], persConD[100], persSinD[100];;

int main(){
    int n, j = 0, k = 0;

    cout<<"Digite el numero de personas: "; cin>>n;

    cout<<"\nATENCION: Si posee una discapacidad digite 1. Sino posee ninguna, digite 0\n";
    cout<<"\n";

    for (int i=0;i<n;i++){
        fflush(stdin);
        cout<<"Nombre: ";
        cin.getline(pers[i].nombre,20,'\n');
        cout<<"Discapacidad (1/0)? : ";
        cin>>pers[i].discapacidad;

        if(pers[i].discapacidad == 1){
            strcpy(persConD[j].nombre, pers[i].nombre);
            j++;
        }
        else{
            strcpy(persSinD[k].nombre, pers[i].nombre);
            k++;
        }
        cout<<"\n";
    }

    cout<<"\nPersonas CON Discapacidad\n";
    for(int j=0;j<n;j++){
        cout<<persConD[j].nombre<<endl;
    }

    cout<<"\nPersonas SIN Discapacidad\n";
    for(int k=0;k<n;k++){
        cout<<persSinD[k].nombre<<endl;
    }