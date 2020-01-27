#include <iostream>
#include <stack>
#include <string>
using namespace std;

struct product{
    string price;
    string name;
    string cantStock;
};
typedef struct product Product;

int main(){
    stack<Product> pilaDeProductos;

    bool continuar = true;
    do{
        char opcion = 's';
        cout << "\nCantidad de productos actual: " << pilaDeProductos.size();
        cout << "\nDesea agregar otro producto? (s/n): ";
        cin >> opcion; cin.ignore();

        if(opcion == 's'){        //Se guardan los productos
            Product unProduct;
            cout << "Precio: ";   getline(cin, unProduct.price);
            cout << "Nombre: ";   getline(cin, unProduct.name);
            cout << "Cantidad en stock: ";       getline(cin, unProduct.cantStock);
            pilaDeProductos.push(unProduct);
        }
        else if(opcion == 'n')
            continuar = false;
        else
            cout << "Opcion no valida!" << endl;
    }while(continuar);

    cout << "\nProductos Almacenados" << endl;  //Se enseñan los productos almacenados arriba
    while(!pilaDeProductos.empty()){
        // Obtener el plato de encima (sin sacarlo de la pila)
        Product productDeEncima = pilaDeProductos.top();
        cout << "Producto [" << productDeEncima.price;
        cout << ", " << productDeEncima.name;
        cout << ", " << productDeEncima.cantStock << "]\n";

        pilaDeProductos.pop();
    }

    return 0;
}
