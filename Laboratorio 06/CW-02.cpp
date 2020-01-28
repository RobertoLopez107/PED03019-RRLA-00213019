#include <iostream>
#include <string>
#include <cctype>

using namespace std;

struct node{
    string product;
    float price;
    node* next;
};

string convert(string product);
void printMenu(void);
node* addElement(node* list, string product, float price);
string convertString(string product);
int searchStock(node* list, string product);

int main(void){
    node* list = NULL;
    string product = "";
    float price = 0;
    int option = 0;
    int auxStock = 0;

    do{
        printMenu(); cin >> option; cin.ignore();

        switch (option)
        {
        case 1:
            cout << "Ingrese los datos del producto " << endl;
            cout << "Nombre:\t"; cin >> product;
            cout << "Precio:\t"; cin >> price;
            product = convertString(product);
            list = addElement(list, product, price);
        break;
        
        case 2:
            cout << "Ingres el producto a buscar" << endl;
            cout << "Producto:\t"; cin >> product;
            product = convertString(product);

            auxStock = searchStock(list, product);

            (auxStock == 0) ? cout << "Sin stock" : cout << "Cantidad en stock:\t" << auxStock; 
        break;
        case 0:
            cout << "Saliendo . . ." << endl;
        }
    }while(option != 0);

}

string convertString(string product){
    string aux = "";

    for(int i = 0; i < product.length(); i++)
        aux += toupper(product[i]);

    return aux;
}

void printMenu(void){
    cout << "Menu principal " << endl;
    cout << "1.\tAgregar producto" << endl;
    cout << "2.\tBuscar producto" << endl;
    cout << "0.\tSalir" << endl;
}

node* addElement(node* list, string product, float price){
    node* newNode = new node;
    newNode->price = price;
    newNode->product = product;
    newNode->next = NULL;

    if(!list)
        list = newNode;
    else{
        node* aux = list;

        while (aux->next != NULL)
            aux = aux->next;

        aux->next = newNode;
        
    }
    return list;
}

int searchStock(node* list, string product){
    if(!list)
        return 0;
    else 
        if(product.compare(list->product) == 0)
            return 1 + searchStock(list->next, product);
        else
            return 0 + searchStock(list->next, product);    
}