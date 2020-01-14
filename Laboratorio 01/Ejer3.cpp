#include <iostream>

using namespace std;

main(void){
    
    int numero=0,letra;
    char in[50];
    
    cout<<"Ingrese la cadena de caracteres "<<endl;
    cin>> in;
    
    for(int i=0; i<50;i++){
    
        if(in[i]=='1'||in[i]=='2'||in[i]=='3'||in[i]=='4'||in[i]=='5'||in[i]=='6'||in[i]=='7'||in[i]=='8'||in[i]=='9'||in[i]=='0'){
            numero++;
        }
        else if(in[i]=='a'||in[i]=='b'|in[i]=='c'||in[i]=='d'||in[i]=='e'||in[i]=='f'||in[i]=='g'||in[i]=='h'||in[i]=='i'||in[i]=='j'||in[i]=='k'||in[i]=='l'||in[i]=='m'||in[i]=='n'||in[i]=='o'||in[i]=='p'||in[i]=='q'||in[i]=='r'||in[i]=='s'||in[i]=='t'||in[i]=='u'||in[i]=='v'||in[i]=='w'||in[i]=='x'||in[i]=='y'||in[i]=='z'){
            letra++;
        }      
    }
        letra--;
    
    if(numero==0 && letra>0){
            cout<<"Esta compuesta por numeros "<<endl;
            
    }else if(numero>0 && letra==0){
            cout<<"Esta compuesta por letras "<<endl;
    }else if(numero>0 && letra>0){
            cout<<"Esta compuesta por alfanumerica "<<endl;
    }   
    
    cout<<numero<<" "<<letra;
    return 0;
}