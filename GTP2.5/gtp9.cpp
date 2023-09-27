#include<iostream>

using namespace std;

void input(int matrix[30][30], int SIZE) {
        for(int i = 0; i < SIZE; i++) {
                for(int j = 0; j < SIZE; j++) {
                        cout << "Ingrese el valor de la pos. (" << i << "," << j << "): ";
                        cin >> matrix[i][j];
                }
        }
}

int sum(int matrix[30][30], int SIZE) {
        int rtn = 0;

        for(int i = 0; i < SIZE; i++) {
                for(int j = 1+i; j < SIZE; j++) {
                        rtn += matrix[i][j];
                        rtn -= matrix[SIZE-1-i][SIZE-1-j];
                }
        }

        return rtn;
}

int main() {
        int matrix[30][30], SIZE;

        cout << "Ingrese las dimensiones de la matriz: ";
        cin >> SIZE;

        input(matrix, SIZE);

        cout << "Resultado: " << sum(matrix, SIZE) << "\n";

        return 0;
}
