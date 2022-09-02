#include <iostream>
using namespace std;

/*Funciones y Procedimientos*/

void mensaje();
int suma(int a, int b);
bool esPar(int);

int main(){
    
    mensaje();

    int sum = suma(5,4);
    cout << sum<< endl;
    
    bool par = esPar(sum);
    if (par == true){
        cout << "El numero es par" << endl;
    }else{
        cout << "El numero no es par" << endl;
    }
    return 0;
}

void mensaje(){
    cout<<"Mensaje dentro de un procedimiento"<<endl;
}

int suma (int a, int b){
    int c = a + b;
    return c;
}

bool esPar(int a){
    if (a % 2 == 0){
        return true;
    }else{
        return false;
    }
}