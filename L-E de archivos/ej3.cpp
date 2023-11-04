#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

void load_file(char str[]) {
        ifstream file("entrada3.txt");
        char buffer[64];
        
        if(file.fail()) {
                cout << "Error al abrir el archivo!" << endl;
                exit(2);
        }
        
        for (int i = 0; i < 6; i++) {
                file >> buffer;
                strcat(str, buffer);
        }
        
        file.close();
}

void save_file(char str[]) {
        ofstream file("salida3.txt");

        if(not file.is_open()) {
                cout << "Error al abrir el archivo!" << endl;
                exit(2);
        }

        file << str << endl;

        file.close();
}

int main() {
        char str[1024];
        
        load_file(str);
        save_file(str);

        return 0;
}
