#include <iostream>
#include <string>

using namespace std;

struct Enterprise{
    string name;
    int employees;

};

int main(void){
    Enterprise* array;
    int size;

    cout<< "Digite cantidad de empresas: ";
    cin>>size;

    array = new Enterprise[size];

    for(int i = 0; i < size; i++){
        cin.ignore();
        cout<< "Name:\t";
        cin>>array[i].name;     //1 forma de hacer el cin, este es mas facil.
        cout<< "Empleados:\t";
        cin>>(array + i)->employees;    //2 forma de hacer el cin, este es el mas usado.
    }

    return 0;
}
