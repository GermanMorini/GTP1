#include<stdio.h>

using namespace std;

float get_promedio(float var[]);

int main() {
        float notes[4];

        printf("Ingrese las 4 notas del alumno: ");
        scanf("%f %f %f %f", &notes[0], &notes[1], &notes[2], &notes[3]);

        printf("El promedio del alumno es: %.2f\n", get_promedio(notes));

        return 0;
}

float get_promedio(float var[]) {
        return (var[0] + var[1] + var[2] + var[3]) / 4;
}
