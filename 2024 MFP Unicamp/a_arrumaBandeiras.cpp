#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  string b = "a";
  int t;
  for(int i=1; i<n; i++) {
    b = b + static_cast<char>(97+i) + b;
  }
  int tam = b.size();
  if(tam > 1e5) {
    tam = 1e5;
  }
  int p = 0;
  while(p<tam) {
    cout << b[p];
    p++;
  }
  cout << "\n";
}

//g++ -std=gnu++17 -O2 -static -o c a_arrumaBandeiras.cpp && ./c
