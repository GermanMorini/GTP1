#include<iostream>

using namespace std;

struct Equipos {
        char nombre[20];
        int goles_realizados;
        int goles_recibidos;
};

int main() {
        Equipos eq[8], aux[8];
        int CANTIDAD = 0;

        for (int i = 0; i < 8; i++) {
                cout << "Ingrese el nombre del equipo: ";
                cin >> eq[i].nombre;

                cout << "Ingrese goles hechos: ";
                cin >> eq[i].goles_realizados;
                
                cout << "Ingrese goles recibidos: ";
                cin >> eq[i].goles_recibidos;

                if(eq[i].goles_realizados > eq[i].goles_recibidos) {
                        aux[CANTIDAD] = eq[i];
                        CANTIDAD++;
                }
        }

        for (int i = 0; i < CANTIDAD; i++) {
                cout << "------ DATOS EQUIPO "<< i+1 <<" ------" << endl << endl;
                cout << "Nombre: " << aux[i].nombre << endl;
                cout << "Goles realizados: " << aux[i].goles_realizados << endl;
                cout << "Goles recibidos: " << aux[i].goles_recibidos << endl;
        }

        return 0;
}
