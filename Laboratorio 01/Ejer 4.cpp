#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main(){
    int num[15];
    int aux[15];
    int resultado;
    for(int i=0; i<15; i++){
        srand(time(NULL));
        num[i]=1+rand()%(76-1);
        if(num[i]%7==0)
        for(int j=0; j<15; j++)
            aux[j]=num[i];
            resultado +=aux[j];
    }else
    cout<<endl;
   }
   cout<<resultado;
    
}
