#include <iostream>
#include <list>
#include <iterator>
#include <locale>

using namespace std;

void imprimeLista(list<int> lista)
{

	list<int>::const_iterator lis;

	if (lista.empty())
	{
		cout << "-- Lista Vazia --";
	}
	else {
		lis = lista.begin();
        do{
            cout << *lis << " ";
			lis++;
		}
		while (lis != lista.end());
	}
}

int main()
{
    setlocale(LC_ALL, "Portuguese");

	list<int> lista;

	int qtd, num, cont = 1;

	cout << "Quantos n�meros deseja cadastrar?" << endl;
	cin >> qtd;

    while(cont <= qtd){

        cout << "N�mero: \n";
        cin >> num;

        lista.push_back(num);

        cont++;

    }

	cout << "\n\n\n\n-- Impress�o da Lista --\n";

    imprimeLista(lista);

	cout << "\n\n\n\n-- Lista Inversa --\n";

	lista.reverse();
    imprimeLista(lista);

    cout << endl << endl << endl;

}
