#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
  int num;

  cout << "Digite um numero: ";
  cin >> num;
    if (num % 2 == 0) {
      cout << "O numero eh PAR";
    } else {
      cout << "o numero eh IMPAR";
    }
    return 0;
}
