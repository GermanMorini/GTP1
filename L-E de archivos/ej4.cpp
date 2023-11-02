#include<iostream>
#include<fstream>

using namespace std;

int load_file() {
        ifstream file("entrada4.txt");
        char buff[1024];
        int count = 0;
        
        if(not file) {
                cout << "Error al abrir el archivo!" << endl;
                exit(2);
        }
        
        while(file >> buff) count++;
        
        file.close();
        return count;
}

int main() {
        cout << "Hay " << load_file() << " datos!" << endl;
        return 0;
}
