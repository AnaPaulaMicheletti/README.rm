#include <iostream>
using namespace std;

int main(){
    int n, valor;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vetor[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> valor;
        vetor[i] = valor;
    }

    int par = 0; 
    cout << "NUMEROS PARES: ";
    for(int i = 0; i < n; i++){
        if((int)vetor[i] % 2 == 0){
            cout << vetor[i] << " ";
            par = par + 1;
        }
    }
    cout << endl;
    cout << "QUANTIDADE DE PARES: " << par << endl;

    return 0;
}
