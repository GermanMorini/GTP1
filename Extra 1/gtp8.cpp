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

int main() {
        char name[20];
        int age;

        cout << "Ingese el nombre y la edad de la persona: " << endl;
        cin >> name;
        cin >> age;

        validate(age, name);

        return 0;
}
