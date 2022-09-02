
#include <iostream>

using namespace std;

/*Escriba una funcion que calcule la potencia 
valor -> exponente*/
int potencia (int valor, int exponente);

int main()
{
    cout << potencia(7,7) <<endl;
    return 0;
}

int potencia (int valor, int exponente){
    /* 2^3 = 2*2*2 */
    int acumulador = 1;
    
    for (int i = 1; i <= exponente; i++){
        acumulador = acumulador * valor;
    }
    return acumulador;
}