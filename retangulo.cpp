#include <iostream>
#include <iomanip> //casas decimais
#include <cmath> // para raiz quadrada "sqrt((conta) + (conta))" e pow(poenciação)

using namespace std;

int main(){
    float base, altura, area, perimetro, diagonal;

    cout << "Digite a base do retangulo: ";
    cin >> base;

    cout << "Digite a altura do retangulo: ";
    cin >> altura;

    area = base * altura;
    perimetro = base + base + altura + altura;
    diagonal = sqrt((base * base) + (altura * altura));

    cout << fixed << setprecision(4);
    cout << "Area = " << area << endl;
    cout << "Perimetro = " << perimetro << endl;
    cout << "Diagonal = " << diagonal << endl;

    return 0;
}
