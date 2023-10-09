#include<iostream>

// Incluye el método para mostrar el rango de valores
#include<limits>

using namespace std;

int main() {
        // Muestra el signo del número
        cout << showpos;
        
        cout << "Los valores de tipo 'float' están entre " << numeric_limits<float>::min() << " ··· " << numeric_limits<float>::max() << " (" << sizeof(float) << " bytes)\n";
        cout << "Los valores de tipo 'double' están entre " << numeric_limits<double>::min() << " ··· " << numeric_limits<double>::max() << " (" << sizeof(double) << " bytes)\n";
        cout << "Los valores de tipo 'short' están entre " << numeric_limits<short>::min() << " ··· " << numeric_limits<short>::max() << " (" << sizeof(short) << " bytes)\n";
        cout << "Los valores de tipo 'int' están entre " << numeric_limits<int>::min() << " ··· " << numeric_limits<int>::max() << " (" << sizeof(int) << " bytes)\n";
        cout << "Los valores de tipo 'long' están entre " << numeric_limits<long>::min() << " ··· " << numeric_limits<long>::max() << " (" << sizeof(long) << " bytes)\n";

        return 0;
}
