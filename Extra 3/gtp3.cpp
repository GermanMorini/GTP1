#include<iostream>

using namespace std;

int gt(int n1, int n2) {
        return n1*(n1 >= n2) + n2*(n1 < n2);
}

int main(int argc, char const *argv[]) {
        int n1, n2;

        cout << "Ingrese el primer numero: ";
        cin >> n1;
        
        cout << "Ingrese el segundo numero: ";
        cin >> n2;

        cout << "El mayor de ellos es: " << gt(n1, n2) << endl;
        
        return 0;
}