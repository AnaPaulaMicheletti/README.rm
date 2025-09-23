#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    float medida_a, medida_b, medida_c, quadrado, triangulo, trapezio;

    cout << "Medida A: ";
    cin >> medida_a;

    cout << "Medida B: ";
    cin >> medida_b;

    cout << "Medida C: ";
    cin >> medida_c;

    quadrado = pow(medida_a, 2);
   triangulo = (medida_a * medida_b) / 2;
   trapezio = ((medida_a + medida_b) * medida_c) / 2;

    cout << fixed << setprecision(4);
    cout << "Area do quadrado: " << quadrado << endl;
    cout << "Area do triangulo retangulo: " << triangulo << endl;
    cout << "Area do trapezio: " << trapezio << endl;

    return 0;

    
}
