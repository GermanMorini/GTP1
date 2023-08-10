#include<stdio.h>
#include<stdlib.h>
#include<math.h>

using namespace std;

float get_sper(float side[]);
float get_area(float side[]);

int main(int argc, char const *argv[]) {
        float data[3];

        if (argc >= 4) {
                data[0] = atof(argv[1]);
                data[1] = atof(argv[2]);
                data[2] = atof(argv[3]);
        } else {
                printf("Ingrese los lados del triángulo: ");
                scanf("%f %f %f", &data[0], &data[1], &data[2]);
        }

        printf("El area del triángulo es: %.2f\n", get_area(data));

        return 0;
}

float get_sper(float side[]) {
        return (side[0] + side[1] + side[2]) / 2;
}

float get_area(float side[]) {
        float S = get_sper(side);
        return sqrt(S*(S-side[0])*(S-side[1])*(S-side[2]));
}
