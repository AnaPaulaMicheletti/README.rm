#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;

    cout << "Quantos alunos serao digitados? ";
    cin >> n;

    string nomes[n];
    double nota1[n];
    double nota2[n];

    for(int i = 0; i < n; i++){
        cin.ignore();

        cout << "Nome: ";
        getline(cin, nomes[i]);

        cout << "Nota do primeiro semestre: ";
        cin >> nota1[i];

        cout << "Nota do segundo semestre: ";
        cin >> nota2[i];
    }

    cout << "\nALUNOS APROVADOS:\n";

    for(int i = 0; i < n; i++){
        double media = (nota1[i] + nota2[i]) / 2.0;

        if(media >= 6.0){
            cout << nomes[i] << endl;
        }
    }

    return 0;
}
