#include<iostream>

using namespace std;

float calculate(int amount, float price, float disc) {
        return price * amount * (100-disc)/100;
}

int main(int argc, char const *argv[]) {
        float p, d;
        int a;

        cout << "Ingrese la cantidad a comprar: ";
        cin >> a;
        
        cout << "Ingrese el precio unitario: ";
        cin >> p;
        
        cout << "Ingrese el porc. de descuento: ";
        cin >> d;
        
        cout << "La cantidad a pagar es: $ " << calculate(a, p, d) << endl;

        return 0;
}