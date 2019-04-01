#include <iostream>
using namespace std;

int main(void) {
  int idade;
  char sexo;

  cout << "Qual a sua idade?\t ";
  cin >> idade;
  cout << "Digite (m) para Masculino, (f) para Feminino!\t";
  cin >> sexo;

  if (idade >= 18) {
    cout << "Voce ja pode dirigir!\n";

    if (sexo == 'm') {
      cout << "Voce tem que se alistar no exercito!";
    }
  } else {
    if (idade > 16) {
      cout << "Voce nao pode dirigir e nem votar!";
    }
  }
  return 0;
}
