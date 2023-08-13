// Se incluye el archivo de definiciónes
#include "gtp13_1.h"
#include<iostream>

using namespace std;

void dist_conversion(float n) {
        cout << n << " cm -> " << n/100 << " m\n";
        cout << n << " cm -> " << n*50/127 << " in\n";
}

void tmp_conversion(float n) {
        cout << n << " ºC -> " << n*9/5 + 32 << " ºF\n";
}
