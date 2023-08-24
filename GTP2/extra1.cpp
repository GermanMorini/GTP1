#include<iostream>

using namespace std;

void prompt_notes(short notes[], short l) {
        for(short i = 0; i < l; i++) {
                cout << "Ingrese una nota para el alumno " << i+1 << ": ";
                cin >> notes[i];
        }
}

void grade(short notes[], short l, short &aprv) {
        short ap = 0, rep = 0, top = -1;
        float ap_avg = 0, rep_avg = 0;

        for(short i = 0; i < l; i++) {
                ap += (notes[i] >= 4);
                rep += (notes[i] < 4);
                top = top*(top >= notes[i]) + notes[i]*(top < notes[i]);
        }

        ap_avg = ap*1.0/l;
        rep_avg = rep*1.0/l;

        cout << "\n\nResultados: \n";
        cout << "Cantidad de aprobados: " << ap << " (" << 100*ap_avg << "%)\n";
        cout << "Cantidad de reprobados: " << rep << " (" << 100*rep_avg << "%)\n";
        cout << "La nota mayor: " << top << "\n";
}

int main() {
        short aprv = 0, repv = 0, N;

        cout << "Ingrese la cantidad de alumnos: ";
        cin >> N;

        short notes[N];
        prompt_notes(notes, N);

        grade(notes, N, aprv);

        return 0;
}