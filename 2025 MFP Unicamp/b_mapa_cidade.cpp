#include <bits/stdc++.h>
using namespace std;

int bfs(int node, vector<bool>&visitado, vector<vector<int>>&adj, int count){
    queue<int>fila;
    fila.push(node);
    visitado[node] = true;
    while(!fila.empty()) {

        int vertice = fila.front(); fila.pop();
        for(auto vizinho : adj[vertice]){
            if(!visitado[vizinho]){
                visitado[vizinho] = true;
                fila.push(vizinho);
                count ++;
            }
        }
    }
    return count;
}

int main() {
    cin.tie(0) -> sync_with_stdio(0);
    int n, m;
    cin >> n >> m;
    vector<bool>visitado(n+1, false);
    vector<vector<int>>adj(n+1);
    for(int i=0; i<m; i++) {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    int count = 0;
    int k = -1;
    for(int j=1; j<=n; j++) {
        if(!visitado[j]) {
            k += 1;
            count = bfs(j, visitado, adj, count);
        }
    }
    if(m-count == 0 and k == 0) {
      cout << "BOM\n";
    } else {
      cout << "RUIM " << m-count << " " << k << "\n";
    }
}

//g++ -std=gnu++17 -O2 -static -o c b_mapa_cidade.cpp && ./c