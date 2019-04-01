/*Esse script vai verificar se o número é negativo ou positivo*/

#include <iostream>
using namespace std;

int main(void) {
  int numero;

  cout << "Digite um numero: \n";
  cin >> numero;

  if (numero > 0) {
    cout << "O numero eh positivo!\n";
  } else {
    cout << "O numero eh negativo!\n";
  }
  cout << "Fim do programa";

  return 0;
}
