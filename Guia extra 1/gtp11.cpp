#include<iostream>

using namespace std;

void validate(int n) {
        if(abs(n) >= 100) {
                puts("Debe ser un número entre -100 y 100!");
                exit(2);
        }
}

int get_dec(int n) {
        return abs(n/10);
}

int get_un(int n) {
        return abs(n%10);
}

int main() {
        int n, dec, un; 

        cout << "Ingrese un número de 2 cifras máximo: ";
        cin >> n;

        validate(n);

        dec = get_dec(n);
        un = get_un(n);

        cout << "Decenas: " << dec << endl << "Unidades: " << un << endl;

        return 0;
}