#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int numero;
    double valor;

    cout << "Quantos numeros vc vai digitar? " << endl;
    cin >> numero;

    double vetor[numero];  //cria vetor

    for(int i = 0; i < numero; i++){
        cout << "Digite um numero: " << endl;
        cin >> valor;
        vetor[i] = valor; //nesse caso o numero i(determinado pelo usuario) sera de quantos elementso ele quis
                          // começa a contar a partir do 0(zero)
    }

    cout << "NUMEROS DIGITADOS: " << endl;

    for(int i = 0; i < numero; i++){
        cout << fixed << setprecision(1) << vetor[0] << endl;
        cout << fixed << setprecision(1) << vetor[1] << endl;
        cout << fixed << setprecision(1) << vetor[2] << endl;
        cout << fixed << setprecision(1) << vetor[3] << endl;

    }

    return 0;
}