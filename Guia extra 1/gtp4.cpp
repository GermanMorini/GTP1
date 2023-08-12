#include<iostream>

using namespace std;

int get_score(int data[]) {
        return data[0]*3 + data[1];
}

int main(int argc, char const *argv[]) {
        int data[3];

        if (argc == 4) {
                data[0] = atoi(argv[1]);
                data[1] = atoi(argv[2]);
                data[2] = atoi(argv[3]);
        } else {
                cout << "Ingrese la cantidad de partidos ganados, empatados y perdidos: ";
                cin >> data[0];
                cin >> data[1];
                cin >> data[2];
        }

        cout << "El puntaje del equipo es: " << get_score(data) << endl;
        
        return 0;
}
