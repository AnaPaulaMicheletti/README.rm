#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int unitario, quantidade, dinheiro, troco, produto;
    cout << "Preco unitario do produto: ";
    cin >> unitario;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheiro recebido: ";
    cin >> dinheiro;

    produto = quantidade * unitario;
    troco = dinheiro - produto;

    cout << "Troco: " << troco << endl;
    return 0;
}
