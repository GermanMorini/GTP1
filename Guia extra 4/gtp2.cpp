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

float avgerage(int v[]) {
        float a = 0;

        for (short i = 0; i < 10; i++) {
                a += v[i]/10;
        }

        return a;
}

void replace(int v[], float avg) {
        for (short i = 0; i < 10; i++) {
                if(v[i] < avg) v[i] = -1;
                //v[i] = v[i]*(v[i] >= avg) + (-1)*(v[i] < avg);
        }
}

int main() {
        int v[10];
        float avg;

        random_vect(v, 0, 100);
        print_vect(v);
        avg = avgerage(v);

        cout << "Promedio: " << avg << "\n";

        replace(v, avg);
        print_vect(v);

        return 0;
}
