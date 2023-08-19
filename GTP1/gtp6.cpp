#include<iostream>
#include<cmath>

using namespace std;

typedef struct {
        int h, m, s;
} Time;

// void convert(int &h, int &m, int &s) {
//         m += s/60;
//         s = s%60;

//         h += m/60;
//         m = m%60;
// }

Time convert(Time &time) {
        Time _t;

        _t.m = time.m + time.s/60;
        _t.s = time.s%60;

        _t.h = time.h + _t.m/60;
        _t.m = _t.m%60;

        return _t;
}

int main() {
        int h, m, s;
        Time time;

        cout << "Ingrese las horas: ";
        cin >> time.h;
        cout << "Ingrese los minutos: ";
        cin >> time.m;
        cout << "Ingrese los segundos: ";
        cin >> time.s;

        time = convert(time);

        cout << "El resultado es: " << time.h << ":" << time.m << ":" << time.s << endl;
        
	return 0;
}
