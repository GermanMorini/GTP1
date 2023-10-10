#include<iostream>
#include<time.h>

using namespace std;

void random_mat1(int mat[][9]) {
        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        if(rand()%2) {
                                mat[i][j] = 0;
                        }
                }
        }
}

void imp_mat1(int mat[][9]) {
        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        if(mat[i][j]) {
                                if(mat[i][j] >= 10) {
                                        if((j+1)%3 == 0 and j != 8) {
                                                cout << mat[i][j]/10 << " |";
                                        } else {
                                                cout << mat[i][j]/10 << " ";
                                        }
                                } else {
                                        if((j+1)%3 == 0 and j != 8) {
                                                cout << mat[i][j] << " |";
                                        } else {
                                                cout << mat[i][j] << " ";
                                        }
                                }
                        } else {
                                if((j+1)%3 == 0 and j != 8) {
                                        cout << "  |";
                                } else {
                                        cout << "  ";
                                }
                        }
                }

                if((i+1)%3 == 0 and i != 8) {
                        cout << "\n-------------------\n";
                } else {
                        cout << "\n";
                }
        }
        cout << "\n";
}


bool ingresar_valor(int mat[][9]) {
        int i,j, val;

        cout << "Ingrese los índices del valor a ingresar: " << endl;
        cin >> i;
        cin >> j;
        cout << endl;

        i--; j--;

        cout << "Ingrese el valor deseado: ";
        cin >> val;
        cout << endl;

        if(mat[i][j] < 10 and val > 0 and val < 10 and i >= 0 and i < 10 and j >= 0 and j < 10) {
                mat[i][j] = val;
                cout << "Valor ingresado correctamente!" << endl;
                return true;
        } else {
                cout << "No se pudo cambiar ese valor!" << endl;
                return false;
        }
}

void copiar_matriz(int mat1[][9], int mat2[][9]) {
        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        mat1[i][j] = mat2[i][j];
                }
        }
}

bool partida_acabada(int mat[][9], int respuesta[][9]) {
        bool b = 1;

        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        if(respuesta[i][j] >= 10) {
                                b *= (mat[i][j]/10 == respuesta[i][j]/10);
                        } else {
                                b *= (mat[i][j]/10 == respuesta[i][j]);
                        }
                }
        }
        
        return b;
}

int main() {
        srand(time(NULL));
        
        int mat1[9][9] = {
                {10,30,60,40,90,20,50,80,70},
                {50,90,40,70,60,80,10,30,20},
                {70,20,80,30,10,50,90,60,40},
                {80,60,10,50,70,40,20,90,30},
                {20,70,50,90,30,10,60,40,80},
                {30,40,90,20,80,60,70,10,50},
                {60,50,70,10,40,30,80,20,90},
                {40,80,20,60,50,90,30,70,10},
                {90,10,30,80,20,70,40,50,60} 
        };

        int respuesta[9][9], contador_operaciónes = 0;

        copiar_matriz(respuesta, mat1);

        random_mat1(respuesta);

        while(!partida_acabada(mat1, respuesta)) {
                imp_mat1(respuesta);

                while(!ingresar_valor(respuesta));
                contador_operaciones++;
        }

        cout << endl << "El juego acabó!!... completaste el sudoku en " << contador_operaciones << " operaciones!" << endl;

        return 0;
}
