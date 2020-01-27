#include <iostream>

using namespace std;

void invert(int n);

int main(void){
    int n;
    cout<<"Ingrese el numero natural: ";
    cin>>n;

    if(n>=0){
        invert(n); //Se manda a llamar la funcion.
    }
    else{
        cout<<"Error, ingrese un numero natural.";  //Si el numero es negativo da error
    }

    return 0;
}

void invert(int n){
    cout<<n%10; //Se usa para ense�ar el resudio
    if(n>=10){ //La condicion para que se haga la recursion
        invert (n/10); //Se va a hacer la recursion mientras no se cumpla la condicion.
    }
}



