#include <iostream>
#include <locale>

using namespace std;

int main ()
{
  
  setlocale(LC_ALL, "Portuguese");
  
  int N;
  
  cout << "Digite a quantidade de números: " << endl;
  cin >> N;
  
  int vetA[N], vetB[N], vetSoma[N];
  
  
  cout << "\n-- Vetor A --" << endl;
  
  for (int i = 0; i < N; i++){
	  
	  cout << "Digite o " << i + 1 << "° número:" << endl;
	  cin >> vetA[i];
	  
  }
  
  cout << endl << endl << "\n-- Vetor B --" << endl;
  
  for (int i = 0; i < N; i++){
	  
	  cout << "Digite o " << i + 1 << "° número:" << endl;
	  cin >> vetB[i];
	  
  }
  
  
  cout << "\n\n-- Soma dos Vetores --" << endl << endl;
  
  for (int i = 0; i < N; i++){
    
    vetSoma[i] = vetA[i] + vetB[i];
    
    cout << vetA[i] << " + " << vetB[i] << " = " << vetSoma[i] << endl;
    
  }

}