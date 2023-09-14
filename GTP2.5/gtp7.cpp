#include<iostream>

using namespace std;

void input(string num[], int pass[], bool state[], int SIZE) {
        for(int i = 0; i < SIZE; i++) {
                cout << "\nDatos del vuelo " << i+1 << ": \n";

                cout << "Número de vuelo: ";
                cin >> num[i];

                cout << "Cantidad de pasajeros: ";
                cin >> pass[i];

                cout << "Estado del vuelo: ";
                cin >> state[i];

                cout << "\n--------------------------\n";
        }
}

int main() {
        int N, pass_count = 0, fly_count = 0;
        float porc = 0;

        string num[100];
        int pass[100];
        bool state[100];

        cout << "Ingrese la cantidad de vuelos del día: ";
        cin >> N;

        input(num, pass, state, N);

        for(int i = 0; i < N; i++) {
                fly_count += (!state[i]);
                porc += (!state[i])*100.0/N;
                pass_count += pass[i];
        }

        cout << "La cantidad de vuelos retrasados son: " << fly_count;
        cout << "\nEl porcentaje de vuelos atrasados con respecto al total es de: " << porc;
        cout << "\nLa cantidad de pasajeros totales es: " << pass_count << "\n";

        return 0;
}
