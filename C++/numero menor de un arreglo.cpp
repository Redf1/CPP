#include <iostream>

using namespace std;

int main()
{
    /*lea un arreglo e indique cual es el menos elemento y en que indice se encuentra
    5   8   6   3   1   0   9*/
    
    int arreglo[10];
    int menor = 0;
    
    for (int i = 0; i<10; i++){
        
        cout << "Ingrese el valor de indice "<< i << " :";
        cin >> arreglo[i];
        
        if (arreglo[i] < arreglo[menor]){
            
            menor = i;
        }
    }
    cout << "El menor elemento es " << arreglo[menor] << " con el indice "<< menor << endl;
    
    return 0;
}
