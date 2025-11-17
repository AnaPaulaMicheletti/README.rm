#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Pessoa{
    string nome;
    double idade;
};

int main(){
    int n;

    cout << "Numero de pessoas: ";
    cin >> n;

    Pessoa pessoas[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin,pessoas[i].nome);

        cout << "Idade: ";
        cin >> pessoas[i].idade;
    }

    //ofstream: grava o programa no arquivo 
    ofstream arquivo("pessoas.txt");
    for(int i = 0; i < n; i++){
        arquivo << pessoas[i].nome << endl;
        arquivo << pessoas[i].idade << endl;
    }
    arquivo.close();

    //ifstream: lê o arquivo
    ifstream leitura("pessoas.txt");
    string nome;
    int idade;

    while(getline(leitura, nome)){
        leitura >> idade;
        cin.ignore();
        cout << nome << " " << idade << endl;
    }

    return 0;
}