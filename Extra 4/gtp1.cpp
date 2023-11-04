#include<iostream>
#include<time.h>

using namespace std;

void random_vect(int v[], int MIN, int MAX) {
        srand(time(NULL));

        for (short i = 0; i < 10; i++) {
                v[i] = MIN + rand()%(MAX-MIN);
        }
}

void print_vect(int v[]) {
        for (short i = 0; i < 10; i++) {
                cout << v[i] << " ";
        }
        cout << "\n\n";
}

void det(int v[]) {
        short count = 0;

        for (short i = 0; i < 10; i++) {
                count += (v[i] < 5);
        }

        cout << "La cantidad de elem. menores a 5 es: " << count << "\n";
}

int main() {
        int v[10];

        random_vect(v, 0, 10);
        print_vect(v);

        det(v);

        return 0;
}
