#include<iostream>

using namespace std;

int main() {
        //int SIZE = 3, matrix[][3] = {{3,6,9},{5,9,7},{8,7,1}};
        //int SIZE = 3, matrix[][3] = {{1,1,1},{1,1,1},{1,1,1}};
        //int SIZE = 6, matrix[][6] = {{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1},{1,1,1,1,1,1}};

        int matrix[20][20], SIZE;
        int sum1, sum2, sum3;
        bool b = true;
        
        cout << "Ingrese el orden de la matriz: ";
        cin >> SIZE;

        // TODO: hacer el método para el input

        for(int i = 0; i < SIZE; i++) {
                sum1 = 0;
                sum2 = 0;
                sum3 = 0;

                for(int j = 0; j < SIZE; j++) {
                        sum1 += matrix[i][j];
                        sum2 += matrix[j][i];
                        sum3 += matrix[j][j];
                }

                b = (sum1 == sum2 && sum2 == sum3);

                if(!b) {
                        cout << "No es magica!\n";
                        return 0;
                }
        }

        cout << "Es magica!\n";

        return 0;
}