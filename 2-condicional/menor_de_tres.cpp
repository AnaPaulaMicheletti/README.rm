#include <iostream>

using namespace std;

int main(){
    int vlr1, vlr2, vlr3, menor;

    cout << "Primeiro valor: ";
    cin >> vlr1;

    cout << "Segundo valor: ";
    cin >> vlr2;

    cout << "Terceiro valor: ";
    cin >> vlr3;

    if (vlr1 < vlr2 && vlr1 <vlr3)
        menor = vlr1;
    else if (vlr2 < vlr1 && vlr2 < vlr3)
        menor = vlr2;
    else
        menor = vlr3;

    cout << "Menor: " << menor;
    return 0;
}