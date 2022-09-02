#include <iostream>

using namespace std;

int main() 
{
  /* Haga un programa que calcule el area de un triangulo y lo muestre en pantalla
  */
  //declaramos variables
  double base,altura,area;
  //solicitamos lo datos
  cout << "ingrese la base: ";
  cin >> base;
  cout << "ingree la altura: ";
  cin >> altura;
  //hacemos el proceso
  area = base * altura / 2;
  cout <<"El area del triangulo es de: "<< area  << endl;
  return 0;
}