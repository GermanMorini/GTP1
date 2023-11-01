#include<iostream>

using namespace std;

void load_file() {
        ifstream file("filename");
        
        if(not file) {
                cout << "Error al abrir el archivo!" << endl;
                exit(2);
        }
        
        //code
        
        file.close();
}

int main() {
        
        return 0;
}
