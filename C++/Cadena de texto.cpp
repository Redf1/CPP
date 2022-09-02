//cadena de texto
#include <iostream>

using namespace std;

int main()
{
    char cadena1[] = "Ruben Figueroa";
    char cadena2[] = {'R','u','b','e','n','\0'};
    char cadena3[10];
    
    cout << "ingrese una cadena: ";
    cin.getline(cadena3,30);
    cout << "la cadena es: " <<cadena3<< endl;
    return 0;
}
