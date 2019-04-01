#include <iostream>
using namespace std;

int main(void) {
  int num, resposta, acertos = 0, erros = 0;

  cout << "Digite qual numero da tabuada você quer estudar! ";
  cin >> num;

  for (int i = 1; i <= 10; i++) {
    cout << num << "x" << i << "=";
    cin >> resposta;
    if (resposta == (num * i)) {
      cout << "Acertou!!! ";
      acertos++;
    } else {
      cout << "Errou!!! ";
      erros++;
    }    //FIM DO BLOCO FOR
  }
  if (acertos == 10) {
    cout << "Parabens! Voce acertou tudo!";
  } else {
    cout << "Voce teve " << acertos << "acertos e " << erros << "erros";
  }
}
