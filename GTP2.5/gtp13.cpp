#include<iostream>

using namespace std;

int calculate(int matrix[20][20], int FIL, int COL, int X, int Y) {
        int total = 0;
        
        for(int i = X-1; i <= X+1; i++) {
                if(i >= 0 and i < FIL) {
                        for(int j = Y-1; j <= Y+1; j++) {
                                if(j >= 0 and j < COL and not(i == X and j == Y)) {
                                        total += matrix[i][j];
                                }
                        }
                }
        }

        return total;
}

// TODO: No se puede usar continue :(
// int calculate(int matrix[20][20], int FIL, int COL, int X, int Y) {
//         int total = 0;
        
//         for(int i = X-1; i <= X+1; i++) {
//                 if(i < 0 or i >= FIL) continue;

//                 for(int j = Y-1; j <= Y+1; j++) {
//                         if(j < 0 or j >= COL or (i == X and j == Y)) continue;
//                         total += matrix[i][j];
//                 }
//         }

//         return total;
// }

void input(int matrix[20][20], int FIL, int COL) {
        cout << "Ingrese los valores de la matriz: \n\n";

        for (int i = 0; i < FIL; i++) {
                for (int  j = 0; j < COL; j++) {
                        cin >> matrix[i][j];
                }
                cout << "\n";
        }       
}

int main() {
        int matrix[20][20] = {
                {45, 12, 88, 34, 67, 9, 56, 23, 78, 41},
                {19, 63, 30, 75, 52, 7, 91, 28, 46, 84},
                {10, 68, 27, 51, 3, 80, 59, 94, 42, 76},
                {65, 22, 17, 37, 89, 2, 98, 54, 31, 70},
                {8, 47, 55, 14, 71, 26, 61, 95, 38, 83},
                {64, 29, 77, 15, 43, 60, 86, 5, 92, 20},
                {72, 33, 50, 4, 79, 18, 25, 69, 96, 11},
                {62, 85, 13, 58, 21, 87, 39, 6, 73, 32},
                {24, 66, 1, 44, 97, 35, 53, 81, 16, 74},
                {48, 36, 82, 57, 40, 90, 25, 12, 49, 68}
        };
        int FIL = 10, COL = 10, X, Y;
        // int matrix[20][20];
        // int FIL, COL, X, Y;

        // cout << "Ingrese las dimensiónes de la matríz: \n";
        // cin >> FIL;
        // cin >> COL;

        //input(matrix, FIL, COL);

        cout << "Ingrese la posición que desea: \n";
        cin >> X;
        cin >> Y;

        cout << "La suma de los elementos adyacentes a la posición (" << X << "," << Y << ") es: " << calculate(matrix, FIL, COL, X, Y) << "\n";

        return 0;
}
