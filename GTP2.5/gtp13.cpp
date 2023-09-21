#include<iostream>

using namespace std;

int calculate(int matrix[20][20], int m, int n, int i, int j) {
        int total = 0;
        
        for(int k = i-1; k <= i+1; k++) {
                if(k >= 0 and k < m) {
                        for(int l = j-1; l <= j+1; l++) {
                                if(l >= 0 and l < n and not(k == i and l == j)) {
                                        total += matrix[k][l];
                                }
                        }
                }
        }

        return total;
}

void input(int matrix[20][20], int m, int n) {
        cout << "Ingrese los valores de la matriz: \n\n";

        for (int i = 0; i < m; i++)
        {
                for (int  j = 0; j < n; j++)
                {
                        cin >> matrix[i][j];
                }
                cout << "\n";
        }
        
}

int main() {
        // int matrix[20][20] = {
        //         {45, 12, 88, 34, 67, 9, 56, 23, 78, 41},
        //         {19, 63, 30, 75, 52, 7, 91, 28, 46, 84},
        //         {10, 68, 27, 51, 3, 80, 59, 94, 42, 76},
        //         {65, 22, 17, 37, 89, 2, 98, 54, 31, 70},
        //         {8, 47, 55, 14, 71, 26, 61, 95, 38, 83},
        //         {64, 29, 77, 15, 43, 60, 86, 5, 92, 20},
        //         {72, 33, 50, 4, 79, 18, 25, 69, 96, 11},
        //         {62, 85, 13, 58, 21, 87, 39, 6, 73, 32},
        //         {24, 66, 1, 44, 97, 35, 53, 81, 16, 74},
        //         {48, 36, 82, 57, 40, 90, 25, 12, 49, 68}
        // };
        // int m = 10, n = 10, i, j, sum;
        int matrix[20][20];
        int m, n, i, j, sum;

        cout << "Ingrese las dimensiónes de la matríz: \n";
        cin >> m;
        cin >> n;

        input(matrix, m, n);

        cout << "Ingrese la posición que desea: \n";
        cin >> i;
        cin >> j;

        //sum = calculate(matrix, 10, 10, 9, 9);
        sum = calculate(matrix, m, n, i, j);

        cout << "La suma de los elementos adyacentes a la posición (" << i << "," << j << ") es: " << sum << "\n";

        return 0;
}
