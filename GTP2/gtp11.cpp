#include<iostream>
#include<cmath>

using namespace std;

float eval(float coef[], short g, short x) {
        if(g >= 0) { return coef[g] * pow(x, g) + eval(coef, g-1, x);}
        
        return 0;
}

void prompt_values(float coef[], short g) {
        for(short i = g; i >= 0; i--) {
                cout << "Ingrese el coeficiente " << i+1 << ": ";
                cin >> coef[i];
        }
}

int main() {
        short g, x;

        cout << "Ingrese el grado del polinomio: ";
        cin >> g;

        float coef[g+1];
        
        prompt_values(coef, g);

        cout << "Ingrese el valor de X: ";
        cin >> x;

        cout << "\nResultado: " << eval(coef, g, x) << "\n";

        return 0;
}
