#include <iostream>
#include <cmath>
using namespace std;

int quadrado(int a){
    return pow(a, 2);
}

int triangulo(int a, int b){
    return (a * b) / 2;
}

int trapezio(int a, int b, int c){
    return ((a + b)* c) / 2;
}


int main(){
int quad, tri, trap, a, b, c;

    cout << "medida A: ";
    cin >> a;

    cout << "medida B: ";
    cin >> b;

    cout << "medida C: ";
    cin >> c;

    cout << "AREA DO QUADRADO: ";
    cin >> quad;

    cout << "AREA DO TRIANGULO: ";
    cin >> tri;

    cout << "AREA DO TRAPEZIO: ";
    cin >> trap;

    return 0;
}