#include<iostream>

// Define valores en tiempo de compilacion
#define VAL 1000

using namespace std;

int main() {
        float wh, s;

        puts("Ingrese la cantidad de horas trabajadas y la ganacia por hora: ");
        cin >> wh;
        cin >> s;

        puts("La ganancia por hora es: ");
        cout << wh*s << endl;

        return 0;
}
