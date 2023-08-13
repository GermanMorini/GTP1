#include<iostream>

using namespace std;

int count(int dim) {
        return dim/2;
}

// TODO: implementar combinatoria
int combinatory(int dim) {
        
}

int main() {
        int m, n;

        cout << "Ingrese las dimensiones del tablero: ";
        cin >> m;
        cin >> n;

        cout << "La cantidad de fichas que se pueden ingresar es: " << count(m*n) << endl;
        cout << "La cantidad de combinaciónes es: " << combinatory(m*n) << endl;

        return 0;
}