#include<iostream>

using namespace std;

float avg(int age[]) {
        float avg = 0;

        for(int i = 0; i < 10; i++) {
                avg += age[i]/10.0;
        }

        return avg;
}

int main() {
        int age[10];

        for(int i = 0; i < 10; i++) {
                cout << "Ingrese la edad de la persona " << i+1 << ": ";
                cin >> age[i];
        }

        cout << "El promedio de edades es: " << avg(age) << endl;

        return 0;
}
