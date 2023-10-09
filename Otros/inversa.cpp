#include<iostream>
#include<time.h>

using namespace std;

//------------- AYUDA PARA TESTEAR EL CÓDIGO ---------------------------

void random_matrix(float matrix[20][20], int ORDEN, int MIN, int MAX) {
        for (short i = 0; i < ORDEN; i++) {
                for (short j = 0; j < ORDEN; j++) {
                        matrix[i][j] = MIN + rand()%(MAX-MIN);
                }
        }
}

void print_matrix(float matrix[20][20], int ORDEN) {
        for (short i = 0; i < ORDEN; i++) {
                for (short j = 0; j < ORDEN; j++) {
                        cout << matrix[i][j] << "\t";
                }
                cout << "\n";
        }
        cout << "\n";
}

//--------------------------------------------------------------------




//--------- OPERACIONES ELEMENTALES POR FILAS -----------------------

// Multiplicar una fila por un escalar
// i: la fila a modificar
// K: escalar por el que multiplicar
void multiplico(float matrix[20][20], int COL, int i, float K) {
        for(int m = 0; m < COL; m++) {
                matrix[i][m] = K*matrix[i][m];
        }
}

// Multiplicar una fila por una escalar y sumarla a otra
// i1: la fila a objetivo 
// i2: la fila que se va a sumar
// K: escalar por el que multiplicar 
void sumo_multiplico(float matrix[20][20], int COL, int i1, int i2, float K) {
        for(int m = 0; m < COL; m++) {
                matrix[i1][m] += K*matrix[i2][m];
        }
}

// Intercambiar filas
void cambio_fila(float matrix[20][20], int COL, int i1, int i2) {
        float aux;

        for(int m = 0; m < COL; m++) {
                aux = matrix[i1][m];
                matrix[i1][m] = matrix[i2][m];
                matrix[i2][m] = aux;
        }
}

//--------------------------------------------------------------------




// Retorna una m. identidad de un cierto orden
void identidad(float m[20][20], int ORDEN) {
        for(int i = 0; i < ORDEN; i++) {
                for(int j = 0; j < ORDEN; j++) {
                        m[i][j] = (i==j);
                }
        }
}

// Amplica una matriz "m1" en "m2" y almacena el resultado en "res"
void ampliar(float m1[20][20], float m2[20][20], float res[20][20], int FIL, int COL1, int COL2) {
        for(int i = 0; i < FIL; i++) {
                for(int j = 0; j < COL1 + COL2; j++) {
                        if(j < COL2) {
                                res[i][j] = m1[i][j];
                        } else {
                                res[i][j] = m2[i][j-COL1];
                        }
                }
        }
}

// Calcula la inversa se una matriz "m"
// TODO: terminar de hacer
void inversa(float m[20][20], int ORDEN) {
        float aux[20][20];
        identidad(aux, ORDEN);
        print_matrix(aux, ORDEN, ORDEN);
        
        ampliar(m, aux, aux, ORDEN, ORDEN, ORDEN);
        print_matrix(aux, ORDEN, 2*ORDEN);

        merf(aux, ORDEN, 2*ORDEN);
        print_matrix(aux, ORDEN, 2*ORDEN);
}

int main() {
        srand(time(NULL));

        float mat[20][20];
        int O = 3

        random_matrix(mat, O, -10, 10);
        print_matrix(mat, O);

        inversa(mat, O);

        print_matrix(mat, O);

        return 0;
}
