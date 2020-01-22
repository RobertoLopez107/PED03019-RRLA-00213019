#include <iostream>

using namespace std;

int suma(int total[], int a);
int k=0;

int main(void){
    int n;
   

    cout<<"Cuantos productos va a ingresar? "<<endl;
    cin>>n;
    
    string nombres[n];
    int costo[10], venta[10];
    

    for(int i = 0; i < n; i++){
        cout<<"Ingrese el nombre del producto: "<<endl;
        cin>>nombres[i];

        cout<<"Ingrese el costo del producto: "<<endl;
        cin>>costo[i];

        cout<<"Ingrese la venta del producto: "<<endl;
        cin>>venta[i];

        cout<<endl;
    }


        cout<<"NOMBRE"<<"\t\t"<<"COSTO"<<"\t\t"<<"VENTA"<<"\n";

    for(int j = 0; j < n; j++ ){

        cout<<nombres[j]<<"\t\t"<<costo[j]<<"\t\t"<<venta[j]<<"\n";
    }

    suma(costo, n);
    
    cout<<"TOTAL \t\t";
    cout<<k<<"\t\t";
    
    suma(venta,n);
    cout<<k;

    return 0;
}

int suma(int total[], int a){

    a=a-1;
    if(a>=0){
        
       k= total[a] + suma(total,a) ;
    }
}