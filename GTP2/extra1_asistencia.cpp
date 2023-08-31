#include<iostream>
#include<string.h>

using namespace std;

void grade(string names[], int notes[], int l) {
        int ap = 0, rep = 0, top = -1000000, bottom = 1000000, top_inx = 0, btm_inx = 0;
        float avg = 0;

        for(int i = 0; i < l; i++) {
                ap += (notes[i] >= 4);
                rep += (notes[i] < 4);

                avg += notes[i]*1.0/l;

                if(notes[i] > top) {
                        top = notes[i];
                        top_inx = i;
                }

                if(notes[i] < bottom) {
                        bottom = notes[i];
                        btm_inx = i;
                }
        }

        cout << "\n\nResultados: \n";
        cout << "\nCantidad de aprobados: " << ap;
        cout << "\nCantidad de reprobados: " << rep;
        cout << "\nPromedio: " << avg;
        cout << "\nAlumno con mayor calificación: " << names[top_inx];
        cout << "\nAlumno con menor calificación: " << names[btm_inx];
        cout << "\n";
}

bool validate(int grade) {
        return grade >= 1 and grade <= 10;
}

void prompt_data(string names[], int notes[], int l) {
        for(int i = 0; i < l; i++) {
                cout << "Ingrese el nombre del alumno " << i+1 << ": ";
                cin >> names[i];

                cout << "Ingrese su nota: ";
                cin >> notes[i];

                i -= (!validate(notes[i]));
        }
}

int main() {
        int N;

        cout << "Ingrese la cantidad de alumnos: ";
        cin >> N;

        int notes[N];
        string names[N];

        prompt_data(names, notes, N);
        grade(names, notes, N);

        return 0;
}