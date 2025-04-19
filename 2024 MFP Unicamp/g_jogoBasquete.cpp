#include <bits/stdc++.h>
using namespace std;

// função atoi converte string para inteiro
int main(){
  cin.tie(0)->sync_with_stdio(0);
  int n;
  cin >> n;
  cin.ignore();
  vector<int>times(2,0);
  for(int i=0; i<n; i++){
    string time;
    getline(cin,time);
    int p = atoi(&time[8]);
    if(time[5] == '1') {
        times[0] += p;
    } else {
        times[1] += p;
    }
  }
  cout << times[0] << " x " << times[1] << "\n";
}

//g++ -std=gnu++17 -O2 -static -o c g_jogoBasquete.cpp && ./c