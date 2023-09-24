#include<iostream>
#include<stdlib.h>

using namespace std;

bool is_magic(int matrix[20][20], int SIZE) {
        int sum1, sum2, sum3, sum4;

        for(short i = 0; i < SIZE; i++) {
                sum1 = 0;
                sum2 = 0;
                sum3 = 0;
                sum4 = 0;

                for(short j = 0; j < SIZE; j++) {
                        sum1 += matrix[i][j];
                        sum2 += matrix[j][i];
                        sum3 += matrix[j][j];
                        sum4 += matrix[SIZE-j-1][SIZE-j-1];
                }

                // ¬(P ∧ Q ∧ R) = ¬P ∨ ¬Q ∨ ¬R
                if(sum1 != sum2 || sum2 != sum3 || sum3 != sum4) {
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