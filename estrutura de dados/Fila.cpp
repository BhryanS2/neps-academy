/*
https://neps.academy/br/course/10/lesson/274
Fila (OBI2014)

*/
#include <bits/stdc++.h>

using namespace std;

vector<int> fila;

int main() {

  int n, m;
  cin >> n;

  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;

    fila.push_back(tmp);
  }

  cin >> m;

  set<int> sai;

  for (int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;

    sai.insert(tmp);
  }

  for (int i = 0; i < n; i++) {
    if (sai.find(fila[i]) == sai.end()) {
      cout << fila[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
