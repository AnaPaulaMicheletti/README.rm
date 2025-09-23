#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int valor, hora, tempo_trabalhado, pagamento;
    string name;

    cout << "Nome do funcionario: ";
    cin >> name;
    // ou "getline(cin,name);"

    cout << "Valor por hora: ";
    cin >> valor;

    cout << "Horas trabalhadas: ";
    cin >> tempo_trabalhado;

    pagamento = valor * tempo_trabalhado;

    cout << fixed << setprecision(2);
    cout << "O pagamento para " << name << " deve ser " << pagamento << endl;

    return 0;
}
