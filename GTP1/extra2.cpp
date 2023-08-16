#include<iostream>

using namespace std;

int count(int dim) {
        return dim/2;
}

int main() {
        int m, n;

        cout << "Ingrese las dimensiones del tablero: ";
        cin >> m;
        cin >> n;

        cout << "La cantidad de fichas que se pueden ingresar es: " << count(m*n) << endl;

        return 0;
}
