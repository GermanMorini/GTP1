#include<iostream>

using namespace std;

struct Producto {
        char desc[20];
        int stock, vencimiento;
};

int main() {
        Producto prod[100], prod_no_vencidos[100];
        int cantidad_1, cantidad_2 = 0, ANO_DEL_PROGRAMA = 2023;

        cout << "Ingrese la cantidad de productos: ";
        cin >> cantidad_1;

        for (int i = 0; i < cantidad_1; i++) {
                cout << "------ PRODUCTO "<<i+1<<" ------"<< endl << endl;
                
                cout << "Ingrese el nombre del prod: ";
                cin >> prod[i].desc;

                cout << "Ingrese el stock: ";
                cin >> prod[i].stock;

                cout << "Ingrese el vencimiento: ";
                cin >> prod[i].vencimiento;

                cout << endl;
                if (prod[i].vencimiento >= ANO_DEL_PROGRAMA) {
                        prod_no_vencidos[cantidad_2] = prod[i];
                        cantidad_2++;
                }
        }

        for (int i = 0; i < cantidad_2; i++) {
                cout << "------ PRODUCTO "<<i+1<<" ------"<< endl << endl;
                cout << "Descripción: " << prod_no_vencidos[i].desc << endl;
                cout << "Stock: " << prod_no_vencidos[i].stock << endl;
                cout << "Vencimiento: " << prod_no_vencidos[i].vencimiento << endl;
        }

        return 0;
}
