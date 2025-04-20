#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  vector<int>v(4,0);
  for(int i=0; i<4; i++) {
    int x, y;
    cin >> x >> y;
    v[i] = x;
  }
  if(abs(v[0] - v[1]) > 0) {
    ll a = pow((v[0] - v[1]),2);
    cout << a << "\n";
  } else {
    ll a = pow((v[0] - v[2]),2);
    cout << a << "\n";
  }
}

//g++ -std=gnu++17 -O2 -static -o c b_cogumelos.cpp && ./c

/*
Obs: alocar o resultado na variável "a" em long long para não gerar W.A.
1000 0
1000 1000
0 1000
0 0
*/