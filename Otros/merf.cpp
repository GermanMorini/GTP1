#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;

//------------- AYUDA PARA TESTEAR EL CÓDIGO ---------------------------

void random_matrix(float matrix[20][20], int FILAS, int COLUMNAS, int MIN, int MAX) {
        srand(time(NULL));

        for (short i = 0; i < FILAS; i++) {
                for (short j = 0; j < COLUMNAS; j++) {
                        matrix[i][j] = MIN + rand()%(MAX-MIN);
                }
        }
}

void print_matrix(float matrix[20][20], int FILAS, int COLUMNAS) {
        for (short i = 0; i < FILAS; i++) {
                for (short j = 0; j < COLUMNAS; j++) {
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
                matrix[i][m] = K*1.0*matrix[i][m];
        }
}

// Multiplicar una fila por una escalar y sumarla a otra
// i1: la fila a objetivo 
// i2: la fila que se va a sumar
// K: escalar por el que multiplicar 
void sumo_multiplico(float matrix[20][20], int COL, int i1, int i2, float K) {
        for(int m = 0; m < COL; m++) {
                matrix[i1][m] += K*1.0*matrix[i2][m];
                // Redondeo el número, porque aveces falla y retorna números
                // o muy grandes o muy chiquitos
                matrix[i1][m] = round(matrix[i1][m] * 100)/100;
        }
}

// Intercambiar filas
void intercambio(float matrix[20][20], int COL, int i1, int i2) {
        float aux;

        for(int m = 0; m < COL; m++) {
                aux = matrix[i1][m];
                matrix[i1][m] = matrix[i2][m];
                matrix[i2][m] = aux;
        }
}

//--------------------------------------------------------------------




// Poncha todas las filas por arriba y por debajo del pivot
// El índice "i" indica que fila no se ponchará (porque es la del pivot)
// El índice "j" sirve para saber por qué coeficiente se deberá multiplicar la fila del pivot
void ponchar(float matrix[20][20], int FIL, int COL, int pivot_i, int pivot_j) {
        for(int i = 0; i < FIL; i++) {
                if(i != pivot_i) {
                        sumo_multiplico(matrix, COL, i, pivot_i, -matrix[i][pivot_j]*1.0);
                }
        }
}

// Ordena la matriz y redondea el resultado
void ordenar(float matrix[20][20], int FIL, int COL) {
        int index = 0;

        for(int j = 0; j < COL; j++) {
                for(int i = 0; i < FIL; i++) {
                        if(matrix[i][j] != 0 and index < FIL) {
                                intercambio(matrix, COL, index, i);
                                index++;
                        }
                }
        }
}

// Busca (por filas) un número != 0, el cual será el pivot
// Cuando lo encuentra, lo vuelve 1 y poncha las demás filas
// Al final, ordena la matriz
void merf(float matrix[20][20], int FIL, int COL) {
        bool has_pivot;

        for(int i = 0; i < FIL; i++) {
                has_pivot = 0;

                for(int j = 0; j < COL; j++) {
                        if(matrix[i][j] != 0.0 and !has_pivot) {
                                multiplico(matrix, COL, i, 1.0/matrix[i][j]);
                                has_pivot = 1;
                                ponchar(matrix, FIL, COL, i, j);
                        }
                }
        }

        ordenar(matrix, FIL, COL);
}


int main() {
        float matrix[20][20];
        int FIL = 3, COL = 5;

        random_matrix(matrix, FIL, COL, -10, 10);
        print_matrix(matrix, FIL, COL);

        merf(matrix, FIL, COL);

        print_matrix(matrix, FIL, COL);

        return 0;
}
