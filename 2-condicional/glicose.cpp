#include <iostream>
using namespace std;

int main(){
    int glicose;

    cout << "Digite  a medida da glicose: ";
    cin >> glicose;

    if (glicose <= 100)
    {
        cout << "Classificacao: normal" << endl;
    }else if (glicose <= 140){
        cout << "Classificacao: elevado" << endl;
    }else if (glicose) {
        cout << "Classificacao: diabetes";
    }

//arrumar
    return 0;
}