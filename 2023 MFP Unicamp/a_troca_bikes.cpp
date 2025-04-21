#include <bits/stdc++.h>
using namespace std;

int main(){
  cin.tie(0)->sync_with_stdio(0);
  int t;
  cin >> t;
  for(int k=0; k<t; k++) {
    int n;
    cin >> n;
    vector<vector<int>>adj(n+1);
    for(int i=1; i<=n; i++){
        int p;
        cin >> p;
        adj[i].push_back(p);
    }
    int j = 0;
    int i = 1;
    while(i<=n){
        cout << i << " ";
        int a = i;
        while(adj[i][j] != a) {
          cout << adj[i][j] << " ";
          i = adj[i][j];
        }
        cout << "\n";
        i = a+1;
    }
  }
}
//g++ -std=gnu++17 -O2 -static -o c a_troca_bikes.cpp && ./c
