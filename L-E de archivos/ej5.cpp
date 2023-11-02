#include<iostream>
#include<fstream>

using namespace std;

void cargar_medidas(int med[]) {
        ifstream file("entrada5.txt");
        int buff, cont = 0, i = 0;

        if(not file) {
                cout << "Error al abrir el archivo!" << endl;
                exit(1);
        }

        while(file >> buff) {
                if(!i%2 and i > 3) {
                        med[cont] = buff;
                        cont++;
                }
                i++;
        }
        
        file.close();
}

int main() {
        int DIAMETRO = 22, medidas[10];

        cargar_medidas(medidas);

        cout << "Hay " <<  << " piezas con medida igual al diámetro!" << endl;
        
        return 0;
}
