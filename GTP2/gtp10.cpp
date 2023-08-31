#include<iostream>

using namespace std;

void invert(int n[], int s) {
        int tmp;

        for(int i = 0; i < s/2; i++) {
                tmp = n[i];
                n[i] = n[s-1-i];
                n[s-1-i] = tmp;
        }        
}

void print(int n[], int size) {
        for(int i = 0; i < size; i++) {
                cout << n[i] << " ";
        }
        cout << "\n";
}

int main() {
        int SIZE;
        
        cout << "Ingrese el largo de arreglo: ";
        cin >> SIZE;

        int n[SIZE];

        for(int i = 0; i < SIZE; i++) {
                cout << "Ingrese el valor " << i+1 << ": ";
                cin >> n[i];
        }

        invert(n, SIZE);

        cout << "\nLos valores ingresados son: \n";
        print(n, SIZE);

        return 0;
}
