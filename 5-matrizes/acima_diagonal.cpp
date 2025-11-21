#include <iostream>
using namespace std;

int main(){
int n;
double soma;

    cout << "Entrada" << endl;
    cout << "Qual a ordem da matriz? ";
    cin >> n;

    double matriz[n][n];

    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            cout << "Elemento[" << lin << "," << col << "]:";
            cin >> matriz[lin][col];
        }
    }

    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            if(col > lin){ //o col é assima da diagonal
                soma = soma + matriz[lin][col];
            }
        }
    }

    cout << "SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = " << soma;

    return 0;
}
