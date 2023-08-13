#include<iostream>

using namespace std;

int calculate(int dim) {
        return dim/2;
}

int main(int argc, char const *argv[]) {
        int m, n;

        if(argc == 3) {
                m = atoi(argv[1]);
                n = atoi(argv[2]);
        } else {
                cout << "Ingrese las diemnsiones del tablero: ";
                cin >> m;
                cin >> n;
        }

        cout << "La cantidaad de fichas que se pueden ingresar es: " << calculate(m*n) << endl;

        return 0;
}