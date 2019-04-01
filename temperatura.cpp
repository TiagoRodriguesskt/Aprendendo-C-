#include <iostream>
using namespace std;

int main() {
  int t;

  cout << "Qual a temperatura atual? ";
  cin >> t;

  if (t > 20) {
    cout << "Esta quente. Um soverte cairia bem!\n\n";
  } else {
    cout << "Esta frio. Agasalhe-se.\n\n";
  }
  cout << "=+=+ THE END +=+=";
  return 0;
}
