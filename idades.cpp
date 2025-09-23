#include <iostream>
#include <iomanip> // para casas decimais
//include <string>
using namespace std;

int main(){
    //int serve numeros inteiros
    int idade1, idade2;
    string nome1, nome2;
    double media_idades;

    cout << "Dados da primeira pessoa: " << endl;
    
    cout << "Nome: ";
    //getline é usado para ler linhas inteiras com espaços em branco, tornando-o mais adequado para entrada de texto livre. (mais facil de aceitar a resposta enviada do usuario)
    getline(cin, nome1);
    cout << "Idade: ";
    cin >> idade1;
    cin.ignore(); //limpar a leitura da cin

    cout << "Dados da segunda pessoa: " << endl;
    cout << "Nome: ";
    getline(cin, nome2);
    cout << "Idade: ";
    cin >> idade2;

    media_idades = (idade1 + idade2) / 2.0;

    cout << fixed << setprecision(1); //opicional já q foi posto o 2.0 para a divisao de casa decimal
    cout << "A idade média de " << nome1 << " e " << nome2 << " é de " << media_idades << " anos" << endl;
    //endl: quebra uma linha para baixo

    return 0;
}
