#include<iostream>
#include<string.h>

using namespace std;

int get_age_by_name(string name[], int age[], int SIZE) {
        for(int i = 0; i < SIZE; i++) {
                if(name[i] == "Maria") return age[i];
        }

        return -1;
}

void input(string name[], int age[], int SIZE) {
        for(int i = 0; i < SIZE; i++) {
                cout << "Ingrese el nombre de la persona " << i+1 << ": ";
                cin >> name[i];

                cout << "Ingrese su edad: ";
                cin >> age[i];
        }
}

int main() {
        string name[100];
        int SIZE, age[100], a;

        cout << "Ingrese la cantidad de personas a consultar: ";
        cin >> SIZE;

        input(name, age, SIZE);

        a = get_age_by_name(name, age, SIZE);

        if(a != -1) {
                cout << "Maria tiene " << a << " años!";
        } else {
                cout << "No se encontró a ninguna persona llamada Maria!";
        }

        return 0;
}
