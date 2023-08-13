#include<iostream>

using namespace std;

int sum(int a, int b) {
        return a+b;
}

int main() {
        int a, b;

        cout << "Ingrese dos números: ";
        cin >> a;
        cin >> b;

        cout << "Su suma es: " << sum(abs(a), abs(b)) << endl;
        
        return 0;
}