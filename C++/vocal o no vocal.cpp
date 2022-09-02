#include <iostream>

using namespace std;

int main()
{
    char letra;
    
    cout << "ingrese una letra: ";
    cin >> letra;
    
    switch(letra){
        case 'a': cout << "es vocal";
            break;
        case 'e': cout << "es vocal" << endl;
            break;
        case 'i': cout << "es vocal" << endl;
            break;
        case 'o': cout << "es vocal" << endl;
            break;
        case 'u': cout << "es vocal" << endl;
            break;
        default: cout << "no es vocal" << endl;
    }
    return 0;
}

/*vocal o no vocal*/