#include<iostream>
#include<string.h>
#include<fstream>

using namespace std;

int main() {
        ofstream file;
        file.open("registroDeUsuario.txt");
        char line[1024];
        bool b = 1;

        do {
                cout << "Ingrese la frase: " << endl;
                cin.getline(line, 1024, '\n');
                cout << endl;

                if(strcmp(line, "fin") != 0) {
                        file << line << endl;
                } else {b = 0;}
        } while(b);

        file.close();

        return 0;
}
