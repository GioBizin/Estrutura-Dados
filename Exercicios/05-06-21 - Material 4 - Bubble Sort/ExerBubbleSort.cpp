#include <iostream>
#include <locale>

using namespace std;

int main(){

    setlocale(LC_ALL, "Portuguese");

    int vet[6] = {8, 5, 3, 7, 4, 2}, aux = 0, j;
    bool troca = false;

    do{

        troca = false;

        for(int i = 5; i >= 0; i--){

            j = i - 1;

            if(j >= 0){

                if(vet[i] > vet[j]){

                aux = vet[j];

                vet[j] = vet[i];
                vet[i] = aux;

                troca = true;
                }

            }else{

                troca = false;

            }


        }

    }while(troca == true);


    for(int i = 0; i < 6; i++){

        cout << " " << vet[i];


    }


}
