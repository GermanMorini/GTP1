#include<iostream>

using namespace std;

void print_vect(int v[], int SIZE) {
        for (short i = 0; i < SIZE; i++) {
                cout << v[i] << " ";
        }
        cout << "\n\n";
}

void input(int v[], int SIZE) {
        for (short i = 0; i < SIZE; i++) {
                cout << "Ingrese el elemento " << i+1 << ": ";
                cin >> v[i];
        }
}

void parse(int v[], int SIZE) {
        int p_indx = 0, n_indx = 0, pos[100], neg[100];

        for (short i = 0; i < SIZE; i++) {
                if(v[i] > 0) {
                        pos[p_indx] = v[i];
                        p_indx++;
                }
                if(v[i] < 0) {
                        neg[n_indx] = v[i];
                        n_indx++;
                }
        }

        cout << "Los elem. positivos son: ";
        print_vect(pos, p_indx);
        
        cout << "Los elem. negativos son: ";
        print_vect(neg, n_indx);
}

int main() {
        int v[100];
        int SIZE;

        cout << "Ingrese el largo del arreglo: ";
        cin >> SIZE;

        input(v, SIZE);

        parse(v, SIZE);

        return 0;
}
