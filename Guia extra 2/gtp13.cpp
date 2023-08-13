#include<iostream>

// Inclueye el archivo de definición de funciones
// Se usan "" para que el compilador los busque en el directorio actual, o
// sino en los directorios especificados en la configuración
#include "gtp13_1.h"

using namespace std;

ConvOp parse_opt(int o) {
        switch(o) {
                case 1:
                        return dist_conversion;
                case 2:
                        return tmp_conversion;
                case 3:
                        exit(0);
                default:
                        puts("Operación inexistente");
                        return NULL;
        }
}

int main() {
        int opt = -1;
        float val = -1;

        option:
        cout << "1 – Conversión de distancia\n2 – Conversión de temperatura\n3 – Salir\n";
        cin >> opt;

        ConvOp op = parse_opt(opt);

        if(op == NULL) {
                cout << "Vuelva a ingresar el valor de opción\n";
                goto option;
        }

        parsing:
        cout << "Ingrese el valor a transformar: ";
        cin >> val;

        if(val < 0) {
                cout << "Ingrese un valor positivo\n";
                goto parsing;
        }
        
        op(val);

        return 0;
}
