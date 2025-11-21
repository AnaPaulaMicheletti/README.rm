#include <iostream>
using namespace std;

int main(){
    int n;

    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;

    double altura[n];
    char genero[n];

    for(int i = 0; i < n; i++){
        cout << "Altura da pessoa " << i+1 << ": ";
        cin >> altura[i];

        cout << "Genero da pessoa " << i+1 << " (M/F): ";
        cin >> genero[i];
    }

    // menor e maior altura
    double menor = altura[0];
    double maior = altura[0];

    for(int i = 1; i < n; i++){
        if(altura[i] < menor){
            menor = altura[i];
        }
        if(altura[i] > maior){
            maior = altura[i];
        }
    }

    // média das mulheres e número de homens
    double somaMulher = 0;
    int qtdMulher = 0;
    int qtdHomem = 0;

    for(int i = 0; i < n; i++){
        if(genero[i] == 'F' || genero[i] == 'f'){
            somaMulher = somaMulher + altura[i];
            qtdMulher = qtdMulher + 1;
        }
        if(genero[i] == 'M' || genero[i] == 'm'){
            qtdHomem = qtdHomem + 1;
        }
    }

    double mediaMulher = somaMulher / qtdMulher;

    cout << "\nMenor altura = " << menor << endl;
    cout << "Maior altura = " << maior << endl;
    cout << "Media das alturas das mulheres = " << mediaMulher << endl;
    cout << "Numero de homens = " << qtdHomem << endl;

    return 0;
}
