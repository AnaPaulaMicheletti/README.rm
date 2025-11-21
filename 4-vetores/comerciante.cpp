#include <iostream>
#include <string>
using namespace std;

int main(){
    int n;

    cout << "Serao digitadas quantas mercadorias? ";
    cin >> n;

    string nome[n];
    double compra[n];
    double venda[n];

    for(int i = 0; i < n; i++){
        cout << "Nome da mercadoria: ";
        cin.ignore();
        getline(cin, nome[i]);

        cout << "Preco de compra: ";
        cin >> compra[i];

        cout << "Preco de venda: ";
        cin >> venda[i];
    }

    int abaixo10 = 0;
    int entre1020 = 0;
    int acima20 = 0;

    double totalCompra = 0;
    double totalVenda = 0;

    for(int i = 0; i < n; i++){
        double lucro = venda[i] - compra[i];
        double percentual = lucro / compra[i] * 100.0;

        if(percentual < 10){
            abaixo10++;
        }
        else if(percentual <= 20){
            entre1020++;
        }
        else{
            acima20++;
        }

        totalCompra = totalCompra + compra[i];
        totalVenda = totalVenda + venda[i];
    }

    double lucroTotal = totalVenda - totalCompra;

    cout << "\nRELATORIO:\n";
    cout << "Lucro abaixo de 10%: " << abaixo10 << endl;
    cout << "Lucro entre 10% e 20%: " << entre1020 << endl;
    cout << "Lucro acima de 20%: " << acima20 << endl;

    cout << "Valor total de compra: " << totalCompra << endl;
    cout << "Valor total de venda: " << totalVenda << endl;
    cout << "Lucro total: " << lucroTotal << endl;

    return 0;
}
