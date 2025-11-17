#include <iostream>
#include <string>
#include <fstream>
using namespace std;

struct Folha{
    string nome;
    double idade, valor, horas;
};

int main(){
    int n;

    cout << "Numero de pessoas: ";
    cin >> n;

    Folha folhas[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin,folhas[i].nome);

        cout << "Idade: ";
        cin >> folhas[i].idade;

        cout << "Valor por hora: ";
        cin >> folhas[i].valor;

        cout << "Horas trabalhadas: ";
        cin >> folhas[i].horas;
    }

    ofstream arquivo("folha.txt");
    for(int i = 0; i < n; i++){
        arquivo << folhas[i].nome << endl;
        arquivo << folhas[i].idade << endl;
        arquivo << folhas[i].valor << endl;
        arquivo << folhas[i].horas << endl;
    }
    arquivo.close();

    ifstream leia("folha.txt");
    string nome;
    double idade, valor, horas;

    while(getline(leia, nome)){
        leia >> idade;
        leia >> valor;
        leia >> horas;
        leia.ignore();

        double pagamento = valor * horas;

        cout << nome << " " << idade << " pagamento foi de " << pagamento << endl;
    }

    return 0;
}
