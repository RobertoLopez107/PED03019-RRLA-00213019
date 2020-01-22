#include <iostream>
using namespace std;

int fibo(int n){
    if(n<=1){
        return 1;
    }else{
        int x = fibo(n-2);
        int y = fibo(n-1);
        return x + y;
    }
}

int main() {
    int num;
    cout << "Ingrese el numero para la serie de Fibonacci: ";
    cin>>num;
    int f = fibo(num);
    cout << "Resultado: " << f << endl;
}
