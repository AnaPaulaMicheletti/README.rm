#include <iostream>
#include <iomanip>
using namespace std;

int main(){
int n;
double valor;

    cout << "Quanto numeros voce vai digitar? ";
    cin >> n;

    double vetor[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> valor;
        vetor[i] = valor;
    }

    double maior = vetor[0];
    int posicao = 0;
    for(int i = 0; i < n; i++){
        if(vetor[i] > maior){
            maior = vetor[i];  // maior numero
            posicao = i;  // posicao do maior numero
        }
    }
    cout << "MAIOR VALOR = " << fixed << setprecision(1) << maior << endl;
    cout << "POSICAO DO MAIOR VALOR = " << posicao;

    return 0;
}
