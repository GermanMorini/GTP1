#include<iostream>
#include<fstream> // file-stream (flujo de archivos)

using namespace std;

bool cargar_archivo() {
        ifstream file; // input file stream (flujo de entrada de archivos)
        char buff[1024];

        // abrir el archivo
        file.open("entrada0.txt");
        // Verificar que el flujo de entrada se haya creado exitosamente
        if(file.fail()) {
                cout << "Error al abrir el archivo!" << endl;
                return false;
        }

        // Mientras que no se llegue al final del archivo
        while(!file.eof()) { // eof = end of file
                file.getline(buff, 1024);
                cout << buff << endl;
        }

        file.close();

        return true;
}

void crear_archivo(int mat[][2]) {
        ofstream file; // output file stream (flujo de salida de datos)
        file.open("salida0.txt"); // establece el flujo de salida

        for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                        file << mat[i][j] << " ";
                }
                file << endl;
        }

        file.close();
}

int main() {
        int mat[2][2] = {{1,2},{3,4}};

        cargar_archivo();
        crear_archivo(mat);
        
        return 0;
}
