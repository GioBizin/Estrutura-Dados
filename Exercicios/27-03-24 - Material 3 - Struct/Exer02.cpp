#include <iostream>
#include <locale>

using namespace std;

struct Livro{
    string titulo;
    string autor;
    int ano;
};

int main()
{
    setlocale(LC_ALL, "Portuguese");

    Livro l;

    cout << "Entre com o título do livro: " << endl;
    getline(cin, l.titulo);


    while(l.titulo != "fim"){

        cout << "Entre com o nome do autor: " << endl;
        getline(cin, l.autor);

        cout << "Entre com o ano de publicação: " << endl;
        cin >> l.ano;

        cout << "\n\n -------------- " << endl;
        cout << "Livro: " << l.titulo << endl;
        cout << "Autor: " << l.autor << endl;
        cout << "Ano de Publicação: " << l.ano << endl;
        cout << " -------------- \n\n" << endl;

        cin.ignore(); // limpa buffer

        cout << endl << endl;

        cout << "Entre com o título do livro: " << endl;
        getline(cin, l.titulo);


    };

}
