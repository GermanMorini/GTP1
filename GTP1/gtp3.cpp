#include<iostream>

using namespace std;

// float compare(float a, float b) {
//         if (a >= b) {
//                 return a;
//         } else {
//                 return b;
//         }
// }

float compare(float a, float b) {
        return a*(a >= b) + b*(b > a);
}

int main() {
        float a, b;

        cout << "Ingrese los valores a comparar: \n";
        cout << "1: "; cin >> a;
        cout << "2: "; cin >> b;

        cout << "El mayor de ellos es: " << compare(a, b) << endl;
        
	return 0;
}
