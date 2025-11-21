#include <iostream>
using namespace std;

int main(){
    int n, valor;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: " << endl;
        cin >> valor;
        vetor[i] = valor;
    }

    cout << "NUMEROS NEGATIVOS: " << endl;
    for(int i = 0; i < n; i++){
        if(vetor[i] < 0){
            cout << vetor[i] << endl;
        }
    }

    return 0;
}
