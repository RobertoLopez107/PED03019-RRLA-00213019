#include <iostream>
#include <string>

using namespace std;

int anioact = 2020;
int aniostrab=0;

struct datos{
int dui;
string nombre;
int aniocontratado;
float salariomen;
};

int main(){
    datos persona;

    int salariodeven;
    int total;

    cout<<"Ingrese su DUI: ";
    cin>> persona.dui;

    cin.ignore();

    cout<<"Ingrese su nombre completo: ";
    getline(cin, persona.nombre);

    cout<<"Ingrese el a�o en que fue contratado: ";
    cin>> persona.aniocontratado;

    cout<<"Ingrese su salario mensual:";
    cin>> persona.salariomen;

    aniostrab=(anioact-persona.aniocontratado)*12;
    total = aniostrab*persona.salariomen;
    cout<< "Su salario de vengado es: "<<total;

return 0;
}
