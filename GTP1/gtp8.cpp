#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

void reverse(int n) {
        if(n > 0) {
                cout << n%10;
                reverse(floor(n/10));
        }
}

int main() {
        int n;

        cout << "Ingrese un número entero positivo: " << endl;
        cin >> n;

        if (n < 0) {
                cout << "Se debe ingresar un número positivo!";
                exit(2);
        }

        reverse(n);

        return 0;
}
