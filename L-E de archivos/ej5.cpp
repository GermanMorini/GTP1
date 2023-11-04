#include<iostream>
#include<fstream>

using namespace std;

void cargar_medidas(int med[]) {
        ifstream file("entrada5.txt");
        int buff, cont = 0, i = 0;

        if(file.fail()) {
                cout << "Error al abrir el archivo!" << endl;
                exit(2);
        }

        while(file >> buff) {
                if(i%2) {  
                        med[cont] = buff;
                        cont++;
                }
                i++;
        }
        
        file.close();
}

void analizar(int medidas[], int DIAMETRO, int resultados[]) {
        int igual_d = 0, menor_d = 0, _5prc_mas = 0;

        for (int i = 0; i < 10; i++) {
                igual_d += (medidas[i] == DIAMETRO);
                menor_d += (medidas[i] < DIAMETRO);
                _5prc_mas += (medidas[i] > DIAMETRO*105.0/100);
        }

        resultados[0] = igual_d;
        resultados[1] = menor_d;
        resultados[2] = _5prc_mas;
}

void generar_informe(int resultados[]) {
        ofstream file;

        file.open("salida5.txt");

        if (file.fail()) {
                cout << "Error al generar el informe!" << endl;
                exit(2);
        }

        file << "Cantidad de piezas con igual al diámetro: " << resultados[0] << endl;
        file << "Cantidad de piezas con medida menor al diámetro: " << resultados[1] << endl;
        file << "Cantidad de piezas con diferencia mayor al 5% resp. al diámetro: " << resultados[2] << endl;

        file.close();
}

int main() {
        int DIAMETRO = 22, medidas[10], resultados[3];

        cargar_medidas(medidas);

        analizar(medidas, DIAMETRO, resultados);

        generar_informe(resultados);

        return 0;
}
