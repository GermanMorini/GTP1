#include<iostream>

using namespace std;

void corregir(int resp[], int resu[]) {
        int score = 0, corr = 0, incorr = 0;

        for(int i = 0; i < 10; i++) {
                score += 5*(resp[i] == resu[i]);
                corr += (resp[i] == resu[i]);
                incorr += (resp[i] != resu[i]);
        }

        cout << "Puntaje: " << score << "/50\n";
        cout << "Respuestas correctas: " << corr;
        cout << "\nRespuestas incorrectas: " << incorr << "\n";
}

int main() {
        int respuestas[] = {1,0,0,1,1,0,1,0,0,1};
        int resultado[] = {1,1,0,1,1,1,0,0,0,1};

        corregir(respuestas, resultado);

        return 0;
}
