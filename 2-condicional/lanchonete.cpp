#include <iostream>
#include <iomanip>
using namespace std;

int main (){
    int codigo, quantidade;
    double preco, valor;

    cout << "Codigo do produto comprado: ";
    cin >> codigo;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    if (codigo == 1){
        preco = 5;
    }
    else if (codigo == 2){
        preco = 3.50;
    }
    else if (codigo == 3){
        preco = 4.80;
    }
    else if (codigo == 4){
        preco = 8.90;
    }
    else if (codigo == 5){
        preco = 7.32;
    }

    valor = quantidade * preco;

    cout << fixed << setprecision(2);
    cout << "Valor a pagar: " << valor <<endl;

    return 0;
}