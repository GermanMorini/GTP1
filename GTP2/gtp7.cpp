#include<iostream>
#include<cmath>
#define DIMENSION 3

using namespace std;

float norm(float v[]) {
        float sum = 0;

        for(int i = 0; i < DIMENSION; i++) {
                sum += v[i] * v[i];
        }

        return sqrt(sum);
}

float dot2(float v[], float u[], float a) {
        return norm(v) * norm(u) * cos(a);
}

float dot1(float v[], float u[]) {
        float sum = 0;

        for(int i = 0; i < DIMENSION; i++) {
                sum += v[i] * u[i];
        }

        return sum;
}

void prompt_values(float v[], char c) {
        cout << "Ingrese los valores para el vector '" << c << "' (ℝ^" << DIMENSION << ")\n";

        for(int i = 0; i < DIMENSION; i++) {
                cout << "Componente " << i+1 << ": ";
                cin >> v[i];
        }
}

int main() {
        float v[DIMENSION], u[DIMENSION];

        prompt_values(v, 'v');
        prompt_values(u, 'u');

        cout << "El producto punto es: " << dot1(v, u) << "\n";

        return 0;
}
