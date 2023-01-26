#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#include<math.h>

using namespace std;

int factorial(int);


int main(){

    cout<<"Factorial: "<<factorial(5)<<endl;


    system("PAUSE");
    return 0;
}
int factorial(int n){
    if (n==0){
        n=1;
    }else{
        n=n*factorial(n-1);
    }
    return n;
}