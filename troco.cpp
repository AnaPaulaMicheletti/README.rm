#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //double serve para numeros com virgula ou decimais e com resultado mais preciso
    double preco_unitario, valor_recebido, troco;
    int quantidade;

    cout << "Preco unitario do produto: ";
    cin >> preco_unitario;

    cout << "Quantidade comprada: ";
    cin >> quantidade;

    cout << "Dinheito recebido: ";
    cin >> valor_recebido;

    troco = valor_recebido - (preco_unitario * quantidade);

    cout << fixed << setprecision(2);
    cout << "Troco: " << troco;

    return 0;
}
