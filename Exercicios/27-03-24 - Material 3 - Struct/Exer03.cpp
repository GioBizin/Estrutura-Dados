#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

struct Avaliacao{
    int enredo;
    int atuacao;
    int efeitos;
};

int main()
{
    cout << fixed << setprecision(2);

    setlocale(LC_ALL, "Portuguese");

    Avaliacao filme;
    int continuar = 0;
    double soma, media = 0;

    do{

        cout << "Entre com sua avaliação para o: Enredo" << endl;
        cin >> filme.enredo;

        cout << "Entre com sua avaliação para a: Atuação" << endl;
        cin >> filme.atuacao;

        cout << "Entre com sua avaliação para o: Efeitos Especiais" << endl;
        cin >> filme.efeitos;

        soma = (filme.enredo + filme.atuacao + filme.efeitos);

        media = soma / 3;

        cout << "\n\n -------------- " << endl;
        cout << "Nota média: " << media << endl;
        cout << " -------------- \n\n" << endl;


        cout << "Deseja continuar?  1 - Sim  |  2 - Não " << endl;
        cin >> continuar;

        cin.ignore(); // limpa buffer

        cout << endl << endl;


    }while(continuar != 2);

}
