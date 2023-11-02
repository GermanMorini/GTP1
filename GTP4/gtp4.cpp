#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main() {
        ifstream ifile;
        ofstream ofile1;
        ofstream ofile2;
        char buff[128];
        int nov_c = 0, en_c = 0;

        ifile.open("texto.txt");
        ofile1.open("noviembre.txt");
        ofile2.open("enero.txt");

        if (ifile.fail()) {
                cout << "Error al abrir el archivo!" << endl;
                return 2;
        }

        while (!ifile.eof()) {
                ifile.getline(buff, 128);

                nov_c += !strcmp(buff, "noviembre");
                en_c += !strcmp(buff, "enero");
        }

        ofile1 << nov_c;
        ofile2 << en_c;

        ifile.close();
        ofile1.close();
        ofile2.close();

        return 0;
}
