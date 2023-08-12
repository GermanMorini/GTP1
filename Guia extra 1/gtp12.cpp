#include<iostream>

using namespace std;

bool validate(int n) {
        return n != 0;
}

void determ(int n) {
        n%2 == 0 ? puts("El número es par!") : puts("El número es impar!");
}

int main() {
        int n;

        cout << "Ingrese un número: ";
        cin >> n;

        if(!validate(n)) {
                puts("Debe ser un número distinto de 0!");
                exit(2);
        }

        determ(n);

        return 0;
}