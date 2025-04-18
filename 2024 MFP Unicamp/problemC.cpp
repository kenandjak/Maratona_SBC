#include <bits/stdc++.h>
using namespace std;

// Greatest Common Divisor - Máximo Divisor Comum
// Não deu certo
/*int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a%b);
}*/

int menor_comp(int a, int b) {
    int x = a - b;
    if(a % x == 0) return x;
    return menor_comp(a, b-1);
}

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int a, b;
  cin >> a >> b;
  int x = menor_comp(a, b);
  cout << x <<"\n";
}

//g++ -std=gnu++17 -O2 -static -o c problemC.cpp && ./c