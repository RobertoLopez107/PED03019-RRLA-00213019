#include <iostream>
using namespace std;

int main(void){
    char word[9]= {'c','o','d','i','f','i'.'c','a','r'};
    char verificacion[9];
    char guessletter;
    int a = 13;
    

    cout<<"Ahorcado"<<endl;
    cout<<"La palabra adivinada tiene 9 letras"<<endl;
    do{
        cout<<"Letra: "; cin>>guessletter;

    }while (a > 0);
    
    
    return 0;
}

bool hasletter(char arr1[9], char arr2[9], char letter, char size){
    for(int i = 0; i < size; i++){
        if(arr1[i]== letter){
            arr2[i] = letter;
        }
    }
}