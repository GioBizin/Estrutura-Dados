#include <iostream>
#include <locale>

using namespace std;

#define TAM 20

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vet[TAM];

    for(int i = 0; i < TAM; i++){

        cout << "Digite o número: " << endl;
        cin >> vet[i];

        cout << endl;

    }

    for(int i = TAM - 1; i >= 0; i--){

        cout << vet[i] << " ";

    }

}