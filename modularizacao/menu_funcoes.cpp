#include <iostream>
#include <iomanip>
using namespace std;



int main(){
    int n, a, b, c, media, maior, menor, opcao;

    do{
    
    //vetor
    cout << "Quantos numeros vc vai digitar: " << endl;
    cin >> n;
    
    int vetor[n];
    for(int i = 0; i < n; i++){
        cout << "Numeros: " << endl;
        cin >> vetor[i];
    }
    cout << "Numeros digitados: " << endl;

    for(int i = 0; i < n; i++){
        cout << vetor[i] << endl;
    }

    //media
    cout << "Valor de A: ";
    cin >> a;

    cout << "Valor de B: ";
    cin >> b;

    media = (a + b) / 2;
    cout << "Media: " << media << endl;

    //maior e menor valor
    cout << "Primeiro valor: ";
    cin >> a;

    cout << "Segundo valor: ";
    cin >> b;

    cout << "Terceiro valor: ";
    cin >> c;

    if(a < b && a < c)
        menor = a;
        
        else if(b < a && b < c)
            menor = b;
        else
            menor = c;

    cout << "Menor: " << menor << endl;

    if (a > b && a > c)
        maior = a;
        
        else if(b > a && b > c)
        maior = b;
        else
        maior = c;

    cout << "Maior: " << maior << endl;

    //contar pares
    int pares = 0;
    for(int i = 0; i < n; i++){
        if(vetor[i] % 2 == 0){
            pares = pares + 1;
        }
    }

    cout << "Quantidade de numeros pares: " << pares << endl;
    

    cout << "Deseja voltar ao menu? (sim = 1 ou nao = 2): ";
    cin >> opcao;
    
    }while (opcao == 1);
    

    return 0;
}
