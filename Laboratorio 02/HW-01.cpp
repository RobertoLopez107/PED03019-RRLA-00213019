#include <iostream>
#include <string>

using namespace std;

void jubilacion();


struct persona{
string nombre;
float salario;
int edad;
int anoslab;
};

int main(){

 jubilacion();

return 0;
}

void jubilacion(){
    persona jub;

    cout<< "Ingrese el nombre:"<<endl;
    cin>> jub.nombre;

    cout<< "Ingrese el salario:"<<endl;
    cin>> jub.salario;

    cout<< "Ingrese la edad:"<<endl;
    cin>> jub.edad;

    cout<< "Ingrese los años laborados"<<endl;
    cin>> jub.anoslab;

    if(jub.edad>=60){
        cout<<"Deberia de estar jubilada.";
    }else{
        cout<<"No deberia de estar jubilada.";
    }

}
