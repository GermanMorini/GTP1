#include<iostream>
#include<cctype>

using namespace std;

int parse_cat(char c) {
        // Retorna el valor en ASCII del caracter
        return (int)toupper(c) - 65;
}

int parse_ant(int ant) {
        int a = 0;
        
        a += ant >= 10;
        a += ant >= 20;

        return a;
}

float calc_fee(char c, int ant) {
        float fees_matrix[3][3] = {{1, 1.2, 1.3},{1, 1.15, 1.25},{1, 1.1, 1.2}};

        return (parse_cat(c) + 1) * 100 * fees_matrix[parse_cat(c)][parse_ant(ant)];
}

int main() {
        int ant;
        char cat;

        cout << "Ingrese la categoría y antigüedad: " << endl;
        cin >> cat;
        cin >> ant;

        cout << "El valor de la tarifa es: " << calc_fee(cat, ant) << endl;       

        return 0;
}
