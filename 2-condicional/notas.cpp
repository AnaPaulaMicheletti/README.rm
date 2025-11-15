#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    double n1, n2, notaFinal;

    cout << "Digite a primeira nota: ";
    cin >> n1;

    cout << "Digite a segunda nota: ";
    cin >> n2;

    notaFinal = n1 + n2;
    cout << fixed << setprecision(1) << "NOTA FINAL: " << notaFinal << endl;
    if (notaFinal < 60.0)
    {
        cout << "Reprovado";
    }
    return 0;
}