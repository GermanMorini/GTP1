#include<iostream>
#include<cmath>

using namespace std;

float get_perimeter(float r) {
        return 2 * M_PI * r;
}

int main() {
        float r;

        while(r != 0) {
                cout << "Ingrese el valor del radio: ";
                cin >> r;

                if(r < 0) {
                        cout << "ERR: el radio debe ser positivo, vuelvalor a ingresar" << endl;
                        continue;
                }

                cout << "El perímetro es: " << get_perimeter(r) << endl;
        }

        return 0;
}