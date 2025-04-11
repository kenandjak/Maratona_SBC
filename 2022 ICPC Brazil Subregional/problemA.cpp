#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int t; string seq;
  cin >> t;
  cin >> seq;
  int cont=0;
  bool ind = true;
  for(int i=0; i<t; i++) {
    if(seq[i] == 'a') {
      if(i+1 < t and seq[i+1] == 'a') {
        ind = false;
        cont += 1;
      } else {
        if(!ind) {
          cont += 1;
          ind = true;
        }
      }
    }
  }
  cout << cont << "\n";
}
//g++ -std=gnu++17 -O2 -static -o c problemA.cpp && ./c
