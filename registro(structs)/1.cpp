#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct Aluno {
    string nome;
    double n1, n2;
};

int main(){
    int n;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    Aluno alunos[n]; //quer dizer q vai existir varios a partir do q digitar

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout <<"nome: ";
        getline(cin, alunos[i].nome); //lê a linha, complementa o ignore (corrige o ignore)

        cout << "nota 1: ";
        cin >> alunos[i].n1;

        cout << "nota 2: ";
        cin >> alunos[i].n2;
    }

    cout << "\nAlunos aprovados: \n";

    for(int i = 0; i < n; i++){
        double media = (alunos[i].n1 + alunos[i].n2) / 2.00;
        if(media >= 6.00){
            cout << alunos[i].nome << "(" << media << ")\n";
        }
    }

    return 0;
}