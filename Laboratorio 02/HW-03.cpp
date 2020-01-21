#include <iostream>
#include <math.h> //Libreria para utilizar sqrt y pow

using namespace std;

struct general{  //Declarando estructura para variables de la formula cuadratica.
int a=0;
int b=0;
int c=0;
};

int main(){
    general f;
    int x1,x2;

    cin>>f.a;
    cin>>f.b;
    cin>>f.c;

    x1=(-f.b-(sqrt(pow(f.b,2)-(4*((f.a)*(f.c)))))/(2*f.a)); //Formula para ver primera respuesta
    x2=(-f.b+(sqrt(pow(f.b,2)-(4*((f.a)*(f.c)))))/(2*f.a)); //Formula para ver segunda respuesta

    cout<<x1<<" "<<x2;

}
