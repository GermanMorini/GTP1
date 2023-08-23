#include<iostream>

using namespace std;

int main() {
        short SIZE, i;
        
        cout << "Ingrese el largo de arreglo: ";
        cin >> SIZE;

        int n[SIZE];
        i = SIZE;

        while(i > 0) {
                cout << "Ingrese un valor: ";
                cin >> n[i-1];

                i--;
        }

        cout << "\nLos valores ingresados son: \n";

        for(i; i < SIZE; i++) {
                cout << n[i] << " ";
        }

        cout << "\n";

        return 0;
}
