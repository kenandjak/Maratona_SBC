#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int cont = 0;
  for(int i=0; i<8; i++) {
    int bit;
    cin >> bit;
    if(bit == 1) {
        cont += 1;
    }
  }
  if(cont % 2 == 0) {
    cout << "N?\n";
  } else {
    cout << "S\n";
  }
}
//g++ -std=gnu++17 -O2 -static -o c problemE.cpp