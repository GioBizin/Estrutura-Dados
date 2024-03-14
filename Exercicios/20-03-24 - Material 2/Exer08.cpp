#include <iostream>
#include <locale>

using namespace std;

int main()
{

    setlocale(LC_ALL, "Portuguese");

    float soma = 0;
	int vet[5];
	int* pVet = &vet[0];



	for(int i = 0; i < 5; i++){
		cout << "Entre com o " << i + 1 << "° valor: " << endl;
        cin >> vet[i];
	}

	for(int i = 0; i < 5; i++){

		soma += *pVet;

		pVet++;
	}

	cout << "\nA média desses números é: " << soma / 5;


}
