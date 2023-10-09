#include<iostream>
#include<time.h>

using namespace std;

//------------- AYUDA PARA TESTEAR EL CÓDIGO ---------------------------

void random_mat(float matrix[20][20], int MIN, int MAX) {
        for (short i = 0; i < 5; i++) {
                for (short j = 0; j < 5; j++) {
                        matrix[i][j] = MIN + rand()%(MAX-MIN+1);
                }
        }
}

void random_vec(int v[], int LARGO, int MIN, int MAX) {
        for (short i = 0; i < LARGO; i++) {
                v[i] = MIN + rand()%(MAX-MIN+1);
        }
}

void imp_mat(float matrix[20][20]) {
        for (auto i : matrix) {
                for (auto j : i) {
                        cout << j << "\t";
                }
                cout << "\n";
        }
        cout << "\n";
}

void imp_vect(int v[], int LARGO) {
        for (short i = 0; i < LARGO; i++) {
                cout << v[i] << " ";
        }
        cout << "\n\n";
}

//--------------------------------------------------------------------



int main(int argc, char const *argv[]) {
        srand(time(NULL));

        float matrix[20][20];

        random_mat(m, -10, 10);
        imp_mat(matrix);
        
        return 0;
}