#include <iostream>
#include <iomanip> //casas decimais
using namespace std;

int main(){
    float largura, comprimento, valor, area, preco;

    cout << "Digite a largura do terreno: ";
    cin >> largura;
    
    cout << "Digite o comprimento do terreno: ";
    cin >> comprimento;

    cout << "Digite o valor do metro quadrado: ";
    cin >> valor;
    
    //processamento
    area = largura * comprimento;
    preco = area * valor;

    //saída
    cout << fixed << setprecision(2); // fixa o resultado com 2 casas decimais
    cout << "Area do terreno = " << area << endl;
    cout << "Preco do terreno = " << preco << endl;

    return 0;
}
