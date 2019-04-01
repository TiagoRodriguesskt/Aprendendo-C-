#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  int mes, dias;

  cout << "Digite o numero do mes: ";
  cin >> mes;

  switch (mes) {
    case 1:
        dias = 31;
        break;

    case 2:
        dias = 28;
        break;

    case 3:
      dias = 31;
      break;

    case 4:
      dias = 30;
      break;

    case 5:
      dias = 31;
      break;

    case 6:
      dias = 30;
      break;

    case 7:
      dias = 30;
      break;

    case 8:
      dias = 31;
      break;

    case 9:
      dias = 30;
      break;

    case 10:
      dias = 31;
      break;

    case 11:
      dias = 30;
      break;

    case 12:
      dias = 31;
      break;

      default:

          cout << "Voce digitou o mes invalido";
          break;
  }
  cout << "O mes " <<mes << " tem " <<dias << " dias.";
  return 0;
}
