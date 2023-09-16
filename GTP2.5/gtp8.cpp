#include<iostream>

using namespace std;

int deter(int v1[], int v2[]) {
        return (v1[0]*v2[1]) - (v1[1]*v2[0]);
}

int main() {
        int v1[2], v2[2];

        cout << "Ingrese los coeficientes del vector 1: \n";
        cin >> v1[0];
        cin >> v1[1];
        
        cout << "Ingrese los coeficientes del vector 2: \n";
        cin >> v2[0];
        cin >> v2[1];

        cout << "El determinante es: " << deter(v1, v2) << "\n";

        return 0;
}
