#include <bits/stdc++.h>
using namespace std;

int main() {
  cin.tie(0)->sync_with_stdio(0);
  int n;
  bool ind = true;
  for(int i=0; i<8; i++) {
    cin >> n;
    if(n == 9) {
        ind = false;
    }
  }
  if(ind) {
    cout << "S\n";
  } else {
    cout << "F\n";
  }  
}
//g++ -std=gnu++17 -O2 -static -o c problemI.cpp