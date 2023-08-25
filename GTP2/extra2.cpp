#include<iostream>

using namespace std;

float media(int val[], int l) {
        float avg = 0;
        
        for(int i = 0; i < l; i++) {
                avg += val[i]*1.0/l;
        }

        return avg;
}

//TODO: terminar

float mediana(int val[], int l) {
        return -1;
}

float moda(int val[], int l) {
        return -1;
}

typedef float (*StcsFunc)(int*, int);
const StcsFunc functions[3] = {
        media,
        mediana,
        moda
};



int main() {
        int n;

        cout << "Ingrese la cantidad de mediciones: ";
        cin >> n;

        int mediciones[n];

        for(int i = n-1; i >= 0; i--) {
                cout << "Ingrese una medición (" << i+1 << " restantes): ";
                cin >> mediciones[i];
        }

        cout << "\n\nResultados: ";

        // cout << "\nMedia: " << media(mediciones, n);
        // cout << "\nMediana: " << mediana(mediciones, n);
        // cout << "\nmoda: " << Moda(mediciones, n);

        cout << "\nMedia: " << functions[0](mediciones, n);
        cout << "\nMediana: " << functions[1](mediciones, n);
        cout << "\nmoda: " << functions[2](mediciones, n);
        cout << "\n";

        return 0;
}
