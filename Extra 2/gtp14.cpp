#include<iostream>

using namespace std;

// TODO: no entendí la consigna

typedef struct {
        int age, drink, food;
} Person;

int main() {
        int n;

        cout << "Ingrese la cantidad de encuestados: ";
        cin >> n;
        Person p[n];

        for(int i = 0; i < n; i++) {
                cout << "Encuestado (" << i+1 << "):\nIngrese la edad: ";
                cin >> p[i].age;
                cout << "Ingrese la comida preferida: ";
                cin >> p[i].food;
        }

        return 0;
}