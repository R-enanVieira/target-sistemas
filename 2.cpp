#include <bits/stdc++.h>
using namespace std;

int main() {
  string s;
  cin.ignore();
  getline(cin, s);
  bool existe = false;
  int count = 0;

  for (char c : s) {
    if (c == 'a' or c == 'A') {
      existe = true;
      count++;
    }
  }

  if (existe)
    cout << "A string dada possui " << count << " caracteres 'a'.\n";
  else
    cout << "A string dada não possui nenhum caracter 'a'.\n";
}
