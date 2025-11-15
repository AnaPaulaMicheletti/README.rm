#include <iostream>
using namespace std;

int main(){
    float distancia, a, b, menor;

    cout << "Digite as tres distancias: ";
    cin >> distancia;
    
    cout << "";
    cin >> a;
    
    cout << "";
    cin >> b;

    if(distancia < a && distancia < b)
        menor = distancia;
    else if(a < distancia && a < b)
        menor = a;
    else
        menor = b;

    cout << "Menor: " << menor;
    return 0;
}