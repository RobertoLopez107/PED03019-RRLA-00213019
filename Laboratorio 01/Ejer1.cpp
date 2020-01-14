#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int Llenado();
int sumaPrimos(int *numeros[], int 100);
int main()
{
   Llenado();
   
}
int Llenado(){
    int numeros[100];
    for (int i=0; i<100; i++){
        numeros[i]=i+1;
        cout<<numeros[i];
        cout<<endl;
    }
    cout<<"SUMA DE LOS PRIMOS: "<<endl;
        sumaPrimos(*numeros[], 100);
}

int sumaPrimos(int *numeros[]; int 100){
    
}
//No pude hacer la sumatoria de los primos