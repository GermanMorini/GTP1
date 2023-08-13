#include<iostream>
#include<stdlib.h>

using namespace std;

char sign(int n) {
        if(n > 0) {
                return 'P';
        } else if (n == 0) {
                return 'C';
        } else {
                return 'N';
        }
}

int main() {
        int n;

        cout << "Ingrese el valor a evaluar: ";
        cin >> n;

        cout << "El valor es: " << sign(n) << endl;

        return 0;
}
