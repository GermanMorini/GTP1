#include<iostream>

using namespace std;

void print(int n[], int l) {
        for(int i = 0; i < l; i++) {
                cout << n[i] << " ";
        }

        cout << "\n";
}

int main() {
        int l;

        cout << "Ingrese el largo de los arreglos: ";
        cin >> l;

        int A[l], B[l], C[l];

        for(int i = 0; i < l*2; i++) {
                cout << "Ingrese el valor para el arreglo " << (char) (65*(i <= (l-1)) + 66*(i > (l-1))) << ": ";
                
                if(i <= l-1) {
                        cin >> A[i];
                        C[i%l] = A[i];
                } else {
                        cin >> B[i%l];
                        C[i%l] += B[i%l];
                }
        }

        cout << "\nArreglo A: \n"; print(A, l);
        cout << "Arreglo B: \n"; print(B, l);
        cout << "Arreglo C: \n"; print(C, l);

        return 0;
}
