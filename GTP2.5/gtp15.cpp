#include<iostream>

using namespace std;

void input(int matrix[][30], int SIZE) {
        for(int i = 0; i < SIZE; i++) {
                for (int j = 0; j < SIZE; j++) {
                        cout << "Ingrese el elemento " << i+1 << ": ";
                        cin >> matrix[i][j];
                }
        }
}

bool add(int matrix[][30], int result[], int SIZE) {
        int res, acum = 0;

        for (int i = 0; i < SIZE; i++) {
                res = 0;

                for (int j = 0; j < SIZE; j++) {
                        res += matrix[i][j];
                }

                result[i] = res;
                acum += res;
        }

        return !(acum%2);
}

void out(int vec[], int SIZE) {
        for (int i = 0; i < SIZE; i++) {
                cout << vec[i] << " ";
        }

        cout << "\n";
}

void sort(int vect[], int SIZE, bool is_even) {
        bool b = 0;
        int tmp;

        while(b != 1) {
                b = 1;

                for(int i = 0; i < SIZE - 1; i++) {
                        if((!is_even)*(vect[i] > vect[i+1]) or (is_even)*(vect[i] < vect[i+1])) {
                                b = 0;
                                tmp = vect[i];
                                vect[i] = vect[i+1];
                                vect[i+1] = tmp;
                        }
                }
        }
}

int main() {
        // int matrix[30][30] = {
        //         {3,6,5},
        //         {5,9,4},
        //         {8,7,1}
        // };
        // int matrix[30][30] = {
        //         {30, 26, 51,19},
        //         {57, 19, 4 ,10},
        //         {24, 73, 1 ,17},
        //         {15, 97, 31,8}
        // };

        int matrix[30][30];
        int sum[30], SIZE;
        bool is_even;

        cout << "Ingrese el orden de la matriz: ";
        cin >> SIZE;

        input(matrix, SIZE);

        is_even = add(matrix, sum, SIZE);
        out(sum, SIZE);
        cout << (is_even ? "Es par\n" : "No es par\n");
        
        sort(sum, SIZE, is_even);
        out(sum, SIZE);

        return 0;
}
