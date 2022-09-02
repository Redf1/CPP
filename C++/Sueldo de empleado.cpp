#include <iostream>

using namespace std;

int main()
{
    double sueldo, total;
    char categoria, condicion;
    
    cout << "ingrese su sueldo ";
    cin >> sueldo;
    cout << "ingrese su categoria ";
    cin >> categoria;
    cout << "condicion estable (E), no estable (N)" << endl << "ingrese su condicion ";
    cin >> condicion;

    if (condicion == 'E'){
        switch(categoria){
            case 'A': total = sueldo * 1.2;
                break;
            case 'B': total = sueldo * 1.18;
                break;
            case 'C': total = sueldo * 1.15;
                break;
            case 'D': total = sueldo * 1.12;
                break;
            default: cout << "no existe su categoria, pruebe de nuevo" << endl;
        }
        cout << "su sueldo total es: $" << total *0.94 << endl;
    }
    else{
        switch(categoria){
            case 'A': total = sueldo * 1.17;
                break;
            case 'B': total = sueldo * 1.15;
                break;
            case 'C': total = sueldo * 1.14;
                break;
            case 'D': total = sueldo * 1.10;
                break;
            default: cout << "no existe su categoria, pruebe de nuevo" << endl;
        }
        cout << "su sueldo total es: $" << total *0.96 << endl;
    }
    return 0;
}
/*calcular el total a pagar de un empleado con categorias de bono de 
a 20% o a 17%, b 18% o b 15%, c 15% o c 14%, d 12% o d 10%, dependiendo si es empleado estable (E) o no estable (N)
con un descuento de 6% si es estable y 4% si no lo es*/