#include <iostream>

using namespace std;

void invertor(int n);

int main(void){
    int n;
    cout<<"Ingrese el numero natural: ";
    cin>>n;

    if(n>=0){
        invertor(n); //Se manda a llamar la funcion.
    }
    else{
        cout<<"Error, ingrese un numero natural.";  //Si el numero es negativo da error
    }

    return 0;
}

void invertor(int n){
    cout<<n%10; //Se usa para enseñar el resudio
    if(n>=10){ //La condicion para que se haga la recursion
        invertor (n/10); //Se va a hacer la recursion mientras no se cumpla la condicion.
    }
}



