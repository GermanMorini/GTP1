#include<iostream>

using namespace std;

void grade(short notes[], short l, short &aprv) {
        short ap = 0, rep = 0, top = -1;

        for(short i = 0; i < l; i++) {
                ap += (notes[i] >= 4);
                rep += (notes[i] < 4);
                top = top*(top >= notes[i]) + notes[i]*(top < notes[i]);
        }

        cout << "\n\nResultados: \n";
        cout << "Cantidad de aprobados: " << ap << " (" << (100.0/l)*ap << "%)\n";
        cout << "Cantidad de reprobados: " << rep << " (" << (100.0/l)*rep << "%)\n";
        cout << "La nota mayor: " << top << "\n";
}

bool validate(int grade) {
        return grade >= 1 and grade <= 10;
}

void prompt_notes(short notes[], short l) {
        for(short i = 0; i < l; i++) {
                cout << "Ingrese una nota para el alumno " << i+1 << ": ";
                cin >> notes[i];

                i -= (!validate(notes[i]));
        }
}

// void prompt_notes(short notes[], short l) {
//         if(l > 0) {
//                 cout << "Ingrese una nota (" << l << " restantes): ";
//                 cin >> notes[l-1];
//                 prompt_notes(notes, l-1);
//         }
// }

int main() {
        short aprv = 0, repv = 0, N;

        cout << "Ingrese la cantidad de alumnos: ";
        cin >> N;

        short notes[N];
        prompt_notes(notes, N);

        grade(notes, N, aprv);

        return 0;
}