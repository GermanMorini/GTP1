#include<iostream>
// Incluye el archivo de definición de funciones
// Se usan "" para que el compilador los busque en el directorio actual, o
// sino en los directorios especificados en la configuración
//#include "gtp13_1.h"
// NOTA: no lo incluyo porque se complica demasiado el código

using namespace std;

void dist_conversion(float n) {
        cout << n << " cm -> " << n/100 << " m\n";
        cout << n << " cm -> " << n*50/127 << " in\n";
}

void tmp_conversion(float n) {
        cout << n << " ºC -> " << n*9/5 + 32 << " ºF\n";
}

typedef void (*Operation)(float);
const int OPERATIONS = 3;
const Operation op[OPERATIONS] = {
        NULL,
        dist_conversion,
        tmp_conversion
};

// Operation parse_opt(int o) {
//         return op[o*(o > 0 and o < OPERATIONS)];
// }

// Operation parse_opt(int o) {
//         switch(o) {
//                 case 1:
//                         return dist_conversion;
//                 case 2:
//                         return tmp_conversion;
//                 case 3:
//                         exit(0);
//                 default:
//                         puts("Operación inexistente");
//                         return NULL;
//         }
// }

int prompt_index() {
        int opt;

        do {
                cout << "1 – Conversión de distancia\n2 – Conversión de temperatura\n3 – Salir\n\n> ";
                cin >> opt;

                if(opt == 3) exit(0);
        } while(opt < 1 or opt > OPERATIONS);

        return opt;
}

float prompt_val() {
        float val;

        do {
                cout << "----------\nIngrese el valor a convertir: \n\n> ";
                cin >> val;
                cout << "\nResultados: \n\n";
        } while(val < 0);

        return val;
}

int main() {
        op[prompt_index()](prompt_val());

        return 0;
}
