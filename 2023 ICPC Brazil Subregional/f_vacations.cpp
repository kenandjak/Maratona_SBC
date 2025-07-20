#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int d, c, r;
  cin >> d >> c >> r;
  vector<int>cst(c);
  for(int i=0; i<c; i++) {
    cin >> cst[i];
  }
  int rev, cont = r;
  for(int i=0; i<r; i++) {
    cin >> rev;
    d += rev;
  }
  for(int i=0; i<c; i++) {
    if(d-cst[i] >= 0) {
      d -= cst[i];
      cont ++;
    } else {
      break;
    }
  }
  cout << cont << "\n";
}

//g++ -std=gnu++17 -O2 -static -o c f_vacations.cpp && ./c
