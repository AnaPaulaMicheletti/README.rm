#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    float temperatura, Fahrenheit, Celsius;
    char escala; //char = se usa quando for por letras (A, B, C)

    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> escala;

    if (escala == 'F')
    {
    cout << "Digite a temperatura em Fahrenheit: ";
    cin >> Fahrenheit;

    Celsius = (Fahrenheit - 32) * 5/9;

    cout << fixed << setprecision(2);
    cout << "Temperatura equivalente em Celsius: " << Celsius << endl;
    
    }else if(escala == 'C'){

    cout << "Digite a temperatura em Celsius: ";
    cin >> Celsius;

    Fahrenheit = (Celsius * 9/5) + 32;

    cout << fixed << setprecision(2);
    cout << "Temperatura equivalente em Fahrenheit: " << Fahrenheit << endl;
    }

    return 0;
}