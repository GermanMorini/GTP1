#include<iostream>
#include<time.h>

using namespace std;

// Anula casillas al azar, seran las que el usuario podrá ingresará valores
//Las que queden como múltiplos de 10 no se podrán editar
void anular_casillas(int mat[][9]) {
        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        mat[i][j] = mat[i][j]*(rand()%2);
                }
        }
}

/* Imprime la matriz
        Cuando el valor es múltiplo de 10 se lo divide por 10
        Cuando es 0, se imprime un espacio

        Cada 3 índices, tanto de "i" como de "j" se imprime alguna barra "|" ó "---"
        esto para darle el formato de sudoku
*/
void imprimir_matriz(int mat[][9]) {
        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        if(mat[i][j]%10) {
                                cout << mat[i][j];
                        } else {
                                cout << mat[i][j]/10;
                        }

                        if((j+1)%3 == 0 and j != 8) {
                                cout << " | ";
                        } else {
                                cout << "  ";
                        }
                }

                if((i+1)%3 == 0 and i != 8) {
                        cout << "\n---------------------------\n";
                } else {
                        cout << "\n";
                }
        }
        cout << "\n";
}

/* Pide al usuario ingresar un valor y la ubicación en la matriz
        Valida que el valor esté entre [1, 9], y que la casilla en los índices indicados
        sea editable (para que sea editable, el valor contenido no debe ser múltiplo de 10)

        En caso de éxito retorna true, sino false
*/
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

// Copia la matriz resuelta en otra matriz, que será la que resolverá el jugador
void copiar_matriz(int copia[][9], int sudoku[][9]) {
        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        copia[i][j] = sudoku[i][j];
                }
        }
}

// Compara si las dos matrices son iguales, momento en que acabará la partida
bool partida_acabada(int mat[][9], int copia[][9]) {
        bool b = 1;

        for (int i = 0; i < 9; i++) {
                for (int j = 0; j < 9; j++) {
                        if(copia[i][j] >= 10) {
                                b *= (mat[i][j] == copia[i][j]);
                        } else {
                                b *= (mat[i][j] == copia[i][j]*10);
                        }
                }
        }
        
        return b;
}

int main() {
        srand(time(NULL));
        
        // Un sudoku ya resuelto, todos sus valores se multiplicaron por 10
        int SUDOKU1[9][9] = {
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

        // Se lleva la cuenta de las operaciónes para imprimir, como dato, al final
        int copia[9][9], contador_operaciones = 0;

        copiar_matriz(copia, SUDOKU1);

        anular_casillas(copia);

        while(!partida_acabada(SUDOKU1, copia)) {
                imprimir_matriz(copia);

                while(!ingresar_valor(copia));
                contador_operaciones++;
        }

        cout << endl << "El juego acabó!!... completaste el sudoku en " << contador_operaciones << " operaciones!" << endl;

        return 0;
}
