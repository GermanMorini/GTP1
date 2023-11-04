#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main() {
        ifstream file;
        file.open("gtp2.cpp");
        char buff[1024];

        if(file.fail()) {
                cout << "Error al abrir el archivo!" << endl;
                return 2;
        }

        while(!file.eof()) {
                for (int i = 0; i < 5; i++) {
                        file.getline(buff, 1024);
                        cout << buff << endl;
                }
                getchar();
        }

        file.close();

        return 0;
}
