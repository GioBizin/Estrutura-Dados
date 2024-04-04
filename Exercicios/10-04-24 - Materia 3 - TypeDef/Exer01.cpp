#include <iostream>
#include <locale>
#include <string>

using namespace std;

struct Pessoa{
    string nome;
    string endereco;
    string cpf;
    int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Pessoa p[5];

    for(int i = 0; i < 5; i++){

        cout << "Entre com o nome: " << endl;
        getline(cin, p[i].nome);

        cout << "Entre com o endereço: " << endl;
        getline(cin, p[i].endereco);

        cout << "Entre com o CPF: " << endl;
        getline(cin, p[i].cpf);

        cout << "Entre com a idade: " << endl;
        cin >> p[i].idade;


        cin.ignore(); // limpa buffer

        cout << endl << endl;


    }


    cout << endl;



    for(int i = 0; i < 5; i++){

        cout << "\n ------- Pessoa "<< i+1 << " ------- " << endl;
        cout << "Nome: " << p[i].nome << endl;
        cout << "Endereço: " << p[i].endereco << endl;
        cout << "CPF: " << p[i].cpf << endl;
        cout << "Idade: " << p[i].idade << endl;
        cout << " -------------- \n" << endl;


    }


}
