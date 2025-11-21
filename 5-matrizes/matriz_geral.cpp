#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;

    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double matriz[n][n];

    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            cout << "Elemento[" << lin << "," << col << "]";
            cin >> matriz[lin][col];
        }
    }

    //soma de todos os numeros positivos
    double soma = 0;

    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            if(matriz[lin][col] > 0){
            soma = soma + matriz[lin][col];
            }
        }
    }
    cout << "SOMA DOS POSITIVOS:" << soma << endl;

    //ler os numeros da linha
    int linha;
        cout << "Escolha uma linha: ";
        cin >> linha;

        cout << "LINHA ESCOLHIDA: ";
            for(int col = 0; col < n; col++){
                cout << matriz[linha][col] << " ";
    }
    cout << endl;

    //ler os numeros da coluna
    int coluna;
        cout << "Escolha uma coluna: ";
        cin >> coluna;

        cout << "COLUNA ESCOLHIDA: ";
            for(int lin = 0; lin < n; lin++){
            cout << matriz[lin][coluna] << " ";
    }
    cout << endl;

    //ler os numeros da diagonal
    cout << "DIAGONAL PRINCIPAL: ";
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++)
          if(lin == col){
            cout << matriz[lin][col] << " ";
          }  
    }
    cout << endl;

    //elevar ao quadrado todos os numeros negativos da matriz
    cout << "MATRIZ ALTERADA: ";

    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            if(matriz[lin][col] < 0){
            matriz[lin][col] = pow(matriz[lin][col], 2);
            }
            cout << matriz[lin][col] << " ";
        }
    cout << endl;
    }

    return 0;
}
