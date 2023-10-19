#include<iostream>
#include<string.h>

using namespace std;

int main() {
        struct Producto {
                char desc[20];
                int stock, vencimiento;
        };

        Producto prod[100];
        int cantidad_1 , cantidad_2 = 0, ANO_DEL_PROGRAMA = 2023;

        cout << "Ingrese la cantidad de productos: ";
        cin >> cantidad_1;

        for (int i = 0; i < cantidad_1; i++) {
                cout << "------ PRODUCTO "<<i+1<<" ------"<< endl << endl;
                
                cout << "Ingrese el nombre del prod: ";
                cin.ignore();
                cin.getline(prod[i].desc, 20, '\n');

                cout << "Ingrese el stock: ";
                cin >> prod[i].stock;

                cout << "Ingrese el vencimiento: ";
                cin >> prod[i].vencimiento;

                cout << endl;
        }

        for (int i = 0; i < cantidad_1; i++) {
                if(prod[i].vencimiento < ANO_DEL_PROGRAMA) {
                        strcpy(prod[i].desc, prod[cantidad_1-1].desc);
                        prod[i].stock = prod[cantidad_1-1].stock;
                        prod[i].vencimiento = prod[cantidad_1-1].vencimiento;
                        i--;
                        cantidad_1--;
                }
        }

        cout << endl << "Se han eliminado los productos vencidos, el stock ahora es: " << endl << endl;

        for (int i = 0; i < cantidad_1; i++) {
                cout << "------ PRODUCTO "<<i+1<<" ------"<< endl << endl;
                cout << "Descripción: " << prod[i].desc << endl;
                cout << "Stock: " << prod[i].stock << endl;
                cout << "Vencimiento: " << prod[i].vencimiento << endl;
        }

        return 0;
}
