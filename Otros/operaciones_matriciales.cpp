#include<iostream>
#include<time.h>

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




void suma_matricial(float m1[20][20], float m2[20][20], float res[20][20], int FIL, int COL) {
        for(int i = 0; i < FIL; i++) {
                for(int j = 0; j < COL; j++) {
                        res[i][j] = m1[i][j] + m2[i][j];
                }
        }
}

void resta_matricial(float m1[20][20], float m2[20][20], float res[20][20], int FIL, int COL) {
        for(int i = 0; i < FIL; i++) {
                for(int j = 0; j < COL; j++) {
                        res[i][j] = m1[i][j] - m2[i][j];
                }
        }
}

void mult_por_esc(float m[20][20], float K, int FIL, int COL) {
        for(int i = 0; i < FIL; i++) {
                for(int j = 0; j < COL; j++) {
                        m[i][j] = K*m[i][j];
                }
        }
}

// (M × N) * (N × Q) = (M × Q)
void multiplicacion(float mn[20][20], float nq[20][20], float res[20][20], int M, int N, int Q) {
        for(int m = 0; m < M; m++) {
                for(int q = 0; q < Q; q++) {
                        res[m][q] = 0;

                        for(int n = 0; n < N; n++) {
                                res[m][q] += mn[m][n] * nq[n][q];
                        }               
                }
        }
}

int main() {
        srand(time(NULL));

        float m1[20][20], m2[20][20], res[20][20];
        // int FIL = 3, COL = 4;
        // int M = 4, N = 3, Q = 5;
        int M = 4, N = 3, Q = 3;

        // random_matrix(m1, FIL, COL, 0, 10);
        // random_matrix(m2, FIL, COL, 0, 2);
        random_matrix(m1, M, N, 0, 10);
        random_matrix(m2, N, Q, 0, 5);

        // print_matrix(m1, FIL, COL);
        // print_matrix(m2, FIL, COL);
        print_matrix(m1, M, N);
        print_matrix(m2, N, Q);

        // suma_matricial(m1, m2, res, FIL, COL);
        multiplicacion(m1, m2, res, M, N, Q);

        print_matrix(res, M, Q);

        // mult_por_esc(m1, -1.0/2, FIL, COL);
        // mult_por_esc(m2, -1.0/2, FIL, COL);
        // mult_por_esc(res, -1.0/2, FIL, COL);
        
        // print_matrix(m1, FIL, COL);
        // print_matrix(m2, FIL, COL);
        // print_matrix(res, FIL, COL);

        return 0;
}
