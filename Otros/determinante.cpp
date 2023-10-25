#include<iostream>
#include<time.h>
#include<math.h>

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

void multiplico(float matrix[20][20], int ORDEN, int i, float K) {
        for(int m = 0; m < ORDEN; m++) {
                matrix[i][m] = K*matrix[i][m];
        }
}

void sumo_multiplico(float matrix[20][20], int ORDEN, int i1, int i2, float K, int pivot_i) {
        for(int m = pivot_i; m < ORDEN; m++) {
                matrix[i1][m] += K*matrix[i2][m];
        }
}

void cambio_fila(float matrix[20][20], int ORDEN, int i1, int i2) {
        float aux;

        for(int m = 0; m < ORDEN; m++) {
                aux = matrix[i1][m];
                matrix[i1][m] = matrix[i2][m];
                matrix[i2][m] = aux;
        }
}

//--------------------------------------------------------------------


// ------------ CALCULO DEL DETERMINANTE -----------------------------

/*
El determinante de una matriz triangular superior es igual al producto de los elem. de su diagonal principal
Si no se tiene una mat. trian. sup. se puede calcular con op. por filas, teniendo en cuenta que:
    • Al mult. una fila por un número, el resultado se debe multiplicar tambien
    • Al hacer un cambio de filas el resultado cambia de signo
Luego se divide el resultado por el producto de todos los escalares que aparecieron al hacer las operaciones
*/

void ponchar(float matrix[20][20], int ORDEN, int pivot_i, int pivot_j) {
        for(int m = pivot_i+1; m < ORDEN; m++) {
                if(matrix[m][pivot_j] != 0) {
                        sumo_multiplico(matrix, ORDEN, m, pivot_i, -matrix[m][pivot_j]/matrix[pivot_i][pivot_j], pivot_i);
                }
        }
}

// Elimina los -0 y redondea el resultado a 2 cifras
// Sin esto algunos números no aparecen como 0 sino como números cercanos a 0 (algo tipo -1.14e-8)
// o como -0
void redondear(float matrix[20][20], int ORDEN) {
        for(int i = 0; i < ORDEN; i++) {
                for(int j = 0; j < ORDEN; j++) {
                        matrix[i][j] = round(matrix[i][j] * 100) / 100;
                        if(matrix[i][j] == -0) matrix[i][j] = 0;
                }
        }
}

float determinante(float matrix[20][20], int ORDEN) {
        bool tiene_pivot;
        int p_index = 0;
        float acum = 1;

        // Forma una matriz triangular superior
        for(int j = 0; j < ORDEN; j++) {
                tiene_pivot = 0;

                for(int i = p_index; i < ORDEN; i++) {
                        if(matrix[i][j] != 0 and not tiene_pivot) {
                                tiene_pivot = 1;
                                cambio_fila(matrix, ORDEN, p_index, i);
                                ponchar(matrix, ORDEN, p_index, j);
                                // (p_index != i) quiere decir que hubo cambio de fila
                                acum *= pow((-1), p_index != i);
                                p_index++;
                        }
                }
        }

        // Calcula el producto de la diagonal principal
        for(int i = 0; i < ORDEN; i++) {
                acum *= matrix[i][i];
        }

        redondear(matrix, ORDEN);

        return acum;
}

//--------------------------------------------------------------------

int main() {
        srand(time(NULL));

        //float matrix[20][20] = {{1,2,3},{0,-3,4},{0,0,3}}, det;
        float matrix[20][20], det;
        int ORDEN = 5;

        random_matrix(matrix, ORDEN, -5, 5);
        print_matrix(matrix, ORDEN);

        det = determinante(matrix, ORDEN);
        print_matrix(matrix, ORDEN);

        cout << "El determinante es: " << det << "\n";

        return 0;
}
