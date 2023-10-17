#include<iostream>

using namespace std;

//--------------------------------------------------------------------
#include<time.h>
#include<string.h>
#include<iostream>

const string base_de_datos[100] = {"Forrest", "Mahmud", "Rosella", "Risa", "Katee", "Bonnibelle", "Germana", "Maximilian", "Booth", "Joly", "Luciana", "Adolph", "Freemon", "Siegfried", "Harper", "Nikolas", "Marris", "Torrance", "Viola", "Shandy", "Craggy", "Bethany", "Jewell", "Saxe", "Eldredge", "Elsa", "Gweneth", "Gerrie", "Bat", "Randall", "Trumaine", "Ed", "Stacie", "Roanna", "Rozalin", "Lexie", "Hebert", "Elinore", "Bear", "Mellisa", "Darcee", "Ari", "Carleen", "Van", "Fifine", "Minny", "Elmo", "Norina", "Adi", "Pepita", "Eloisa", "Josee", "Julita", "Gilbert", "Anatollo", "Harman", "Bill", "Waylan", "Brigham", "Kelila", "Auroora", "Mano", "Fayette", "Clo", "Rora", "Almeta", "Elwira", "Hugibert", "Jake", "Olimpia", "Pete", "Mikaela", "Ollie", "Phillipe", "Loralee", "Aggi", "Sandi", "Chelsy", "Laird", "Giselbert", "Clarissa", "Marylinda", "Leesa", "Perry", "Roxanna", "Fidelia", "Leticia", "Jenna", "Josefina", "Alli", "Robinette", "Janessa", "Adolphe", "Freddie", "Helene", "Culver", "Sylvia", "Ardith", "Rafaela", "Yetty"};

void nombre_aleatorio(char nombre[]) {
        int random_index = rand()%100;
        // 'strcpy' copia un arreglo de caracteres en otro
        // ´string.c_str()´ convierte un dato de tipo 'string' en un arrgelo de 'char's
        strcpy(nombre, base_de_datos[random_index].c_str());
}

void matriz_aleatoria(float matrix[][20], int FILAS, int COLUMNAS, int MIN, int MAX) {
        for (short i = 0; i < FILAS; i++) {
                for (short j = 0; j < COLUMNAS; j++) {
                        matrix[i][j] = MIN + rand()%(MAX-MIN+1);
                }
        }
}

void vector_aleatorio(int v[], int LARGO, int MIN, int MAX) {
        for (short i = 0; i < LARGO; i++) {
                v[i] = MIN + rand()%(MAX-MIN+1);
        }
}

void imprimir_matriz(float matrix[][20], int FILAS, int COLUMNAS) {
        for (short i = 0; i < FILAS; i++) {
                for (short j = 0; j < COLUMNAS; j++) {
                        cout << matrix[i][j] << "\t";
                }
                cout << "\n";
        }
        cout << "\n";
}

void imprimir_vector(int v[], int LARGO) {
        for (short i = 0; i < LARGO; i++) {
                cout << v[i] << " ";
        }
        cout << "\n\n";
}

//--------------------------------------------------------------------

struct Datos {
        char nombre[20];
        // fecha nacimiento, otra estructura?
        char p_origen[20];
};

struct Atleta {
        char deporte[20];
        int medallas;
        Datos datos;
};

int main() {
        srand(time(NULL));

        Atleta atl[100], ganador;
        int cantidad, indice = 0;

        cout << "Ingrese la cantidad de atletas: ";
        cin >> cantidad;

        for (int i = 0; i < cantidad; i++) {
                cout << "------ ATLETA "<<i+1<<" ------"<< endl << endl;
                

                cout << endl;
                for (int j = 0; j < 10; j++) {
                        cout << "Ingrese el nombre del atleta: ";
                        cin >> atl[i].datos.nombre;
                        cout << "Ingrese el país de origen: ";
                        cin >> atl[i].datos.nombre;
                        // cout << "Ingrese el nombre del atleta: ";
                        // cin >> atl[i].datos.nombre;

                        

                        puntajes[i] += par[i].puntajes[j];
                }
        }

        for (int i = 0; i < cantidad; i++) {
                cout << "------ ATLETA "<<i+1<<" ------"<< endl << endl;
                cout << "Descripción: " << par[i].nombre << endl;
                imprimir_vector(par[i].puntajes, 10);
        }

        return 0;
}
