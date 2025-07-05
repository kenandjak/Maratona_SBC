#include <bits/stdc++.h>
using namespace std;
//for(int i=0; i<n; i++){}
int main(){
    cin.tie(0)->sync_with_stdio(0);
    int t, a, b, c;
    cin >> t;
    vector<int>sensores;
    for(int i=0; i<t; i++){
        cin >> a >> b >> c;
        sensores = {a, b, c};
        sort(begin(sensores),end(sensores));
        if(sensores[1] == sensores[0]) {
            cout << sensores[2];
        } else {
            cout << sensores[0];
        }
        cout << "\n";
    }
}

//g++ -std=gnu++17 -O2 -static -o c c_sensores.cpp && ./c