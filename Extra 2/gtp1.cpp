#include<iostream>

using namespace std;

bool validate(float a, float b) {
        return a > 0 and b > 0;
}

// TODO: falta implementar

float get_perimeter(float a, float b) {
        return -1;
}

float get_area(float a, float b) {
        return a*b/2;
}

int main() {
        float b = 0, h = 0;

        while(!validate(b, h)) {
                cout << "Ingrese los valores de la base y la altura: " << endl;
                cin >> b;
                cin >> h;
        }

        cout << "El perímetro es: " << get_perimeter(b, h) << endl;
        cout << "El área es: " << get_area(b, h) << endl;

        return 0;
}
