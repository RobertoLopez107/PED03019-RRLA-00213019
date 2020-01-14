#include <iostream>

using namespace std;

int main(void){
    int aux = 1;
    int matriz[3][3];

    for (int i; i<3; i++){
        for (int j; j<3; j++){
            matriz[i][j] = aux++;
        }

    }

    for (int i; i<3; i++){
        for (int j; j<3; j++){
            cout<<matriz[i][j]<<"\t";
        }
        cout<<endl;
    }

    return 0;
}