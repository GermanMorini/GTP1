#include<iostream>
#include<time.h>

using namespace std;

// ------------------ TESTING ----------------------------

void random_matrix(int matrix[20][20], int FILAS, int COLUMNAS, int MIN, int MAX) {
        for (short i = 0; i < FILAS; i++) {
                for (short j = 0; j < COLUMNAS; j++) {
                        matrix[i][j] = MIN + rand()%(MAX+1-MIN);
                }
        }
}

void print_matrix(int matrix[20][20], int FILAS, int COLUMNAS) {
        for (short i = 0; i < FILAS; i++) {
                for (short j = 0; j < COLUMNAS; j++) {
                        cout << matrix[i][j] << "\t";
                }
                cout << "\n";
        }
        cout << "\n";
}

// -------------------------------------------------------






void copiar_matriz(int a[20][20], int b[20][20], int FIL, int COL) {
        for(int i = 0; i < FIL; i++) {
                for(int j = 0; j < COL; j++) {
                        a[i][j] = b[i][j];
                }
        }
}

void transponer(int matrix[20][20], int &FIL, int &COL) {
        int aux[20][20], aux_;

        for(int i = 0; i < FIL; i++) {
                for(int j = 0; j < COL; j++) {
                        aux[j][i] = matrix[i][j];
                }
        }

        // Cambio la cantidad de las filas por las columnas
        aux_ = FIL;
        FIL = COL;
        COL = aux_;

        // Copio en la matriz original la auxiliar
        copiar_matriz(matrix, aux, FIL, COL);
}

int main() {
        srand(time(NULL));

        int matrix[20][20], FIL = 3, COL = 5;

        random_matrix(matrix, FIL, COL, 0, 10);
        print_matrix(matrix, FIL, COL);

        transponer(matrix, FIL, COL);
        print_matrix(matrix, FIL, COL);
        
        transponer(matrix, FIL, COL);
        print_matrix(matrix, FIL, COL);
        
        return 0;
}
