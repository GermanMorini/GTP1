#include<iostream>
#include<time.h>
#include<math.h>

using namespace std;

//------------- AYUDA PARA TESTEAR EL CÓDIGO ---------------------------

void random_matrix(float matrix[20][20], int FILAS, int COLUMNAS, int MIN, int MAX) {
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




// Poncha todas las filas por arriba y por debajo del pivot
// El índice "i" indica que fila no se ponchará (porque es la del pivot)
// El índice "j" sirve para saber por qué coeficiente se deberá multiplicar la fila del pivot
void ponchar(float matrix[20][20], int FIL, int COL, int pivot_i, int pivot_j) {
        for(int i = 0; i < FIL; i++) {
                if(i != pivot_i and matrix[i][pivot_j] != 0) {
                        sumo_multiplico(matrix, COL, i, pivot_i, -matrix[i][pivot_j]);
                }
        }
}


// Elimina los -0 y redondea el resultado a 3 cifras
// Sin esto algunos números no aparecen como 0 sino como números cercanos a 0 (algo tipo -1.14e-8)
// o como -0
void redondear(float matrix[20][20], int FIL, int COL) {
        for(int i = 0; i < FIL; i++) {
                for(int j = 0; j < COL; j++) {
                        matrix[i][j] = round(matrix[i][j] * 1000) / 1000;
                        if(matrix[i][j] == -0) matrix[i][j] = 0;
                }
        }
}

// Busca (por columnas) un número != 0, el cual será el pivot
// Cuando lo encuentra, lo vuelve 1 y poncha las demás filas
// Al final, ordena la matriz
void merf(float matrix[20][20], int FIL, int COL) {
        bool has_pivot;
        int pivot_indx = 0;

        for(int j = 0; j < COL; j++) {
                has_pivot = 0;

                for(int i = pivot_indx; i < FIL; i++) {
                        if(matrix[i][j] != 0.0 and !has_pivot) {
                                has_pivot = 1;

                                if(matrix[i][j] != 1) multiplico(matrix, COL, i, 1.0/matrix[i][j]);
                                
                                cambio_fila(matrix, COL, i, pivot_indx);

                                ponchar(matrix, FIL, COL, pivot_indx, j);
                                pivot_indx++;
                        }
                }
        }

        redondear(matrix, FIL, COL);
}

int main() {
        srand(time(NULL));

        // float matrix[20][20] = {
        //         {0,0,-3,-47},
        //         {-98,-196,-686,-882},
        //         {1,2,7,9}
        // };

        float matrix[20][20] = {
                {0,-3,-47, 3},
                {0,-196,0,-882},
                {0,2,0,9}
        };

        // 8 × 10
        // float matrix[20][20] = {
        //         {-18740,  84935 ,  -14824,  5365  ,  15665  , 59380  , 30079  , 4631   , -50076 , -46021},
        //         {-9097 ,  -70432,  37519 ,  90180 ,  30502  , 10576  , -10719 , -37276 , 76608  , 12702},
        //         {41885 ,  -38439,  55125 ,  12889 ,  -87157 , -43684 , 53783  , 89108  , -40458 , 31854},
        //         {-21713,  40803 ,  16789 ,  -20184,  62520  , 48807  , -60804 , -7401  , -46562 , -94528},
        //         {46578 ,  -39307,  -64960,  -99551,  -49127 , 65543  , -72623 , -43493 , -71733 , -96014},
        //         {-14439,  -13496,  81899 ,  -59313,  15745  , 94742  , -2997  , -30471 , 202    , -27103},
        //         {-98617,  78490 ,  30052 ,  -65476,  -41694 , -7428  , -317   , -86146 , 1524   , -30526},
        //         {35678 ,  64454 ,  30167 ,  70719 ,  64904  , -2607  , -47386 , 8633   , 53900  , 97233}
        // };

        // float matrix[20][20];
        int FIL = 3, COL = 4;

        // random_matrix(matrix, FIL, COL, -10, 10);
        print_matrix(matrix, FIL, COL);

        merf(matrix, FIL, COL);

        print_matrix(matrix, FIL, COL);

        return 0;
}
