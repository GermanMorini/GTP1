#include<iostream>

using namespace std;

int main() {
        int matrix[12][5], montly_sales[12] = {0,0,0,0,0,0,0,0,0,0,0,0}, branch_sales[5] = {0,0,0,0,0}, total = 0;

        for(int j = 0; j < 5; j++) {
                cout << "\n------ SUCURSAL " << j+1 << "------\n";

                for(int i = 0; i < 12; i++) {
                        cout << "Mes " << i+1 << ": ";
                        cin >> matrix[i][j];

                        montly_sales[i] += matrix[i][j];
                        branch_sales[j] += matrix[i][j];
                        total += matrix[i][j];
                }
        }

        
        cout << "El total recaudado es: " << total << "\n";

        for(int i = 0; i < 12; i++) {
                cout << "El total recaudado en el mes " << i+1 << " es: " << montly_sales[i] << "\n";
        }

        for(int i = 0; i < 5; i++) {
                cout << "El total recaudado por la sucursal " << i+1 << " es: " << branch_sales[i] << "\n";
        }

        return 0;
}
