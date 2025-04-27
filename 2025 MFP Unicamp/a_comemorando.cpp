#include <bits/stdc++.h>
using namespace std;
//for(int i=0; i<n; i++){}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<int>amplitudes(n);
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        amplitudes[i] = a;
    }
    sort(begin(amplitudes),end(amplitudes));
    int pont = 0;
    for(int i=1; i<=m; i++){
        int cont = 0;
        while(pont < n) {
            if(amplitudes[pont] >= i) {
                cont = n - pont;
                break;
            } else {
                pont += 1;
            }
        }
        cout << cont << " ";
    }
    cout << "\n";
}

//g++ -std=gnu++17 -O2 -static -o c a_comemorando.cpp && ./c