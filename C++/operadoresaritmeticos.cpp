#include <iostream>
using namespace std;

//#define PI 3.14159 //declaracion de una constante

int main() 
{
  const double PI = 3.14159; //declaracion de una contanste
  //delcaracion de variables
    int numero1 = 7, numero2 = 3;
    //formulas de division y mod
    int cociente = numero1/numero2;
    int mod = numero1%numero2;
    //mostrar en pantalla resulado
    cout << "El cociente es: " << cociente << endl;
    cout << "El residuo es: " << mod << endl;
    //realizar formula y mostrar en pantalla
    cout << 7.0/3 << endl;
    cout << 14-8/2*3+1 << endl;
    //priorizar los valores mas anidados
    cout << 14-8/2*(3+1) << endl;
    return 0;
}