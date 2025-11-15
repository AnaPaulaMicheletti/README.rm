#include <iostream>
using namespace std;

int main(){
int n;

    cout << "Qual a ordem da matriz?";
    cin >> n;

    int matriz[n][n];

    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            cout << "Elemento [" << lin << ";" << col << "]:";
            cin >> matriz[lin][col];
        }
    }

    cout << "MAIOR ELEMENTO DE CADA LINHA: " << endl;
    for(int i = 0; i < n; i++){
        int maior = matriz[i][0];
        for(int j = 1; j < n; j++){
            if(matriz[i][j] > maior){
            maior = matriz[i][j];
            }
        }
            cout << maior << endl;
    }


    return 0;
}

