#include "iostream"
using namespace std;
main (void)
{
    float cantidad, total$ = 0;
    string string1 = "Playstation 8";
    string string2 = "850.00$"; 
    cout <<string1 <<endl <<string2; 
    cout << endl;

    cout << "Ingrese cantidad de producto a pagar: " << endl; cin >> cantidad;
    total$ = (cantidad * 850.00);
    cout << "Su total a pagar es: $ " << total$ << endl;
  
}