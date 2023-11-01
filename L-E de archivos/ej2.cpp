#include<iostream>
#include<fstream>

using namespace std;

void load_file(int arr[]) {
        ifstream file("entrada2.txt");
        
        if(not file) {
                cout << "Error al abrir el archivo!" << endl;
                exit(2);
        }
        
        for (int i = 0; i < 8; i++) {
                file >> arr[i];
        }
        
        file.close();
}

void save_file(int arr[], int aux[]) {
        ofstream file("salida2.txt");
        
        if(not file.is_open()) {
                cout << "Error al abrir el archivo!" << endl;
                exit(2);
        }
        
        file <<arr[0] <<arr[1] <<arr[2] <<arr[3] <<arr[4] <<arr[5] <<arr[6] <<arr[7];
        file <<aux[0] <<aux[1] <<aux[2] <<aux[3] <<aux[4] <<aux[5] <<aux[6] <<aux[7];
        
        file.close();
}

float average(int arr[]) {
        float avg = 0;

        for (int i = 0; i < 8; i++) {
                avg += arr[i]/8.0;
        }

        return avg;
}

int odd_count(int arr[]) {
        int count = 0;

        for (int i = 0; i < 8; i++) {
                count += (arr[i]%2);
        }

        return count;
}

void aux_vector(int arr[], int aux_v[]) {
        for (int i = 0; i < 8; i++) {
                aux_v[i] = arr[i]%2;
        }
}

int main() {
        int arr[8], aux[8];

        load_file(arr);

        cout << "Media: " << average(arr) << endl;

        cout << "Cantidad de datos impares: " << odd_count(arr) << endl;

        aux_vector(arr, aux);

        save_file(arr, aux);

        return 0;
}
