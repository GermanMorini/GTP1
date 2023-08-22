#include<iostream>

using namespace std;

float avg(int n[], int l) {
        float avg = 0;

        for(int i = 0; i < l; i++) {
                avg += n[i];
                cout << avg << "\n";
        }

        return avg/l;
}

int main() {
        int i = 5, ns[5];

        while(i > 0) {
                cout << "Ingrese un valor (" << i << " restantes): ";
                cin >> ns[i-1];

                i--;
        }

        cout << "La media aritmética es: " << avg(ns, 5) << "\n";

        return 0;
}