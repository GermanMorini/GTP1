#include<iostream>
#include<string.h>

using namespace std;

int main() {
        struct Fecha {
                int dia, mes, anio;
        };

        struct Datos {
                char nombre[20];
                Fecha nacimiento;
                char pais[20];
        };

        struct Atleta {
                char deporte[20];
                int medallas;
                Datos datos;
        };

        Atleta atl[100], ganador;
        int cantidad, indice = 0, mayor_n_medallas = -1;

        cout << "Ingrese la cantidad de atletas: ";
        cin >> cantidad;

        for (int i = 0; i < cantidad; i++) {
                cout << "------ ATLETA "<<i+1<<" ------"<< endl << endl;
                
                cout << "Ingrese el deporte: ";
                cin.ignore();
                cin.getline(atl[i].deporte, 20, '\n');

                cout << "Ingrese el número de medallas obtenidas: ";
                cin >> atl[i].medallas;
                
                if(mayor_n_medallas < atl[i].medallas) {
                        indice = i;
                        mayor_n_medallas = atl[i].medallas;
                }

                cout << endl;
                for (int j = 0; j < 10; j++) {
                        cout << "Ingrese el nombre del atleta: ";
                        cin.ignore();
                        cin.getline(atl[i].datos.nombre, 20, '\n');

                        cout << "Ingrese la fecha de nacimiento: ";
                        cin >> atl[i].datos.nacimiento.dia;
                        cin >> atl[i].datos.nacimiento.mes;
                        cin >> atl[i].datos.nacimiento.anio;

                        cout << "Ingrese el país de origen: ";
                        cin.ignore();
                        cin.getline(atl[i].datos.pais, 20, '\n');
                }
        }

        // for (int i = 0; i < cantidad; i++) {
        //         cout << "------ ATLETA "<<i+1<<" ------"<< endl << endl;
        //         cout << "Deporte: " << atl[i].deporte << endl;
        //         cout << "Medallas: " << atl[i].medallas << endl;
        //         cout << "Nombre: " << atl[i].datos.nombre << endl;
        //         cout << "Nacimiento dia: " << atl[i].datos.nacimiento.dia << endl;
        //         cout << "Nacimiento mes: " << atl[i].datos.nacimiento.mes << endl;
        //         cout << "Nacimiento año: " << atl[i].datos.nacimiento.anio << endl;
        //         cout << "Pais: " << atl[i].datos.pais << endl;
        // }

        cout << endl;

        cout << "El atleta con mayor n de medallas es: " << endl;
        cout << "Nombre: " << atl[indice].datos.nombre << endl;
        cout << "Nacimiento dia: " << atl[indice].datos.nacimiento.dia << endl;
        cout << "Nacimiento mes: " << atl[indice].datos.nacimiento.mes << endl;
        cout << "Nacimiento año: " << atl[indice].datos.nacimiento.anio << endl;
        cout << "Pais: " << atl[indice].datos.pais << endl;

        return 0;
}
