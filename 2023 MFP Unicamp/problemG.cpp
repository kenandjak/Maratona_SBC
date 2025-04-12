#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, m, l, r;
  cin >> n >> m;
  for(int i=0; i<m; i++) {
    cin >> l >> r;
  }
  bool ind = true;
  for(int j=0; j<n; j++) {
    if(ind) {
      cout << '0';
      ind = false;
    } else {
      cout << '1';
      ind = true;
    }
  }
  cout << "\n";
}
//g++ -std=gnu++17 -O2 -static -o c problemG.cpp && ./c
