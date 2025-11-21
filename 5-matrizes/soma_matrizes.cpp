#include <iostream>
using namespace std;

int main(){
int linha, coluna;

    cout << "Quantas linhas vai ter cada matriz?" << endl;
    cin >> linha;

    cout << "Quantas colunas vai ter cada matriz? " << endl;
    cin >> coluna;

    double matriz_a[linha][coluna];
    double matriz_b[linha][coluna];
    double matriz_c[linha][coluna];

    cout << "Digite os valores da matriz A: " << endl;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++ ){
            cout << "Elemento [" << i << "," << j <<"]:";
            cin >> matriz_a[i][j];
        }
    }

    cout << "Digite os valores da matriz B: " << endl;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++ ){
            cout << "Elemento [" << i << "," << j <<"]:";
            cin >> matriz_b[i][j];
        }
    }
    
    cout << "MATRIZ SOMA: " << endl;
    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            matriz_c[i][j] = matriz_a[i][j] + matriz_b[i][j];
        
           cout << matriz_c[i][j] << " " << endl;
        }
    }


    return 0;
}
