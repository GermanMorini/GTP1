#include<iostream>

using namespace std;

int deter(int m[2][2]) {
        return (m[0][0]*m[1][1]) - (m[0][1]*m[1][0]);
}

int main() {
        int m[2][2];

        cout << "Ingrese los coeficientes de la fila 1: \n";
        cin >> m[0][0];
        cin >> m[0][1];
        
        cout << "Ingrese los coeficientes de la fila 2: \n";
        cin >> m[1][0];
        cin >> m[1][1];

        cout << "El determinante es: " << deter(m) << "\n";

        return 0;
}
