#include<iostream>
#include<stdlib.h>

using namespace std;

int sum(int a, int b) {
        return a+b;
}

int main(int argc, char *argv[]) {
        if (argc >= 3) {
                cout << atoi(argv[1]) << " + " << atoi(argv[2]) << " = " << sum(atoi(argv[1]), atoi(argv[2]));
        } else {
                int a, b;

                cout << "Ingrese dos valores a y b: ";
                cin >> a;
                cin >> b;

                cout << a << " + " << b << " = " << sum(a,b) << endl;
        }
        
        return 0;
}

