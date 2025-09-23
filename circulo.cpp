#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    // nesse caso eu ja declarei o valor. (Ex. pi = 3.14) e ele arredonda
    float raio, area, pi = 3.1415;

    cout << "Digite o valor do raio do circulo: ";
    cin >> raio;

    area = pi * pow(raio, 2);
    
    cout << fixed << setprecision(3);
    cout << "Area: " << area << endl;

    return 0;
}
