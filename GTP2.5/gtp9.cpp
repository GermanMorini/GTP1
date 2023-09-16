#include<iostream>

using namespace std;

void input(int matrix[][3], int SIZE) {
        // filas
        for(int i = 0; i < SIZE; i++) {
                // columnas
                for(int j = 0; j < SIZE; j++) {
                        cout << "Ingrese el valor de la pos. " << i << "," << j << ": \n";
                        cin >> matrix[i][j];
                }
        }
}

int sum(int matrix[][3], int SIZE) {
        int rtn = 0;

        for(int i = 0; i < SIZE; i++) {
                for(int j = 1+i; j < SIZE; j++) {
                        cout << "Valor " << i << "," << j << ": " << matrix[i][j] << "\n";
                }
        }

        return rtn;
}

int main() {
        // int matrix[30][30], SIZE, sum;

        // cout << "Ingrese las dimensiones de la matriz: ";
        // cin >> SIZE;

        //int SIZE = 3, matrix[][3] = {{3,6,9},{5,9,7},{8,7,1}}, sum = 0;
        int SIZE = 5, matrix[][5] = {{30,26,51,19,12},{57,19,4,10,17},{24,73,1,17,31},{15,97,31,8,11},{3,12,40,13,2}}, sum = 0;

        // input(matrix, SIZE);

        // filas
        // for(int i = 0; i < SIZE; i++) {
        //         // columnas
        //         for(int j = 0; j < SIZE; j++) {
        //                 cout << "Ingrese el valor de la pos. " << i << "," << j << ": \n";
        //                 cin >> matrix[i][j];
        //         }
        // }

        for(int i = 0; i < SIZE; i++) {
                for(int j = 1+i; j < SIZE; j++) {
                        sum += matrix[i][j];
                        sum -= matrix[SIZE-i-1][SIZE-j-1];
                }
        }

        //cout << "Resultado: " << sum(matrix, SIZE) << "\n";
        cout << "Resultado: " << sum << "\n";

        return 0;
}
