#include<iostream>

using namespace std;

void analze(float l, int &val, int &inv) {
        val += l >= 9 and l <= 11;
        inv += l < 9 or l > 11;
}

int main() {
        float l;
        int val = 0, inv = 0, c, n;

        cout << "Ingrese la cantidad de piezas a procesar: ";
        cin >> c;
        n = c;

        while(c > 0) {
                cout << "Ingrese el largo de la pieza (" << c << " restantes): ";
                cin >> l;

                analze(l, val, inv);

                c--;
        }

        puts("");

        cout << "Cantidad de piezas que cumplen las medidas: " << val << endl;
        cout << "Porcentaje: " << val*100.0/n << "%" << endl;

        puts("");
        cout << "Cantidad de piezas que NO cumplen las medidas: " << inv << endl;
        cout << "Porcentaje: " << inv*100.0/n << "%" << endl;

        return 0;
}
