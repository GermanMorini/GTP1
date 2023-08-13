#include<iostream>

using namespace std;

int sum(int a, int b) {
        return a+b;
}

int main() {
        int a, b;

        cout << "Ingrese dos valores a y b: ";
        cin >> a;
        cin >> b;

        cout << a << " + " << b << " = " << sum(a,b) << endl;
        
        return 0;
}

