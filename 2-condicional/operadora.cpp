#include <iostream>
using namespace std;

int main (){
    int minutos, valor;
    int cinquenta = 50;

    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;

    if (minutos <= 100)
    {
      cout << "Valor a pagar: " << cinquenta << endl;
    }else{ 
    valor = (minutos / 2) + 1;
    cout << "Valor a pagar: " << valor;
    }

    return 0;
}