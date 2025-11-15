#include <iostream>
#include <string>
using namespace std;

struct Funcionario{
    string nome;
    double valor, horas;
};

int main(){
    int n;

    cout << "Numeros de funcionarios: ";
    cin >> n;

    Funcionario funcionarios[n];

    for(int i = 0; i < n; i++){
        cin.ignore();
        cout << "Nome: ";
        getline(cin,funcionarios[i].nome);

        cout << "Valor por hora: ";
        cin >> funcionarios[i].valor;

        cout << "Horas trabalhada: ";
        cin >> funcionarios[i].horas;
    
    }
    for(int i = 0; i < n; i++){
        double pagamento = funcionarios[i].valor * funcionarios[i].horas;
        cout << "O pagamento para " << funcionarios[i].nome << " deve ser " << pagamento;
    }

    return 0;
}