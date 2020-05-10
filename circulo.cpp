#include "iostream"
#include "math.h"
#ifndef MPI
#define M_PI 3.14159265358979323846
#endif
using namespace std;
int main(void)
{
    float radio, area, perimetro, resultado = 0;
    cout << "Ingresar el valor del radio: " << endl; cin >> radio;
    area = M_PI * pow(radio,2);
    perimetro = 2*M_PI*radio;

    cout << "El valor del area es: " <<area<<endl;
    cout << "El valor del perimetro es: " <<perimetro<<endl;
}
