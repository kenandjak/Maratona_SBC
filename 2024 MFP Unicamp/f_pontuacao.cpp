#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  int cont = 0;
  if(n >= 8) {
    n = n%8;
    cont ++;
  }
  if(n >= 4) {
    n = n%4;
    cont ++;
  }
  if(n >= 2) {
    n = n%2;
    cont ++;
  }
  if(n >= 1) {
    n = n%1;
    cont ++;
  }
  cout << cont << "\n";
}
//g++ -std=gnu++17 -O2 -static -o c f_pontuacao.cpp && ./c