#include <iostream>
using namespace std;

int pagamento(int valor, int horas){
    return valor * horas;
}

int main(){
int valor, horas, nome;
    cout << "Nome: ";
    cin >> nome;

    cout << "Valor por hora: ";
    cin >> valor;

    cout << "Horas trabalhadas: ";
    cin >> horas;

    cout << "O pagamento para" << nome << "deve ser " << pagamento;

    return 0;
}