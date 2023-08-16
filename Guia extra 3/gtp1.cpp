#include<iostream>
#include<cmath>

using namespace std;

int divide(int a) {
        int _int = 0;

        while((_int+1)*(_int+1)*(_int+1) <= a) {
                _int++;
        }

        return _int;
}

float cb_rt(int n) {
        int _int = divide(n);
        float _dec = divide(n-(_int*_int*_int))/10.0;

        cout << _int;
        cout << _dec;

        return _int + _dec;
}

int main() {
        int n;

        cout << "Ingrese un número: ";
        cin >> n;

        cout << "Su raíz cubica es: " << cb_rt(n) << endl;

        return 0;
}