#include <iostream>

using namespace std;

void printletter(char* printArray, int size);

int main(void){
    int size = 0;

    cout<<"Digite la cantidad de letras: ";
    cin>>size;

    char* array;
    array = new char[size];

    for(int i = 0; i < size; i++){
        cout<<"Digite la letra";
        cin>>array[i];
    }
    printletter(array, size);

    return 0;
}

void printletter(char* printArray, int size){
    for (int i = 0; i < size; i++){
        cout<<"Letra: "<<printArray[i]<<endl;
    }
}