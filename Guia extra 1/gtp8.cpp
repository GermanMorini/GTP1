#include<iostream>
#include<string.h>

using namespace std;

void validate(int age, char name[]) {
        if(age < 18) {
                cout << "La persona " << name << " puede recibir el beneficio" << endl;
        } else {
                 cout << "La persona " << name << " NO puede recibir el beneficio" << endl;
        }
}

int main(int argc, char const *argv[]) {
        char name[20];
        int age;

        if (argc >= 3) {
                strcpy(name, argv[1]);
                age = atoi(argv[2]);
        } else {
                cout << "Ingese el nombre y la edad de la persona: " << endl;
                cin >> name;
                cin >> age;
        }

        validate(age, name);

        return 0;
}
