#include <iostream>
using namespace std;

int fibo(int n); //Prototipo de la funcion

int main() {
    int num;
    cout << "Ingrese el numero para la serie de Fibonacci: ";
    cin>>num;
    int f = fibo(num); //Se ingresa la variable num para mandarla a la funcion y que se manda a llamar de paso.
    cout << "Resultado: " << f << endl;
}

int fibo(int n){ //Funcion
    if(n<=1){
        return 1; //Caso Base
    }else{
        int x = fibo(n-2);
        int y = fibo(n-1);  //Caso Recursivo
        return x + y;
    }
}
