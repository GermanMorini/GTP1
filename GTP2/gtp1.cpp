#include<iostream>

using namespace std;

int main() {
        int numbers[5], i = 5;

        while(i > 0) {
                cout << "Ingrese un valor numérico (" << i << " restantes)\n";
                cin >> numbers[5-i];
                i--;
        }

        cout << "Los valores ingresados son: \n";

        while(i < 5) {
                cout << "Valor " << i+1 << ": " << numbers[i] << "\n";
                i++;
        }

        return 0;
}