#include<iostream>

using namespace std;

// Para mayor compatibilidad con C se definenen las estructuras de esta forma
typedef struct {
        char name[20];
        int age;
} Person;

// Se usa const porque si se pasan por valor se genera una copia de las mismas
// lo que no es eficiente
Person get_older(const Person &p1, const Person &p2) {
        if(p1.age >= p2.age) {
                return p1;
        } else {
                return p2;
        }
}

int main() {
        Person p1, p2;
        
        cout << "Ingrese los datos de la persona 1: ";
        cin >> p1.name;
        cin >> p1.age;
        
        cout << "Ingrese los datos de la persona 2: ";
        cin >> p2.name;
        cin >> p2.age;

        cout << "La madre es: " << get_older(p1, p2).name << endl;

	return 0;
}
