#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

bool is_upper(char c) {
        return (c >= 65 and c <= 90);
}

bool is_lower(char c) {
        return (c >= 97 and c <= 122);
}

bool is_alphabetic(char c) {
        return (c >= 65 and c <= 90) or (c >= 97 and c <= 122);
}

int main() {
        ifstream ifile;
        ofstream ofile;
        char buff[1024];

        ifile.open("gtp3.cpp");
        ofile.open("salida3.txt");

        if (ifile.fail()) {
                cout << "No se pudo abrir!" << endl;
                return 2;
        }

        while (!ifile.eof()) {
                ifile.getline(buff, 1024);

                for (int i = 0; i < strlen(buff); i++) {
                        if (is_lower(buff[i])) buff[i] -= 32;
                        // if (is_alphabetic(buff[i]) and not is_upper(buff[i])) buff[i] -= 32;
                        // buff[i] = toupper(buff[i]);
                        ofile << buff[i];
                }
                
                ofile << endl;
        }

        ifile.close();
        ofile.close();
        
        return 0;
}
