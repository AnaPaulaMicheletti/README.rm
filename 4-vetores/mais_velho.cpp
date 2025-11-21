#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;

    cout << "Quantas pessoas voce vai digitar? ";
    cin >> n;

    string nomes[n];
    int idades[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin, nomes[i]);

        cout << "Idade: ";
        cin >> idades[i];
    }

    int maisVelho = idades[0];
    int posicao = 0;

    for(int i = 1; i < n; i++){
        if(idades[i] > maisVelho){
            maisVelho = idades[i];
            posicao = i;
        }
    }

    cout << "PESSOA MAIS VELHA: " << nomes[posicao];

    return 0;
}
