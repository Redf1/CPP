#include <iostream>

using namespace std;

int main()
{
    double var;
    cin >> var;
    
    if (var > 0){
        cout << "el numero es positivo" << endl;
    }
    else if (var < 0){
        cout << "El numero es negativo" << endl;
    }
    else {
        cout << "En numero es neutro" << endl;
    }
    
    return 0;
}
/*positivo negativo o neutro*/