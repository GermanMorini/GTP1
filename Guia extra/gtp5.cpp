#include<stdio.h>
#define VAL = 1000

using namespace std;

int main(int argc, char const *argv[]) {
        float wh, s;

        puts("Ingrese la cantidad de horas trabajadas y la ganacia por hora: ");
        scanf("%f %f", &wh, &s);

        printf("La ganancia por hora es: %.2f\n", wh*s);

        return 0;
}
