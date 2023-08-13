#include<iostream>

using namespace std;

void query_data(int &n, int &l) {
        number:
        cout << "Ingrese la cantidad de contenedores: ";
        cin >> n;
        if(n <= 0) goto number;

        limit:
        cout << "Ingrese el límite de peso: ";
        cin >> l;
        if(l <= 0) goto limit;
}

int main() {
        int acum = 0, count = 0, w, n, limit;

        query_data(n, limit);

        for(int i = 0; i < n; i++) {
                cout << "Ingrese el peso del contenedor: ";
                cin >> w;

                if(w > limit) count++;
                acum += w;
        }

        cout << "El promedio de peso de los contenedores es: " << acum*1.0/n << endl;
        cout << "La cantidad de contenedores que excedieron el peso es: " << count << endl;

        return 0;
}