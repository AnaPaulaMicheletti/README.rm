#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main (){
    double a, b, c, X1, X2, delta;

    cout << "Coeficiente a: ";
    cin >> a;

    cout << "Coeficiente b: ";
    cin >> b;

    cout << "Coeficiente c: ";
    cin >> c;

    delta = pow(b, 2) - 4 * a * c;

// ==
// ===
    
    if (delta < 0 || a == 0)
    {
        cout << "Se a equacao nao possui raizes reais" << endl;
    }else{
        X1 = (-b + sqrt(delta)) / (2*a);
        X2 = (-b + sqrt(delta)) / (2*a);
   
        cout << fixed << setprecision(4);
        cout << "X1: " << X1 << endl;
        cout << "X2: " << X2 << endl;
    }

    return 0;
}