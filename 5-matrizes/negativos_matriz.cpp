#include <iostream>
using namespace std;

int main(){
int lin, col;

    cout << "Qual a quantidade de linhas da matriz?";
    cin >> lin;

    cout << "Qual a quantidade de colunas da matriz?";
    cin >> col;

    int matriz[lin][col];

    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
            cin >> matriz[i][j];
        }
    }

    cout << "VALORES NEGATIVOS: " << endl;
    for(int i = 0; i < lin; i++){
        for(int j = 0; j < col; j++){
        if (matriz[i][j] < 0){
            cout << matriz[i][j];
            }
        }
    }

    return 0;
}