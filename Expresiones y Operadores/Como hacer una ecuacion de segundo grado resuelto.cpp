#include<iostream>
#include<math.h>
using namespace std;

int main (){
    int a,b,c;
    float x,y;
    cout<<"digite el valor de a: "; cin>>a;
    cout<<"Digite el valor de b: "; cin>>b;
    cout<<"digite el valor de c: "; cin>>c;

    x= (-b+ sqrt(pow(b,2)-4*a*c))/(2*a);
    y=(-b- sqrt(pow(b,2)-4*a*c))/(2*a);
    cout<<"\nX es: "<<x<<endl;
    cout<<"\nY es: "<<y<<endl;

    return 0;
}