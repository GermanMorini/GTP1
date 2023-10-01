#include<iostream>

using namespace std;

void p_vect(int v[], int SIZE) {
        for (short i = 0; i < SIZE; i++) {
                cout << v[i] << " ";
        }
        cout << "\n\n";
}

int del_zeros(int v[], int aux[]) {
        int size = 0;

        for (short i = 0; i < 14; i++) {
                if(v[i] != 0) {
                        aux[size] = v[i];
                        size++;
                }
        }

        return size;
}

int main() {
        int v[] = {0,1,2,0,3,0,2,0,4,6,0,5,0,9}, aux[14], size;

        size = del_zeros(v, aux);

        p_vect(aux, size);

        return 0;
}
