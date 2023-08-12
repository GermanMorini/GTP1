#include<iostream>
#include<string.h>

using namespace std;

bool validate(int age) {
        return age < 18;
}

int main(int argc, char const *argv[]) {
        char name[20];
        int age;

        if (argc >= 3) {
                strcpy(name, argv[1]);
                age = atoi(argv[2]);
        } else {
                puts("Uso: ./gtp8 name age");
                exit(0);
        }

        if(validate(age)) {
                cout << "La persona " << name << " puede recibir el beneficio" << endl;
        } else {
                 cout << "La persona " << name << " NO puede recibir el beneficio" << endl;
        }

        return 0;
}
