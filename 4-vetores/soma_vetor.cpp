#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int n;
    double soma = 0, media;

    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;

    double vetor[n];

    for(int i = 0; i < n; i++){
        cout << "Digite um numero: ";
        cin >> vetor[i];
    }

    // ler todos os numeros do vetor
    cout << "VALORES = ";
    for(int i = 0; i < n; i++){
        cout << vetor[i] << " " << fixed << setprecision(2);
    }
    cout << endl;

    //soma
    for(int i = 0; i < n; i++){
        soma = soma + vetor[i];
    }
    cout << "SOMA = " << soma << fixed << setprecision(2) << endl;

    //media
    // o "n" é pela quantidade de numeros escolhidos no inicio
    media = soma / n;
    cout << "MEDIA = " << media << fixed << setprecision(2);


    return 0;
}
