#include "iostream"

using namespace std;
int main (void)
{
    float a, b, c, resultado = 0;
    cout << "Ingresar la primer nota: " << endl; cin >> a;
    cout << "Ingresar la segunda nota: " <<endl; cin >> b;
    cout << "Ingresar la tercera nota: " <<endl; cin >> c;
    resultado = (a+b+c)/3;
    cout << "Su promedio final es: " <<resultado << endl;

}