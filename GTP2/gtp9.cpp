#include<iostream>

using namespace std;

int main() {
        const short COUNT = 14;
        short ppl[COUNT], i = COUNT, adults = 0, childs = 0, age;
        float avg = 0;

        cout << "Ingrese las edades de las personas a testear: \n\n";

        while(i > 0) {
                cout << "Edad de la persona " << 15-i << ": ";
                cin >> age;

                avg += age*1.0/COUNT;

                adults += (age >= 18);
                childs += (age < 18);

                i--;
        }

        cout << "\n\nDatos obtenidos: \n";
        cout << "\tAdultos\t|\tMenores\t|\tPromedio\n";
        cout << "--------------------------------------------------\n";
        cout << "\t" << adults << "\t|\t" << childs << "\t|\t" << avg << "\n";

        return 0;
}
