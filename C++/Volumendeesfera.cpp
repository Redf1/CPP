#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    const double PI=3.14159;
    double volumen, radio;
    cout << "Ingrese el radio: " << endl;
    cin >> radio;
    volumen=4/3*PI*pow(radio,3);
    cout << "El volumen de la esfera es de:" << volumen << endl;

    return 0;
}