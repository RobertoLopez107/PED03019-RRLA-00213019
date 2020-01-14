#include <iostream>

using namespace std;

long int factorial(int n);

int main(void){
    cout<< factorial(8)<<endl;
}



long int factorial(int n){
    if(n==0||n==1){
        return 1;
    }else{
        return n * factorial(n - 1);
    }

}


/*
Factorial(4);

Primera iteracion
n = 4;

if(n == 0 || n == 1)
    no cumple
else
    factorial(n - 1); 4 * factorial (3);

    segunda iteracion
    n = 3;

    if(n == 0 || n == 1)
        no cumple
    else
        factorial(n - 1); 3 * factorial(2);

        tercera iteracion
        n = 2;

        if(n == 0 || n == 1)
            no cumple*/