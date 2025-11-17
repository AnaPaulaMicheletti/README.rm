#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct Altura{
    string nome;
    double idade, tamanho;
};

int main(){
    int n;

    cout << "Numero de pessoas: ";
    cin >> n;

    Altura alturas[n];

    for(int i = 0; i < n; i++){
    cin.ignore();
    cout << "Nome: ";
    getline(cin,alturas[i].nome);

    cout << "Idade: ";
    cin >> alturas[i].idade;

    cout << "Altura: ";
    cin >> alturas[i].tamanho;
    }

    int  menores16 = 0; 

    for(int i = 0; i < n; i++){
        double media = (alturas[i].idade + alturas[i].idade) / 2.00;
        double percentual = (double)menores16 / n * 100.0;
    
        cout << fixed << setprecision(2);
    cout << "A media das alturas e " << media << endl;
    cout << "O percentual de pessoas menores de 16 e de " << percentual;
    }

    for(int i = 0; i < n; i++){
        if(alturas[i].idade < 16){
            cout << alturas[i].nome << endl;
        }
    }

    return 0;
}
