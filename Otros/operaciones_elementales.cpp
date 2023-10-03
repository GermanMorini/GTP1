#include<iostream>
#include<time.h>

using namespace std;

// Los índices son: i (filas), j (columnas)

void random_matrix(float matrix[20][20], int SIZE, int MIN, int MAX) {
        for (short i = 0; i < SIZE; i++) {
                for (short j = 0; j < SIZE; j++) {
                        matrix[i][j] = MIN + rand()%(MAX-MIN);
                }
        }
}

void print_matrix(float matrix[20][20], int SIZE) {
        for (short i = 0; i < SIZE; i++) {
                for (short j = 0; j < SIZE; j++) {
                        cout << matrix[i][j] << "\t";
                }
                cout << "\n";
        }
        cout << "\n";
}

// Multiplicar una fila por un escalar
// i: la fila a modificar
// K: escalar por el que multiplicar
void type_1_op(float matrix[20][20], int SIZE, int i, float K) {
        for(int m = 0; m < SIZE; m++) {
                matrix[i][m] = K*matrix[i][m];
        }
}

// Multiplicar una fila por una escalar y sumarla a otra
// i1: la fila a objetivo 
// i2: la fila que se va a sumar
// K: escalar por el que multiplicar 
void type_2_op(float matrix[20][20], int SIZE, int i1, int i2, float K) {
        for(int m = 0; m < SIZE; m++) {
                matrix[i1][m] += K*matrix[i2][m];
        }
}

// Intercambiar filas
void type_3_op(float matrix[20][20], int SIZE, int i1, int i2) {
        float aux;

        for(int m = 0; m < SIZE; m++) {
                aux = matrix[i1][m];
                matrix[i1][m] = matrix[i2][m];
                matrix[i2][m] = aux;
        }
}

int main() {
        srand(time(NULL));

        float matrix[20][20];
        int SIZE = 4;

        random_matrix(matrix, SIZE, -5, 10);
        print_matrix(matrix, SIZE);

        print_matrix(matrix, SIZE);
        
        return 0;
}
