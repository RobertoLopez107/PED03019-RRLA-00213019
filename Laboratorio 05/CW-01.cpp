//Pila de cajas de amazon
//peso, contenido, destino

#include <iostream> //Clonar del repositorio de Walter
#include <stack>
#include <string>

using namespace std;

struct pack{
    string content, address;
    float weight;
};

int main(void){
    int option = 0;

    stack <pack> st;

    pack aux;

    do{
        cout << "Peso: "; cin >> aux.weight; cin.ignore();
        cout << "Contenido: "; getline(cin, aux.content);
        cout << "Destino: "; getline(cin, aux.address);

        st.push(aux);

        cout << "Ingresar mas datos (1 = si, 0 = no)\t"; cin >> option;
        cin.ignore();

    }while(option != 0);

    aux = st.top();

    cout << "Peso: " << aux.weight << endl;
    cout << "Contenido " << aux.content << endl;
    cout << "Destino " << aux.address << endl;

}