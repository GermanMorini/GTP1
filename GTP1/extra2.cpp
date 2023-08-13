#include<iostream>

using namespace std;

int calculate(int dim) {
        return dim/2;
}

int main() {
        int m, n;

        cout << "Ingrese las diemnsiones del tablero: ";
        cin >> m;
        cin >> n;

        cout << "La cantidad de fichas que se pueden ingresar es: " << calculate(m*n) << endl;

        return 0;
}