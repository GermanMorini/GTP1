#include<iostream>

using namespace std;

int main() {
        int matrix[20][6], sum = 0;
        float avg_piso[20], avg_total = 0;

        for(int i = 0; i < 20; i++) {
                cout << "\n------(PISO " << i+1 << ")------\n";

                avg_piso[i] = 0;

                for(int j = 0; j < 6; j++) {
                        cout << "Ingrese la cantidad de habitantes del depto. " << i+1 << "," << j+1 << ": ";
                        cin >> matrix[i][j];

                        avg_piso[i] += matrix[i][j]*1.0/6;
                        sum += matrix[i][j];
                }

                avg_total += avg_piso[i]*1.0/20;
        }

        cout << "\nEl total de habitantes es: " << sum << "\n";

        for(int i = 0; i < 20; i++) {
                cout << "\nLa cantidad de habitantes promedio del piso" << i+1 << " es: " << avg_piso[i];
        }

        cout << "\nEl promedio de habitantes por departamento es: " << avg_total;

        return 0;
}
