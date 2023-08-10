#include<stdio.h>
#include<stdlib.h>

using namespace std;

bool validate(int age);
void print_usage();

int main(int argc, char *argv[]) {
        char name[20];
        int age;

        if (argc >= 3) {
                char *name = argv[1];
                age = atoi(argv[2]);
        } else {
                print_usage();
                exit(1);
        }

        printf("La persona %c %s ingresar!", name, validate ? "puede" : "NO puede");

        return 0;
}

bool validate(int age) {
        return age < 18;
}

void print_usage() {
        puts("Uso: ./gtp8 name age");
}