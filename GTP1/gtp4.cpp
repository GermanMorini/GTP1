#include<iostream>

using namespace std;

int fact(int n) {
        if(n > 1) {
                return n*fact(n-1);
        } else {
                return 1;
        }
}

int main(int argc, char *argv[]) {
        int n;

        cout << "Ingrese el valor a calcular: ";
        cin >> n;

        cout << "El factorial es: " << fact(n) << endl;

	return 0;
}
