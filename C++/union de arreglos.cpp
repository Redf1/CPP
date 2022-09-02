#include <iostream>
#define MAX 10
using namespace std;

int main()
{
    /*lea 2 arreglos unidimensionales con valores reales y 
    usando otro con la combinacion de ambos arreglos.
    No necesariamente tendra la misma dimension
    arreglo 1   1   2   3   4
    arreglo 1   5   6   7   8
    arreglo 1   1   2   3   4   5   6   7*/
    
    int arreglo1[MAX], arreglo2[MAX], arreglo3[MAX*2];
    int n1, n2, n3, e=0;
    
    do{
        cout << "Ingrese la cantidad de elementos del arreglo 1: ";
        cin >> n1;
    }while (n1>MAX || n1<=0);
    
    for (int i = 0; i<n1; i++){
        
        cout << "elemento del indice " << i << " :";
        cin >> arreglo1[i];
    }
    
    do{
        cout << "Ingrese la cantidad de elementos del arreglo 2: ";
        cin >> n2;
    }while (n2>MAX || n2<=0);
    
    for (int i = 0; i<n2; i++){
        
        cout << "elemento del indice " << i << " :";
        cin >> arreglo2[i];
    }
    
    cout << "arreglo formado" << endl;
    n3=n1+n2;
    for (int i = 0; i<n1; i++){
        
        arreglo3[e] = arreglo1[i];
        e++;
    }
    
    for (int i = 0; i<n2; i++){
        
        arreglo3[e] = arreglo2[i];
        e++;
    }
    
    for (int i = 0; i<n3; i++){
        
        cout << arreglo3[i] << "\t";
    }
    
    return 0;
}
