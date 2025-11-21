#include <iostream>
using namespace std;

int main(){
    int n, a, b;

    cout << "Quantos valores vai ter cada vetor?";
    cin >> n;

    double vetor_a[n];
    double vetor_b[n];
    double vetor_c[n];

    cout << "Digite os valores do vetor A: " << endl;
    for(int i = 0; i < n; i++){
        cin >> a;
        vetor_a[i] = a;
    }

    cout << "Digite os valores do vetor B: " << endl;
    for(int i = 0; i < n; i++){
        cin >> b;
        vetor_b[i] = b;
    }

    double soma = 0;

    cout << "VETOR RESULTANTE: " << endl;
    for(int i = 0; i < n; i++){
        vetor_c[i] = vetor_a[i] + vetor_b[i];
        cout << vetor_c[i];
    }

    return 0;
}
