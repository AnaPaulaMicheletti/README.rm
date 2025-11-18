#include <iostream>
#include <fstream>
using namespace std;

int main(){
double distancia, combustivel, medio, consumo, total = 0;
int linha = 0;

ifstream arquivo("consumo.txt");

cout << "Distancia: ";
cin >> distancia;

cout << "Combustivel: ";
cin >> combustivel;

while (arquivo >> distancia >> combustivel){
    consumo = distancia / combustivel;

    total = total + consumo;
    linha = linha + 1;
}

    medio = total / linha;

cout << "Consumo medio de cada linha: " << consumo << endl;
cout << "Consumo medio geral: " << medio;

    return 0;
}



//corrigir
