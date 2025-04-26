#include <bits/stdc++.h>
using namespace std;
 
int main(){
  cin.tie(0)->sync_with_stdio(0);
  int d, m;
  cin >> d >> m;
  double x, y, diagonal, p1, p2;
  diagonal = d * sqrt(2);
  int qtd_hipot_percorridas = m / diagonal;
  p1 = m - qtd_hipot_percorridas * diagonal;
  if(qtd_hipot_percorridas == 0 or qtd_hipot_percorridas % 2 == 0){
    p2 = p1;
  } else {
    p2 = diagonal - p1;
  }
  x = m * sqrt(2)/2;
  y = p2 * sqrt(2)/2;
  cout << setprecision(10) << fixed;
  cout << x << " " << y << "\n";
}
//g++ -std=gnu++17 -O2 -static -o c c_ziguezague.cpp &&./c