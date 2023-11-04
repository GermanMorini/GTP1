#include<iostream>

using namespace std;

int divide(int a, int b) {
        int count = 0;

        while((count+1) * a <= b) {
              count++;  
        }

        return count;
}

int main() {
        int n1, n2;

        cout << "Ingrese un número: ";
        cin >> n1;
        
        cout << "Ingrese otro: ";
        cin >> n2;

        cout << "El número " << n1 << " está contenido " << divide(n1, n2) << " veces dentro de " << n2 << endl;

        return 0;
}
