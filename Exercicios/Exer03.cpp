#include <iostream>
#include <locale>

using namespace std;

#define NUM 10

int main ()
{
  
  setlocale(LC_ALL, "Portuguese");
  
  int vetA[NUM], vetM[NUM], X;
  
  
  for (int i = 0; i < NUM; i++){
	  
	  cout << "Digite o " << i + 1 << "° número:" << endl;
	  cin >> vetA[i];
	  
  }
  
  cout << "\nNúmero para a multiplicação: " << endl;
  cin >> X;
  
  cout << "\n\nProduto dos números por " << X << endl << endl;
  
  for (int i = 0; i < NUM; i++){
    
    vetM[i] = vetA[i] * X;
    
    cout << vetA[i] << " x " << X << " = " << vetM[i] << endl;
    
  }

}
