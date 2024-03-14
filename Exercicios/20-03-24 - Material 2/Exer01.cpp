#include <iostream>
#include <locale>

using namespace std;

#define TAM 10

int main(){

    setlocale(LC_ALL, "Portuguese");

    string nome[TAM], procura;
    bool achar = false;

    for(int i = 0; i < TAM; i++){

        cout << "Digite o nome " << i + 1 << ": " << endl;
        cin >> nome[i];

    }

    cout << "Qual nome gostaria de achar?" << endl;
    cin >> procura;

    for(int i = 0; i < TAM; i++){

        if(nome[i] == procura){

            cout << "\nACHEI - SEQUÊNCIA: " << i + 1 << endl;
            i = TAM;
            achar = true;

        }

    }

    if(achar == false){
        cout << "\nNÃO ACHEI" << endl;
    }

}