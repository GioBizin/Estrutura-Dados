#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Restaurante{
    string prato;
    float preco, total;
    int qtde;
};

int main() {
    setlocale(LC_ALL, "Portuguese");

    vector<Restaurante> pedidos;

    //char continuar = 's';

    Restaurante pedido;

    cout << "-------------------" << endl;
    cout << "Registro de Pedidos" << endl;
    cout << "-------------------" << endl;


    do{

        cout << "Nome do prato: ";
        getline(cin, pedido.prato);

        cout << "Preço do prato: ";
        cin >> pedido.preco;

        cout << "Quantidade de pratos: ";
        cin >> pedido.qtde;

        pedido.total = pedido.preco * pedido.qtde;

        if(pedido.preco != 0){
            pedidos.push_back(pedido);
        }

        cout << "\nPedido registrado!" << endl << endl;

        cout << "--------------" << endl << endl;


        cin.ignore();  // Limpar o newline do buffer de entrada

    }while (pedido.preco != 0);

    cout << "\n\n---- PEDIDOS ----\n\n";

    for (const auto& ped : pedidos) {
        cout << "Prato: " << ped.prato << "\nPreço: " << ped.preco << "\nQuantidade: " << ped.qtde <<  "\nTotal: " << ped.total << endl;
        cout << "--------------" << endl << endl;

    }

}
