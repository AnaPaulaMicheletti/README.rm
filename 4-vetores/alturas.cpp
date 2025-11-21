#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Altura{
    string nome;
    double idade, tamanho, pessoa;
};

int main(){
    int n;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    Altura alturas[n];

    int vetor[n];

    for(int i = 0; i < n; i++){
        vetor[i] = i + 1;
    }

    for(int i = 0; i < n; i++){
        cout << "Dados da " << vetor[i] << "a pessoa: " << endl;
        
        cin.ignore();
        cout << "Nome: ";
        getline(cin,alturas[i].nome);

        cout << "Idade: ";
        cin >> alturas[i].idade;

        cout << "Alturas: ";
        cin >> alturas[i].tamanho;
    }

    double soma = 0;
    for(int i = 0; i < n; i++){
        soma = soma + alturas[i].tamanho; 
    }
    double media = soma / n;
        cout << "Altura media: " << fixed << setprecision(2) << media << endl;  

    int menores = 0;
    double percentual = 0;
    for(int i = 0; i < n; i++){
        percentual = menores / n * 100.0;
    }
    cout << "Pessoas com menos de 16 anos: " << fixed << setprecision(2) << percentual << "%" << endl;

    for(int i = 0; i < n; i++){
        if(alturas[i].idade < 16){
            cout << alturas[i].nome << endl;
        }
    }

    return 0;
}
