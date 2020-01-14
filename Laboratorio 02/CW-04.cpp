#include <iostream>
#include <string>

using namespace std;

struct Address{
    int houseNumber;
    string city, state;
};

void printInfo(Address printAd);


int main(void){
    Address ad1;

    cout<<"Numero de casa";
    cin>>ad1.houseNumber;


    cout<<"Ciudad";
    cin>>ad1.city;


    cout<<"Departamento";
    cin>>ad1.state;

    cout<<"Numero de casa: "<<ad1.houseNumber;
    cout<<"Ciudad: "<<ad1.city;
    cout<<"Departamento: "<<ad1.state;
    cout<<endl;

    printInfo(ad1);

    return 0;
}

void printInfo(Address printAd){
    cout<<"No. casa:\t"<<printAd.houseNumber<<endl;
    cout<<"Ciudad:\t"<<printAd.city<<endl;
    cout<<"Departamento: "<<printAd.state<<endl;
}