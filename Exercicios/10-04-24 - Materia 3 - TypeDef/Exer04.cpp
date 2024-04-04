#include <iostream>
#include <vector>
#include <stdlib.h>
#include <time.h>

using namespace std;

typedef vector<int> VetorInteiros;

int main(){

    setlocale(LC_ALL, "Portuguese");
    srand (time(NULL));

    VetorInteiros inteiros(5);

    for (int i = 0; i < 5; i++){

        inteiros[i] = rand() % 100 + 1;

    }


    cout << " -- Números: --\n\n";

    for (int i = 0; i < 5; i++){

        cout << " " << inteiros[i];

    }

    cout << endl;


}

