/*
https://neps.academy/exercise/679
Fibonacci?
Fonte: Liga de Programação 2020 - Etapa 1
*/
#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 9;

int get(string s) {
  int res = 0;

  for (int i = 0; i < s.size(); i++)
    res = (10ll * res + 1ll * ((int)s[i] - '0')) % mod;

  return res;
}

int main(void) {
  string F;
  cin >> F;

  if (F == "1") {
    cout << "SIM\n";
    return 0;
  }

  int f = get(F);
  int a = 1, b = 1;

  for (int i = 0; i < 10000000; i++) {
    int c = (a + b) % mod;

    if (c == f) {
      cout << "SIM\n";
      return 0;
    }

    a = b, b = c;
  }

  cout << "NAO\n";
}
