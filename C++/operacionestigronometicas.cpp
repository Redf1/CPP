#include <iostream>
//libreria cmath para calculos complejos
#include <cmath>
using namespace std;

int main() 
{
  //declaracion de variables
    double pontencia = pow(5,5);
    double raiz = sqrt(100.0);
    double seno = sin(0.523599);
    double coseno = cos(1.0472);
    double tangente = tan(0.785398);
    //impresion de resultados
    cout << "pontencia: "<< pontencia<< endl;
    cout << "Raiz: "<< raiz << endl;
    cout << "seno: "<< seno << endl;
    cout << "coseno: "<< coseno << endl;
    cout << "tangente: "<< tangente << endl;
    return 0;
}