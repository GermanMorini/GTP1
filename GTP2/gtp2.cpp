#include<iostream>

using namespace std;

// void fill(int n[], int b, int l) {
//         for(int i = 0; i < l; i++) {
//                 n[i] = b*(i+1);
//         }
// }

void fill(int n[], int b, int l) {
        if(l > 0) {
                n[l-1] = b*(l);
                fill(n, b, l-1);
        }
}

void print(int n[], int l) {
        for(int i = 0; i < l; i++) {
                cout << n[i] << " ";
        }

        cout << "\n";
}

int main() {
        int l, b;

        cout << "Ingrese el tamaño del arreglo: ";
        cin >> l;

        cout << "Ingrese la base: ";
        cin >> b;

        int numbers[l];

        fill(numbers, b, l);

        print(numbers, l);

        return 0;
}
