#include <iostream>
#include <locale>

using namespace std;

struct Paciente{
    string nome;
    string sintoma;
    int idade;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Paciente p;
    int continuar = 0;

    do{

        cout << "Entre com o nome do paciente: " << endl;
        getline(cin, p.nome);

        cout << "Entre com a idade: " << endl;
        cin >> p.idade;

        cin.ignore(); // limpa buffer

        cout << "Entre com o sintoma: " << endl;
        getline(cin, p.sintoma);


        cout << "\n\n -------------- " << endl;
        cout << "Paciente: " << p.nome << endl;
        cout << "Idade: " << p.idade << endl;
        cout << "Sintoma: " << p.sintoma << endl;
        cout << " -------------- \n\n" << endl;


        cout << "Deseja continuar?  1 - Sim  |  2 - Não " << endl;
        cin >> continuar;

        cin.ignore(); // limpa buffer

        cout << endl << endl;


    }while(continuar != 2);

}
