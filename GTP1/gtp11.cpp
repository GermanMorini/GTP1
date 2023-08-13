#include<iostream>
#include<stdlib.h>
#include<cmath>

using namespace std;

bool isHE(int n) {
        if(n != 0) {
                return (n%10)%2 == 0 and isHE(floor(n/10));
        } else {
                return true;
        }
}

int main() {
        int n;

        cout << "Ingrese un número: ";
        cin >> n;

        if(isHE(n)) {
                cout << "El número es hyper-par" << endl;
        } else {
                cout << "El número NO es hyper-par" << endl;
        }

        return 0;
}