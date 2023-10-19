#include<iostream>
#include<string.h>

using namespace std;

void imprimir_vector(int v[], int LARGO) {
        for (short i = 0; i < LARGO; i++) {
                cout << v[i] << " ";
        }
        cout << "\n\n";
}

int main() {
        struct Participante {
                char nombre[20];
                int puntajes[10];
        };

        Participante par[100], ganador;
        int cantidad, puntajes[100], indice = 0;

        cout << "Ingrese la cantidad de participantes: ";
        cin >> cantidad;

        for (int i = 0; i < cantidad; i++) {
                cout << "------ PARTICIPANTE "<<i+1<<" ------"<< endl << endl;
                
                cout << "Ingrese el nombre del participante: ";
                cin.ignore();
                cin.getline(par[i].nombre, 20, '\n');

                cout << endl;
                puntajes[i] = 0;
                for (int j = 0; j < 10; j++) {
                        cout << "       Ingrese los puntos del desafío " << j+1 << ":";
                        cin >> par[i].puntajes[j];

                        puntajes[i] += par[i].puntajes[j];
                }
        }

        for (int i = 0; i < cantidad; i++) {
                cout << "------ PARTICIPANTE "<<i+1<<" ------"<< endl << endl;
                cout << "Descripción: " << par[i].nombre << endl;
                imprimir_vector(par[i].puntajes, 10);
        }

        for (int i = 0; i < cantidad; i++) {
                if(i != 0 and puntajes[indice] < puntajes[i]) {
                        indice = i;
                }
        }

        imprimir_vector(puntajes, cantidad);
        cout << "El ganador es: " << par[indice].nombre << endl;
        
        return 0;
}
