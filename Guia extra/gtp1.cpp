#include<stdio.h>
#include<stdlib.h>

using namespace std;

float get_distance(float vel, float time);

int main(int argc, char const *argv[]) {
        float vel ,time;

        if(argc == 3 ) {
                // atof := Ascii TO Float
                vel = atof(argv[1]);
                time = atof(argv[2]);
        } else {
                printf("Ingrese los valores para la velocidad y tiempo: ");
                scanf("%f %f", &vel, &time);
        }
        
        printf("La distancia reccorida es %.2f\n", get_distance(vel, time));

        return 0;
}

float get_distance(float vel, float time) {
        return vel * time;
}
