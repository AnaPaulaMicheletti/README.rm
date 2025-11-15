#include <iostream> //matriz quadrada é o mesmo numero de linha e coluna
using namespace std;

int main(){
int n,qntnegativos;
    cout << "Qual a ordem da matriz?";
    cin >> n;

    int matriz[n][n]; //n nesse caso é o numero escolhido para as colunas e linhas

    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            cout << "Elemento [" << lin << "," << col << "]: ";
            cin >> matriz[lin][col];
            if (matriz[lin][col] < 0){
                qntnegativos++;
            }
        }
    } 
    // lin = linha e col = coluna
    // matriz principal: a q corta na diagonal

    cout << "DIAGONAL PRINCIPAL: " << endl;
    
    for(int lin = 0; lin < n; lin++){
        for(int col = 0; col < n; col++){
            if(lin == col){
                cout << matriz[lin][col] << " ";
                qntnegativos++;
            }
        }
    }
    cout << endl;
    cout << "QUANTIDADE DE NEGATIVOS = " << qntnegativos;
    
    return 0;
}