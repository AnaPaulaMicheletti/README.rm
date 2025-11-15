#include <iostream>
#include <string>
using namespace std;

struct Pessoa {
    string nome;
    double idade;
};

int main(){
    int n = 2;

    Pessoa pessoas[2];

    cout << "Dados da primeira pessoa: ";

    for(int i = 0; i < n; i++){
    cin.ignore();
    cout << "Nome: ";
    getline(cin, pessoas[i].nome);

    cout << "Idade: ";
    cin >> pessoas[i].idade;
    }

    double media = (pessoas[0].idade) + (pessoas[1].idade) / 2.00;
    
    cout << "A idade média de " << pessoas[0].nome << " e " << pessoas[1].nome << " é de " << media << " anos";

    return 0;
}