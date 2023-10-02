#include<iostream>
#include<stdlib.h>

using namespace std;

bool is_magic(int matrix[20][20], int SIZE) {
        int fila, columna, d_prin, d_sec;

        for(short i = 0; i < SIZE; i++) {
                fila = 0;
                columna = 0;
                d_prin = 0;
                d_sec = 0;

                for(short j = 0; j < SIZE; j++) {
                        fila += matrix[i][j]; // fila
                        columna += matrix[j][i]; // columna
                        d_prin += matrix[j][j]; // diagonal principal
                        d_sec += matrix[j][SIZE-j-1]; // diagonal sec.
                }

                // ¬(P ∧ Q ∧ R) = ¬P ∨ ¬Q ∨ ¬R
                if(fila != columna || columna != d_prin || d_prin != d_sec) {
                        return false;
                }
        }

        return true;
}

void input(int matrix[20][20], int SIZE) {
        for (short i = 0; i < SIZE; i++) {
                for (short j = 0; j < SIZE; j++) {
                        cout << "Ingrese el valor (" << i << "," << j << "): ";
                        cin >> matrix[i][j];
                }
        }
}

int main() {
        //int SIZE = 3, matrix[20][20] = {{3,6,9},{5,9,7},{8,7,1}};
        //int SIZE = 3, matrix[20][20] = {{1,1,1},{1,1,1},{1,1,1}};
        //int SIZE = 6, matrix[20][20] = {{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1}};
        int matrix[20][20], SIZE;
                
        cout << "Ingrese el orden de la matriz: ";
        cin >> SIZE;

        input(matrix, SIZE);

        cout << (is_magic(matrix, SIZE) ? "Es mágica\n" : "NO es mágica!\n");

        return 0;
}
