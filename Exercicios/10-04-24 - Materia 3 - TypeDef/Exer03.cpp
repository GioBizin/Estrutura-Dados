#include <iostream>
#include <locale>
#include <string>

using namespace std;

typedef struct Endereco TipoEndereco;


struct Endereco{
    string rua;
    string cidade;
    string cep;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    TipoEndereco ender;

    cout << "Entre com o nome da Rua: " << endl;
    getline(cin, ender.rua);

    cout << "Entre com a cidade: " << endl;
    getline(cin, ender.cidade);

    cout << "Entre com o CEP: " << endl;
    getline(cin, ender.cep);

    cout << endl << endl << endl;

    cout << "\n ------- Endereço ------- " << endl;
    cout << "Rua: " << ender.rua << endl;
    cout << "Cidade: " << ender.cidade << endl;
    cout << "CEP: " << ender.cep << endl;
    cout << " -------------- \n" << endl;


}
