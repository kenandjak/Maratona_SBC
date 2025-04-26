#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(0)->sync_with_stdio(0);
    string p;
    cin >> p;
    string p1,p2;
    for(int i=0; i<p.size(); i++){
        if(i==0 or i%2 == 0) {
            p1 += p[i];
        } else {
            p2 += p[i];
        }
    }
    cout << p1 << "\n" << p2 << "\n";
}

//g++ -std=gnu++17 -O2 -static -o c g_mixer.cpp && ./c