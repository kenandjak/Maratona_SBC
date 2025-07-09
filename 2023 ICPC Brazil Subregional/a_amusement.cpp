#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n, h;
  cin >> n >> h;
  int a;
  int cont = 0;
  for(int i = 0; i < n; i++) {
    cin >> a;
    if(a <= h) {
        cont ++;
    }
  }
  cout << cont << "\n";
}
//g++ -std=gnu++17 -O2 -static -o c a_amusement.cpp && ./c
