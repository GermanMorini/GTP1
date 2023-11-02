#include<iostream>
#include<fstream>

using namespace std;

void cargar() {
        char buff[1024];
        ifstream file;
        file.open("entrada0.txt");

        if(file.fail()) {
                cout << "Error al abrir el archivo!" << endl;
        } else {
                while(!file.eof()) {
                        file.getline(buff, 1024);
                        cout << buff << endl;
                }
        }

        file.close();
}

void subir() {
        ofstream file;
        file.open("salida0.txt");

        file << "salida de ejemplo!" << endl;

        file.close();
}

int main() {
        
        return 0;
}
