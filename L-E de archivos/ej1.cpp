#include<iostream>
#include<fstream>

using namespace std;

void load_file(int mat[][3]) {
        ifstream file("entrada1.txt");
        
        if(not file) {
                cout << "Error al abrir el archivoª" << endl;
                exit(2);
        }

        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        file >> mat[i][j];
                }
        }
        
        file.close();
}

void print_data(int mat[][3]) {
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        cout << mat[i][j] << " ";
                }
                cout << endl;
        }
        cout << endl;
}

void operate(int mat[][3], int N) {
        for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                        mat[i][j] *= N;
                }
        }
}

void save_data(int mat[][3]) {
        ofstream file("salida1.txt");

        if(not file.is_open()) {
                cout << "Error al abrir el archivoª" << endl;
                exit(2);
        }

        for (int i = 0; i < 3; i++) {
                file << mat[i][0] << " " << mat[i][1] << " " << mat[i][2] << endl;
        }
        
        file.close();
}

int main() {
        int mat[3][3], N;

        load_file(mat);
        
        print_data(mat);

        cout << "Ingrese el número a multiplicar: ";
        cin >> N;
        operate(mat, N);

        save_data(mat);

        return 0;
}
