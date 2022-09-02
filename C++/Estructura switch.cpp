#include <iostream>

using namespace std;

int main()
{
    int variable;
    cin >> variable;
    switch (variable){
        case 1: cout << "Caso 1" << endl;
        break;
        case 2:cout << "Caso 2" << endl;
        break;
        case 3: cout << "Caso 3" << endl;
        break;
        default: cout << "Ningun caso" << endl;
        break;
    }
    
    return 0;
}
/*Estructura switch*/