#include<iostream>

using namespace std;

// float get_promedio(float var[]) {
//         return (var[0] + var[1] + var[2] + var[3]) / 4;
// }

// int main() {
//         float notes[4];

//         cout << "Ingrese las 4 notas del alumno: ";
//         cin >> notes[0];
//         cin >> notes[1];
//         cin >> notes[2];
//         cin >> notes[3];

//         cout << "El promedio del alumno es: " << get_promedio(notes) << endl;

//         return 0;
// }

int main() {
        float avg = 0, tmp;
        int n = 4;

        while(n > 0) {
                cout << "Ingrese las 4 notas del alumno (" << n << " restantes): ";
                cin >> tmp;
                avg += tmp/4.0;
                n--;
        }

        cout << "El promedio del alumno es: " << avg << endl;

        return 0;
}
