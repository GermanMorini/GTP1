#include<stdio.h>
#include<stdlib.h>

using namespace std;

int get_score(int data[]);

int main(int argc, char const *argv[]) {
        int data[3];

        if (argc == 4) {
                data[0] = atoi(argv[1]);
                data[1] = atoi(argv[2]);
                data[2] = atoi(argv[3]);
        } else {
                printf("Ingrese la cantidad de partidos ganador, empatados y perdidos: ");
                scanf("%d %d %d", &data[0], &data[1], &data[2]);
        }

        printf("El puntaje del equipo es: %d\n", get_score(data));
        
        return 0;
}

int get_score(int data[]) {
        return data[0]*3 + data[1];
}
