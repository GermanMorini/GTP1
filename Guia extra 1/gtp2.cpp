#include<iostream>

using namespace std;

float get_promedio(float var[]) {
        return (var[0] + var[1] + var[2] + var[3]) / 4;
}

int main(int argc, char const *argv[]) {
        float notes[4];

        if(argc == 5) {
                notes[0] = atoi(argv[1]);
                notes[1] = atoi(argv[2]);
                notes[2] = atoi(argv[3]);
                notes[3] = atoi(argv[4]);
        } else {
                cout << "Ingrese las 4 notas del alumno: ";
                cin >> notes[0];
                cin >> notes[1];
                cin >> notes[2];
                cin >> notes[3];
        }

        cout << "El promedio del alumno es: " << get_promedio(notes) << endl;

        return 0;
}
