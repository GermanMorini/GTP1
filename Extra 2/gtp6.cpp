#include<iostream>

using namespace std;

void print_table(int n, int l) {
        for (int i = 1; i <= l; i++) {
                cout << n << " * " << i << " = " << n*i << endl;
        }
}

int main() {
        int n, l;

        cout << "Ingrese un número: ";
        cin >> n;

        cout << "Ingrese hasta que valor será la tabla: ";
        cin >> l;

        print_table(n, l);

        return 0;
}