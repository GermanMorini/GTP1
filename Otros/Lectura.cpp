#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    //Abre archivo para la lectura
    ifstream fich("ejemplo.dat");
    //Verifica el archivo 
    if(!fich.is_open())
    {
        cout<<"Error al abrir ejemplo.dat\n";
        exit(EXIT_FAILURE);

    }

    int valor;
    int i = 0;
    //Lee los datos 
    while (fich>>valor)
    {
        cout<<valor;
    }
    system("pause");
}