//Abaixo de 17 ----------- Muito abaixo do peso
//Entre 17 e 18,49 ------- Abaixo do peso
//Entre 18,5 e 24,99 ----- Peso normal
//Entre 25 e 29,99 ------- Acima do Peso
//Entre 30 e 34,99 ------- Obesidade I
//Entre 35 e 39,99 ------- Obesidade II
//Acima de 40 ------------ Obesidade III(mórbida)

#include <iostream>
#include <cmath>

using namespace std;

int main(void) {
  float peso, altura, imc;

  cout << "Digite o seu peso\n";
  cin >> peso;
  cout << "Digite sua altura";
  cin >> altura;

  imc = peso/(pow(altura,2));

  if (imc < 17) {
    cout << "\n\nIMC=" << imc <<". Muito abaixo do peso!!!";
  }
  return 0;
}
