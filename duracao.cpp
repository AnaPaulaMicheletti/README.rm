#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
// % é o resto da divisão
int main(){
    int duracao, tempoSeg, tempoMin, tempoHora; //resto

    cout << "Digite a duração em segundos: ";
    cin >> duracao;

    tempoHora = duracao / 3600;
    //ou " tempoHora = duracao /3600; "
    //   " resto = duracao % 3600; "

    tempoMin = (duracao % 3600) / 60;
    //   " tempoMin = resto / 60; "

    tempoSeg = duracao % 60;
    //   " tempoSeg = resto % 60; "
    
    cout << tempoHora << ":" << tempoMin << ":" << tempoSeg;

    return 0;
}
