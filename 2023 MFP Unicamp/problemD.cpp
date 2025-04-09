#include <bits/stdc++.h>
using namespace std;

int main(){
  ios::sync_with_stdio(0); cin.tie(0);
  double m1,m2,x1,x2,f;
  cin >> m1 >> m2 >> x1 >> x2 >> f;
  double d = abs(x2-x1);
  double g = f*pow(d,2)/(m1*m2);
  cout << setprecision(10) << fixed << g << "\n";
}
//g++ -std=gnu++17 -O2 -static -o c problemD.cpp
