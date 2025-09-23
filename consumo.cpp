#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //float: para numeros decimais ou facionarios (numeros com casas decimaus Ex.3.14), ou ponto flutuantes (ele indica normalmente)
    float distancia, gasto, medio;

    cout << "Distancia percorrida: ";
    cin >> distancia;

    cout << "Gasto de combustivel usado: ";
    cin >> gasto;

    medio = distancia / gasto;
    
    cout << fixed << setprecision(3);
    cout << "O gasto medio de combustivel foi de " << medio << endl;
    
    
    return 0;
}
