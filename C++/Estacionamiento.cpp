#include <iostream>

using namespace std;

int main()
{
    float hora, minuto, pago;
    cout << "horas ";
    cin >> hora;
    cout << "minutos ";
    cin >> minuto;
    
    if (minuto > 0){
        hora++;
    }
    pago = hora*1.5;
    cout << "el pago es de : $" << pago << endl;

    return 0;
}

/*estacionamiento*/