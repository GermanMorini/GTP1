#include<iostream>
#include<cmath>

using namespace std;

void t_type(float l1, float l2, float l3) {
        int c = 0;

        c += l1 == l2;
        c += l1 == l3;
        c += l2 == l3;

        switch(c) {
                case 0:
                        puts("Es un triángulo escaleno!");
                        break;
                case 1:
                        puts("Es un triángulo isósceles!");
                        break;
                default:
                        puts("Es un triángulo equilátero!");
        }
}

int main() {
        float l1, l2, l3;

        cout << "Ingrese los tres lados del triángulo: " << endl;
        cin >> l1;
        cin >> l2;
        cin >> l3;

        t_type(l1, l2, l3);
        
        // TEST
        // t_type(l1, l3, l2);
        // t_type(l2, l1, l3);
        // t_type(l2, l3, l1);
        // t_type(l3, l2, l1);
        // t_type(l3, l1, l2);

        return 0;
}