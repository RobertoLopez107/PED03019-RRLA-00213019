#include <iostream>

using namespace std;

int main(void){
    float notas[5];

    for (int i = 0; i < 5; i++){
        cout<<"Ingrese las notas: ";
        cin>>notas[i];
    }

    for (int i = 0; i < 5; i++){
        cout<<"Nota"<<(i+1)<<":\t"<<notas[i]<<"\n";
    }
    return 0;
}
