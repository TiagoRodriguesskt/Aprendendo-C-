#include <iostream>
using namespace std;

int main(void) {
  char ch;

  cout << "Digite uma letra de A ate Z: ";
  cin >> ch;

  if (ch >= 'a' || 'A')
    if (ch <= 'z' || 'Z')
    cout << "\nVoce digitou certo!";
    return 0;
}
