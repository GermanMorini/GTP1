// Graba datos en archivos 

#include <iostream> 
#include <fstream>  // para ofstream o ifstreamb

using namespace std;

int main()
{
    //Abre archivo para la escritura 
    ofstream fich("ejemplo.dat");

    //Verifica existencia del archivo 
    if (!fich)
    {
        cout<<"Error al abrir ejemplo.dat\n";

        exit(EXIT_FAILURE);

    }

    //Escribe en el archivo 

    for (int i = 0; i < 9; i++)
    {
        fich << i << endl;
    }
    
    system("pause");
}