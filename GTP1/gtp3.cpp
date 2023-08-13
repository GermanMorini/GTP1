#include<iostream>

using namespace std;

float compare(float a, float b) {
        if (a >= b) {
                return a;
        } else {
                return b;
        }
}

int main() {
        float a, b;

        cout << "Ingrese los valores a comparar: ";
        cin >> a;
        cin >> b;

        cout << "El mayor de ellos es: " << compare(a, b) << endl;
        
	return 0;
}
