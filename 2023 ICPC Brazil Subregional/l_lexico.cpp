#include <bits/stdc++.h>
using namespace std;

/*
A ordenação é feita em trechos intercalados da string; 
não é necessário percorrer a string inteira, pelos mesmos valores.
Ex.: S = splaheda e K = 3
Como K = 3, os elementos que precisam alternar entre si são:
posições: 0, 3, 6 -> s, a, d -> ordenado: a, d, s
posições: 1, 4, 7 -> p, h, a -> ordenado: a, h, p
posições: 2, 5    -> l, e    -> ordenado: e, l

Solução: aaedhlsp
*/

int main(){
  cin.tie(0)->sync_with_stdio(0);
  string charada;
  cin >> charada;
  int k;
  cin >> k;

  int i = 0;
  while(i<k and i+k < charada.size()) {
    vector<char>s;
    for(int j=i; j<charada.size(); j+=k) {
        s.emplace_back(charada[j]);
    }
    sort(s.begin(), s.end());
    int l = 0, j = i;
    while(l<s.size()) {
        charada[j] = s[l];
        j += k;
        l ++;
    }
    i++;
  }
  cout << charada << "\n";
}

//g++ -std=gnu++17 -O2 -static -o c l_lexico.cpp && ./c