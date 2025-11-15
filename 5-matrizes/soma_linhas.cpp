#include <iostream>
using namespace std;

int main(){
int qntlin, qntcol, l1, l2, l3, l4, l5, l6, a, b;

    cout << "Qual a quantidade de linhas da matriz? ";
    cin >> qntlin;
    int matriz[qntlin];

    cout << "Qual a quantidade de colunas da matriz?";
    cin >> qntcol;
    int matriz[qntcol];

    cout << "Digite os elementos da 1a. linha: " << endl << l1 << endl << l2 << endl << l3 << endl;

    cout << "Digite os elementos da 2a. linha: " << endl << l4 << endl << l5 << endl << l6 << endl;

    a = l1 + l2 + l3;

    b = l4 + l5 + l6;

    cout << "VETOR GERADO: " << endl << a << endl << b << endl;

    return 0;
}