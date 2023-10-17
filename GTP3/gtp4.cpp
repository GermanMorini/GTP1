#include<iostream>

using namespace std;

struct Datos {
        char nombre[20];
        char nacimiento[20];
        char pais[20];
};

struct Atleta {
        char deporte[20];
        int medallas;
        Datos datos;
};

int main() {
        Atleta atl[100], ganador;
        int cantidad, indice = 0, mayor_n_medallas = -1;

        cout << "Ingrese la cantidad de atletas: ";
        cin >> cantidad;

        for (int i = 0; i < cantidad; i++) {
                cout << "------ ATLETA "<<i+1<<" ------"<< endl << endl;
                
                cout << "Ingrese el deporte: ";
                cin >> atl[i].deporte;

                cout << "Ingrese el número de medallas obtenidas: ";
                cin >> atl[i].medallas;
                
                if(mayor_n_medallas < atl[i].medallas) {
                        indice = i;
                        mayor_n_medallas = atl[i].medallas;
                }

                cout << endl;
                for (int j = 0; j < 10; j++) {
                        cout << "Ingrese el nombre del atleta: ";
                        cin >> atl[i].datos.nombre;

                        cout << "Ingrese el país de origen: ";
                        cin >> atl[i].datos.pais;

                        cout << "Ingrese la fecha de nacimiento: ";
                        cin >> atl[i].datos.nacimiento;
                }
        }

        // for (int i = 0; i < cantidad; i++) {
        //         cout << "------ ATLETA "<<i+1<<" ------"<< endl << endl;
        //         cout << "Deporte: " << atl[i].deporte << endl;
        //         cout << "Medallas: " << atl[i].medallas << endl;
        //         cout << "Nombre: " << atl[i].datos.nombre << endl;
        //         cout << "Nacimiento: " << atl[i].datos.nacimiento << endl;
        //         cout << "Pais: " << atl[i].datos.pais << endl;
        // }

        cout << endl;

        cout << "El atleta con mayor n de medallas es: " << endl;
        cout << "Nombre: " << atl[indice].datos.nombre << endl;
        cout << "Nacimiento: " << atl[indice].datos.nacimiento << endl;
        cout << "Pais: " << atl[indice].datos.pais << endl;

        return 0;
}
