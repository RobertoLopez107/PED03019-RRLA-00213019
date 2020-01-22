#include <iostream>

using namespace std;

void invertor(int n){
    cout<<n%10;
    if(n>10){
        invertor (n/10);
    }
}

int main(void){
    int n;
    cout<<"Ingrese el numero natural: ";
    cin>>n;

    if(n>=0){
        invertor(n);
    }
    else{
        cout<<"Error, ingrese un numero natural.";
    }

    return 0;
}



