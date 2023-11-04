#include<iostream>
#include<cmath>

using namespace std;

float sum(float n1, float n2) {
        return n1 + n2;
}

float sus(float n1, float n2) {
        return n1 - n2;
}

float mult(float n1, float n2) {
        return n1 * n2;
}

float div(float n1, float n2) {
        return n1 / n2;
}

float _cos(float n1, float n2) {
        return cos(n1*n2);
}

float _sin(float n1, float n2) {
        return sin(n1*n2);
}

float _tan(float n1, float n2) {
        return tan(n1*n2);
}

typedef float (*Operation)(float, float);
Operation parse_op(char op) {
        switch(op) {
                case '+':
                        return sum;
                case '-':
                        return sus;
                case '*':
                        return mult;
                case '/':
                        return div;
                case 'C':
                        return _cos;
                case 'S':
                        return _sin;
                case 'T':
                        return _tan;
                default:
                        return NULL;
        }
}


int main() {
        float n1, n2;
        char op;
        Operation func;

        cout << "Ingrese el 1er valor: ";
        cin >> n1;
        
        cout << "Ingrese el 2do valor: ";
        cin >> n2;
        
        do {
                cout << "\nIngrese la operación a realizar: ";
                cin >> op;

                func = parse_op(op);
        } while(func == NULL);
        
        cout << "El resultado de la operación es: " << func(n1, n2) << endl;

        return 0;
}