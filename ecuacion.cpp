#include "iostream"
#include "conio.h"
#include "math.h"

using namespace std;


int main(void)
{
    float a, b, c, x1, x2, resultado = 0;
    
    cout<< "Ingresar valor de a: " <<endl; cin>> a;
    cout<< "Ingresar valor de b: " <<endl; cin>> b;
    cout<< "Ingresar valor de c: " <<endl; cin>> c;

 x1 = (-b+sqrt(b*b-4*a*c))/(2*a);

 x2 = (-b-sqrt(b*b-4*a*c))/(2*a);

 cout << "x1 = " <<x1<<"\nx2 = "<<x2;

}