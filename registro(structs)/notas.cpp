#include <iostream>
#include <string>
using namespace std;

struct Aluno{
    string nome;
    double nota1, nota2;
};

int main(){
    int n;

    cout << "Numero de pessoas: ";
    cin >> n;

    Aluno alunos[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin,alunos[i].nome);

        cout << "Nota: ";
        cin >> alunos[i].nota1;

        cout << "Nota: ";
        cin >> alunos[i].nota2;
    }

    for(int i = 0; i < n; i++){
        double media = (alunos[i].nota1 + alunos[i].nota2) / 2.00;
        
        cout << "A nota media de " << alunos[i].nome << " e " << media << endl;
        
        if(media >= 6.0){
            cout << "Os alunos aprovados sao " << alunos[i].nome << endl;
        }
    }

    return 0;
}
